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

std::string random_dino_name(std::string raw_word);
bool get_dino_name(dino_service::DinoGenerator::Request &req,
                   dino_service::DinoGenerator::Response &res);
std::string get_dino_fact(std::string name);
void reader(const std_msgs::String & mesage);


int main(int argc, char ** argv)
{
    ros::init(argc, argv, "dino_name_generator_server");
    ros::NodeHandle n;

    service = n.advertiseService("dino_name_generator", get_dino_name);
    pub = n.advertise<std_msgs::String>("dino_name_topic", 10);    
    sub = n.subscribe("dino_name_topic", 10, reader);
    
    ROS_INFO_STREAM("Server is ready\n");
    ros::spin();
    
    return 0;
}


                 // Functions //
                 
// Selects a random ending from the array [ENDINGS_ARR] 
//  and glues it with [raw_word] (the word received
//  in the request to the server) after writing
//  it with a capital letter
std::string random_dino_name(std::string raw_word)
{
    srand(time(NULL));
    unsigned int rand_num = rand() % 10;
    raw_word[0] = (char)toupper(raw_word[0]);
    return raw_word + ENDINGS_ARR[rand_num];
}

// Records the generated dinosaur name as a
//  server response and publishes it to a topic
bool get_dino_name(dino_service::DinoGenerator::Request &req,
                   dino_service::DinoGenerator::Response &res)
{
    res.dino_name = random_dino_name(req.word);

    // publishing to a topic
    std_msgs::String d_name;
    d_name.data = res.dino_name;
    pub.publish(d_name);
    
    return true;
}

// Selects a random fact about dinosaurs
//  from the array [FACTS_ARR] and glues it
//  with [name] (dinosaur name)
std::string get_dino_fact(std::string name)
{
    srand(time(NULL));
    unsigned int rand_num = rand() % 10;
    return name + FACTS_ARR[rand_num];
}

// Processes the message received by the
//  subscriber and prints it to the console
void reader(const std_msgs::String & message)
{
    ROS_INFO_STREAM(get_dino_fact(message.data).c_str());
}
