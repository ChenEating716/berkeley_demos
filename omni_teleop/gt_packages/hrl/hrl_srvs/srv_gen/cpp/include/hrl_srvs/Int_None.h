/* Auto-generated by genmsg_cpp for file /home/aellaboudy/aellaboudy_sandbox/gt_packages_new/gt_packages/hrl/hrl_srvs/srv/Int_None.srv */
#ifndef HRL_SRVS_SERVICE_INT_NONE_H
#define HRL_SRVS_SERVICE_INT_NONE_H
#include <string>
#include <vector>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/message.h"
#include "ros/time.h"

#include "ros/service_traits.h"




namespace hrl_srvs
{
template <class ContainerAllocator>
struct Int_NoneRequest_ : public ros::Message
{
  typedef Int_NoneRequest_<ContainerAllocator> Type;

  Int_NoneRequest_()
  : a(0)
  {
  }

  Int_NoneRequest_(const ContainerAllocator& _alloc)
  : a(0)
  {
  }

  typedef int8_t _a_type;
  int8_t a;


private:
  static const char* __s_getDataType_() { return "hrl_srvs/Int_NoneRequest"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "4eec2979cc688371cc0e7f01aea37ad1"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getServerMD5Sum_() { return "4eec2979cc688371cc0e7f01aea37ad1"; }
public:
  ROS_DEPRECATED static const std::string __s_getServerMD5Sum() { return __s_getServerMD5Sum_(); }

  ROS_DEPRECATED const std::string __getServerMD5Sum() const { return __s_getServerMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "int8 a\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, a);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, a);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(a);
    return size;
  }

  typedef boost::shared_ptr< ::hrl_srvs::Int_NoneRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hrl_srvs::Int_NoneRequest_<ContainerAllocator>  const> ConstPtr;
}; // struct Int_NoneRequest
typedef  ::hrl_srvs::Int_NoneRequest_<std::allocator<void> > Int_NoneRequest;

typedef boost::shared_ptr< ::hrl_srvs::Int_NoneRequest> Int_NoneRequestPtr;
typedef boost::shared_ptr< ::hrl_srvs::Int_NoneRequest const> Int_NoneRequestConstPtr;


template <class ContainerAllocator>
struct Int_NoneResponse_ : public ros::Message
{
  typedef Int_NoneResponse_<ContainerAllocator> Type;

  Int_NoneResponse_()
  {
  }

  Int_NoneResponse_(const ContainerAllocator& _alloc)
  {
  }


private:
  static const char* __s_getDataType_() { return "hrl_srvs/Int_NoneResponse"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "d41d8cd98f00b204e9800998ecf8427e"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getServerMD5Sum_() { return "4eec2979cc688371cc0e7f01aea37ad1"; }
public:
  ROS_DEPRECATED static const std::string __s_getServerMD5Sum() { return __s_getServerMD5Sum_(); }

  ROS_DEPRECATED const std::string __getServerMD5Sum() const { return __s_getServerMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "\n\
\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    return size;
  }

  typedef boost::shared_ptr< ::hrl_srvs::Int_NoneResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hrl_srvs::Int_NoneResponse_<ContainerAllocator>  const> ConstPtr;
}; // struct Int_NoneResponse
typedef  ::hrl_srvs::Int_NoneResponse_<std::allocator<void> > Int_NoneResponse;

typedef boost::shared_ptr< ::hrl_srvs::Int_NoneResponse> Int_NoneResponsePtr;
typedef boost::shared_ptr< ::hrl_srvs::Int_NoneResponse const> Int_NoneResponseConstPtr;

struct Int_None
{

typedef Int_NoneRequest Request;
typedef Int_NoneResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct Int_None
} // namespace hrl_srvs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator>
struct MD5Sum< ::hrl_srvs::Int_NoneRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "4eec2979cc688371cc0e7f01aea37ad1";
  }

  static const char* value(const  ::hrl_srvs::Int_NoneRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x4eec2979cc688371ULL;
  static const uint64_t static_value2 = 0xcc0e7f01aea37ad1ULL;
};

template<class ContainerAllocator>
struct DataType< ::hrl_srvs::Int_NoneRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "hrl_srvs/Int_NoneRequest";
  }

  static const char* value(const  ::hrl_srvs::Int_NoneRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::hrl_srvs::Int_NoneRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int8 a\n\
\n\
";
  }

  static const char* value(const  ::hrl_srvs::Int_NoneRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::hrl_srvs::Int_NoneRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator>
struct MD5Sum< ::hrl_srvs::Int_NoneResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const  ::hrl_srvs::Int_NoneResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::hrl_srvs::Int_NoneResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "hrl_srvs/Int_NoneResponse";
  }

  static const char* value(const  ::hrl_srvs::Int_NoneResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::hrl_srvs::Int_NoneResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
\n\
\n\
";
  }

  static const char* value(const  ::hrl_srvs::Int_NoneResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::hrl_srvs::Int_NoneResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::hrl_srvs::Int_NoneRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.a);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct Int_NoneRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::hrl_srvs::Int_NoneResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct Int_NoneResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<hrl_srvs::Int_None> {
  static const char* value() 
  {
    return "4eec2979cc688371cc0e7f01aea37ad1";
  }

  static const char* value(const hrl_srvs::Int_None&) { return value(); } 
};

template<>
struct DataType<hrl_srvs::Int_None> {
  static const char* value() 
  {
    return "hrl_srvs/Int_None";
  }

  static const char* value(const hrl_srvs::Int_None&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<hrl_srvs::Int_NoneRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "4eec2979cc688371cc0e7f01aea37ad1";
  }

  static const char* value(const hrl_srvs::Int_NoneRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<hrl_srvs::Int_NoneRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "hrl_srvs/Int_None";
  }

  static const char* value(const hrl_srvs::Int_NoneRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<hrl_srvs::Int_NoneResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "4eec2979cc688371cc0e7f01aea37ad1";
  }

  static const char* value(const hrl_srvs::Int_NoneResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<hrl_srvs::Int_NoneResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "hrl_srvs/Int_None";
  }

  static const char* value(const hrl_srvs::Int_NoneResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // HRL_SRVS_SERVICE_INT_NONE_H

