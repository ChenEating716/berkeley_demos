/* Auto-generated by genmsg_cpp for file /home/aellaboudy/aellaboudy_sandbox/gt_packages_new/gt_packages/hrl/hrl_srvs/srv/FloatArray_None.srv */
#ifndef HRL_SRVS_SERVICE_FLOATARRAY_NONE_H
#define HRL_SRVS_SERVICE_FLOATARRAY_NONE_H
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
struct FloatArray_NoneRequest_ : public ros::Message
{
  typedef FloatArray_NoneRequest_<ContainerAllocator> Type;

  FloatArray_NoneRequest_()
  : val()
  {
  }

  FloatArray_NoneRequest_(const ContainerAllocator& _alloc)
  : val(_alloc)
  {
  }

  typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _val_type;
  std::vector<double, typename ContainerAllocator::template rebind<double>::other >  val;


  ROS_DEPRECATED uint32_t get_val_size() const { return (uint32_t)val.size(); }
  ROS_DEPRECATED void set_val_size(uint32_t size) { val.resize((size_t)size); }
  ROS_DEPRECATED void get_val_vec(std::vector<double, typename ContainerAllocator::template rebind<double>::other > & vec) const { vec = this->val; }
  ROS_DEPRECATED void set_val_vec(const std::vector<double, typename ContainerAllocator::template rebind<double>::other > & vec) { this->val = vec; }
private:
  static const char* __s_getDataType_() { return "hrl_srvs/FloatArray_NoneRequest"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "65ac3f59e35977c61c27adccf4c68288"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getServerMD5Sum_() { return "65ac3f59e35977c61c27adccf4c68288"; }
public:
  ROS_DEPRECATED static const std::string __s_getServerMD5Sum() { return __s_getServerMD5Sum_(); }

  ROS_DEPRECATED const std::string __getServerMD5Sum() const { return __s_getServerMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "float64[] val\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, val);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, val);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(val);
    return size;
  }

  typedef boost::shared_ptr< ::hrl_srvs::FloatArray_NoneRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hrl_srvs::FloatArray_NoneRequest_<ContainerAllocator>  const> ConstPtr;
}; // struct FloatArray_NoneRequest
typedef  ::hrl_srvs::FloatArray_NoneRequest_<std::allocator<void> > FloatArray_NoneRequest;

typedef boost::shared_ptr< ::hrl_srvs::FloatArray_NoneRequest> FloatArray_NoneRequestPtr;
typedef boost::shared_ptr< ::hrl_srvs::FloatArray_NoneRequest const> FloatArray_NoneRequestConstPtr;


template <class ContainerAllocator>
struct FloatArray_NoneResponse_ : public ros::Message
{
  typedef FloatArray_NoneResponse_<ContainerAllocator> Type;

  FloatArray_NoneResponse_()
  {
  }

  FloatArray_NoneResponse_(const ContainerAllocator& _alloc)
  {
  }


private:
  static const char* __s_getDataType_() { return "hrl_srvs/FloatArray_NoneResponse"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "d41d8cd98f00b204e9800998ecf8427e"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getServerMD5Sum_() { return "65ac3f59e35977c61c27adccf4c68288"; }
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

  typedef boost::shared_ptr< ::hrl_srvs::FloatArray_NoneResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hrl_srvs::FloatArray_NoneResponse_<ContainerAllocator>  const> ConstPtr;
}; // struct FloatArray_NoneResponse
typedef  ::hrl_srvs::FloatArray_NoneResponse_<std::allocator<void> > FloatArray_NoneResponse;

typedef boost::shared_ptr< ::hrl_srvs::FloatArray_NoneResponse> FloatArray_NoneResponsePtr;
typedef boost::shared_ptr< ::hrl_srvs::FloatArray_NoneResponse const> FloatArray_NoneResponseConstPtr;

struct FloatArray_None
{

typedef FloatArray_NoneRequest Request;
typedef FloatArray_NoneResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct FloatArray_None
} // namespace hrl_srvs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator>
struct MD5Sum< ::hrl_srvs::FloatArray_NoneRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "65ac3f59e35977c61c27adccf4c68288";
  }

  static const char* value(const  ::hrl_srvs::FloatArray_NoneRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x65ac3f59e35977c6ULL;
  static const uint64_t static_value2 = 0x1c27adccf4c68288ULL;
};

template<class ContainerAllocator>
struct DataType< ::hrl_srvs::FloatArray_NoneRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "hrl_srvs/FloatArray_NoneRequest";
  }

  static const char* value(const  ::hrl_srvs::FloatArray_NoneRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::hrl_srvs::FloatArray_NoneRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "float64[] val\n\
\n\
";
  }

  static const char* value(const  ::hrl_srvs::FloatArray_NoneRequest_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator>
struct MD5Sum< ::hrl_srvs::FloatArray_NoneResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const  ::hrl_srvs::FloatArray_NoneResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::hrl_srvs::FloatArray_NoneResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "hrl_srvs/FloatArray_NoneResponse";
  }

  static const char* value(const  ::hrl_srvs::FloatArray_NoneResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::hrl_srvs::FloatArray_NoneResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
\n\
\n\
";
  }

  static const char* value(const  ::hrl_srvs::FloatArray_NoneResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::hrl_srvs::FloatArray_NoneResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::hrl_srvs::FloatArray_NoneRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.val);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct FloatArray_NoneRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::hrl_srvs::FloatArray_NoneResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct FloatArray_NoneResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<hrl_srvs::FloatArray_None> {
  static const char* value() 
  {
    return "65ac3f59e35977c61c27adccf4c68288";
  }

  static const char* value(const hrl_srvs::FloatArray_None&) { return value(); } 
};

template<>
struct DataType<hrl_srvs::FloatArray_None> {
  static const char* value() 
  {
    return "hrl_srvs/FloatArray_None";
  }

  static const char* value(const hrl_srvs::FloatArray_None&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<hrl_srvs::FloatArray_NoneRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "65ac3f59e35977c61c27adccf4c68288";
  }

  static const char* value(const hrl_srvs::FloatArray_NoneRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<hrl_srvs::FloatArray_NoneRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "hrl_srvs/FloatArray_None";
  }

  static const char* value(const hrl_srvs::FloatArray_NoneRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<hrl_srvs::FloatArray_NoneResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "65ac3f59e35977c61c27adccf4c68288";
  }

  static const char* value(const hrl_srvs::FloatArray_NoneResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<hrl_srvs::FloatArray_NoneResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "hrl_srvs/FloatArray_None";
  }

  static const char* value(const hrl_srvs::FloatArray_NoneResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // HRL_SRVS_SERVICE_FLOATARRAY_NONE_H

