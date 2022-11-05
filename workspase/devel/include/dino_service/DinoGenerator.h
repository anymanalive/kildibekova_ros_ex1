// Generated by gencpp from file dino_service/DinoGenerator.msg
// DO NOT EDIT!


#ifndef DINO_SERVICE_MESSAGE_DINOGENERATOR_H
#define DINO_SERVICE_MESSAGE_DINOGENERATOR_H

#include <ros/service_traits.h>


#include <dino_service/DinoGeneratorRequest.h>
#include <dino_service/DinoGeneratorResponse.h>


namespace dino_service
{

struct DinoGenerator
{

typedef DinoGeneratorRequest Request;
typedef DinoGeneratorResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct DinoGenerator
} // namespace dino_service


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dino_service::DinoGenerator > {
  static const char* value()
  {
    return "05cbef6d39d9b92810fa937192b245b1";
  }

  static const char* value(const ::dino_service::DinoGenerator&) { return value(); }
};

template<>
struct DataType< ::dino_service::DinoGenerator > {
  static const char* value()
  {
    return "dino_service/DinoGenerator";
  }

  static const char* value(const ::dino_service::DinoGenerator&) { return value(); }
};


// service_traits::MD5Sum< ::dino_service::DinoGeneratorRequest> should match
// service_traits::MD5Sum< ::dino_service::DinoGenerator >
template<>
struct MD5Sum< ::dino_service::DinoGeneratorRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dino_service::DinoGenerator >::value();
  }
  static const char* value(const ::dino_service::DinoGeneratorRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dino_service::DinoGeneratorRequest> should match
// service_traits::DataType< ::dino_service::DinoGenerator >
template<>
struct DataType< ::dino_service::DinoGeneratorRequest>
{
  static const char* value()
  {
    return DataType< ::dino_service::DinoGenerator >::value();
  }
  static const char* value(const ::dino_service::DinoGeneratorRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dino_service::DinoGeneratorResponse> should match
// service_traits::MD5Sum< ::dino_service::DinoGenerator >
template<>
struct MD5Sum< ::dino_service::DinoGeneratorResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dino_service::DinoGenerator >::value();
  }
  static const char* value(const ::dino_service::DinoGeneratorResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dino_service::DinoGeneratorResponse> should match
// service_traits::DataType< ::dino_service::DinoGenerator >
template<>
struct DataType< ::dino_service::DinoGeneratorResponse>
{
  static const char* value()
  {
    return DataType< ::dino_service::DinoGenerator >::value();
  }
  static const char* value(const ::dino_service::DinoGeneratorResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DINO_SERVICE_MESSAGE_DINOGENERATOR_H