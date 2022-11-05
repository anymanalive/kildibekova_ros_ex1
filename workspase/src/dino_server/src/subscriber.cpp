#include "ros/ros.h"
#include "dino_service/DinoGenerator.h"
#include "std_msgs/String.h"

ros::ServiceServer service;
ros::Publisher pub;
ros::Subscriber sub;

const std::string ENDINGS_ARR[10] = {"saurus", "raptor", "pteryx",
                                     "stacator", "rex", "ceratops",
                                     "gnathus", "roides", "draco",
                                     "dromeus"};
const std::string FACTS_ARR[10] = {" was a very bulky animal with a"
                                   " laterally thickened tail, and"
                                   " an expanded, like a duck, beak",
                                   " ate a huge amount of vegetation"
                                   " in a day",
                                   " was a peaceful, herbivorous"
                                   " animal with a large body and"
                                   " long hind limbs",
                                   " was a bipedal lizard, which,"
                                   " according to experts, was one"
                                   " of the most grandiose predators"
                                   " that ever roamed the Earth,"
                                   " lived about 100 million years"
                                   " ago and weighed about 6 tons",
                                   " moved on two hind legs",
                                   " was a large herbivorous"
                                   " dinosaur that transitioned"
                                   " from walking on two legs to"
                                   " walking on four",
                                   " inhabited the period: late"
                                   " Jurassic, 154-150 million"
                                   " years ago",
                                   " fed on small mammals, which"
                                   " it killed with its beak",
                                   " is one of the few sauropod"
                                   " species that lived in the"
                                   " Late Cretaceous period",
                                   " was one of the smallest dinosaurs"};

std::string generateDinoName(std::string raw_word);
bool replyAndPublishDN(dino_service::DinoGenerator::Request &req,
                       dino_service::DinoGenerator::Response &res);
std::string generateDinoFact(std::string dino_name);
void processesAndPrint(const std_msgs::String &sub_dino_name);


int main(int argc, char ** argv)
{
    ros::init(argc, argv, "dino_name_generator_server");
    ros::NodeHandle n;

    service = n.advertiseService("dino_name_generator", replyAndPublishDN);
    pub = n.advertise<std_msgs::String>("dino_name_topic", 10);
    sub = n.subscribe("dino_name_topic", 10, processesAndPrint);

    ROS_INFO_STREAM("Server is ready\n");
    ros::spin();
    return 0;
}


              // Functions //

// Selects a random ending from the array [ENDINGS_ARR]
//  and glues it with [raw_word] (the word received
//  in the request to the server) after writing
//  it with a capital letter
std::string generateDinoName(std::string raw_word)
{
    srand(time(NULL));
    unsigned int rand_num = rand() % 10;
    raw_word[0] = (char)toupper(raw_word[0]);
    return raw_word + ENDINGS_ARR[rand_num];
}

// Records the generated dinosaur name as a
//  server response and publishes it to a topic
bool replyAndPublishDN(dino_service::DinoGenerator::Request &req,
                       dino_service::DinoGenerator::Response &res)
{
    res.dino_name = generateDinoName(req.word);

    // publishing to a topic
    std_msgs::String pub_dino_name;
    pub_dino_name.data = res.dino_name;
    pub.publish(pub_dino_name);

    return true;
}

// Selects a random fact about dinosaurs
//  from the array [FACTS_ARR] and glues it
//  with [dino_name]
std::string generateDinoFact(std::string dino_name)
{
    srand(time(NULL));
    unsigned int rand_num = rand() % 10;
    return dino_name + FACTS_ARR[rand_num];
}

// Processes the dinosaurs name received by the
//  subscriber and prints it to the console
void processesAndPrint(const std_msgs::String &sub_dino_name)
{
    ROS_INFO_STREAM(generateDinoFact(sub_dino_name.data).c_str());
}

