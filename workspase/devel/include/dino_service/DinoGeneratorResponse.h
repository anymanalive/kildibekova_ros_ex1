// Generated by gencpp from file dino_service/DinoGeneratorResponse.msg
// DO NOT EDIT!


#ifndef DINO_SERVICE_MESSAGE_DINOGENERATORRESPONSE_H
#define DINO_SERVICE_MESSAGE_DINOGENERATORRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace dino_service
{
template <class ContainerAllocator>
struct DinoGeneratorResponse_
{
  typedef DinoGeneratorResponse_<ContainerAllocator> Type;

  DinoGeneratorResponse_()
    : dino_name()  {
    }
  DinoGeneratorResponse_(const ContainerAllocator& _alloc)
    : dino_name(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _dino_name_type;
  _dino_name_type dino_name;





  typedef boost::shared_ptr< ::dino_service::DinoGeneratorResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dino_service::DinoGeneratorResponse_<ContainerAllocator> const> ConstPtr;

}; // struct DinoGeneratorResponse_

typedef ::dino_service::DinoGeneratorResponse_<std::allocator<void> > DinoGeneratorResponse;

typedef boost::shared_ptr< ::dino_service::DinoGeneratorResponse > DinoGeneratorResponsePtr;
typedef boost::shared_ptr< ::dino_service::DinoGeneratorResponse const> DinoGeneratorResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dino_service::DinoGeneratorResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dino_service::DinoGeneratorResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dino_service::DinoGeneratorResponse_<ContainerAllocator1> & lhs, const ::dino_service::DinoGeneratorResponse_<ContainerAllocator2> & rhs)
{
  return lhs.dino_name == rhs.dino_name;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dino_service::DinoGeneratorResponse_<ContainerAllocator1> & lhs, const ::dino_service::DinoGeneratorResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dino_service

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::dino_service::DinoGeneratorResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dino_service::DinoGeneratorResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dino_service::DinoGeneratorResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dino_service::DinoGeneratorResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dino_service::DinoGeneratorResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dino_service::DinoGeneratorResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dino_service::DinoGeneratorResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ea2ca4c17f5a337d40dac4f6eb540f6a";
  }

  static const char* value(const ::dino_service::DinoGeneratorResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xea2ca4c17f5a337dULL;
  static const uint64_t static_value2 = 0x40dac4f6eb540f6aULL;
};

template<class ContainerAllocator>
struct DataType< ::dino_service::DinoGeneratorResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dino_service/DinoGeneratorResponse";
  }

  static const char* value(const ::dino_service::DinoGeneratorResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dino_service::DinoGeneratorResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string dino_name\n"
"\n"
;
  }

  static const char* value(const ::dino_service::DinoGeneratorResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dino_service::DinoGeneratorResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.dino_name);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DinoGeneratorResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dino_service::DinoGeneratorResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dino_service::DinoGeneratorResponse_<ContainerAllocator>& v)
  {
    s << indent << "dino_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.dino_name);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DINO_SERVICE_MESSAGE_DINOGENERATORRESPONSE_H
