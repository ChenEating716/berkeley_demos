/* Auto-generated by genmsg_cpp for file /home/aellaboudy/aellaboudy_sandbox/gt_packages_new/gt_packages/hrl/hrl_hardware_drivers/phantom_omni/msg/PhantomButtonEvent.msg */
#ifndef PHANTOM_OMNI_MESSAGE_PHANTOMBUTTONEVENT_H
#define PHANTOM_OMNI_MESSAGE_PHANTOMBUTTONEVENT_H
#include <string>
#include <vector>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/message.h"
#include "ros/time.h"


namespace phantom_omni
{
template <class ContainerAllocator>
struct PhantomButtonEvent_ : public ros::Message
{
  typedef PhantomButtonEvent_<ContainerAllocator> Type;

  PhantomButtonEvent_()
  : grey_button(0)
  , white_button(0)
  {
  }

  PhantomButtonEvent_(const ContainerAllocator& _alloc)
  : grey_button(0)
  , white_button(0)
  {
  }

  typedef int32_t _grey_button_type;
  int32_t grey_button;

  typedef int32_t _white_button_type;
  int32_t white_button;


private:
  static const char* __s_getDataType_() { return "phantom_omni/PhantomButtonEvent"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "fb77877e6b639935c3360838062f05f0"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "int32 grey_button\n\
int32 white_button\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, grey_button);
    ros::serialization::serialize(stream, white_button);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, grey_button);
    ros::serialization::deserialize(stream, white_button);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(grey_button);
    size += ros::serialization::serializationLength(white_button);
    return size;
  }

  typedef boost::shared_ptr< ::phantom_omni::PhantomButtonEvent_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::phantom_omni::PhantomButtonEvent_<ContainerAllocator>  const> ConstPtr;
}; // struct PhantomButtonEvent
typedef  ::phantom_omni::PhantomButtonEvent_<std::allocator<void> > PhantomButtonEvent;

typedef boost::shared_ptr< ::phantom_omni::PhantomButtonEvent> PhantomButtonEventPtr;
typedef boost::shared_ptr< ::phantom_omni::PhantomButtonEvent const> PhantomButtonEventConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::phantom_omni::PhantomButtonEvent_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::phantom_omni::PhantomButtonEvent_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace phantom_omni

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator>
struct MD5Sum< ::phantom_omni::PhantomButtonEvent_<ContainerAllocator> > {
  static const char* value() 
  {
    return "fb77877e6b639935c3360838062f05f0";
  }

  static const char* value(const  ::phantom_omni::PhantomButtonEvent_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xfb77877e6b639935ULL;
  static const uint64_t static_value2 = 0xc3360838062f05f0ULL;
};

template<class ContainerAllocator>
struct DataType< ::phantom_omni::PhantomButtonEvent_<ContainerAllocator> > {
  static const char* value() 
  {
    return "phantom_omni/PhantomButtonEvent";
  }

  static const char* value(const  ::phantom_omni::PhantomButtonEvent_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::phantom_omni::PhantomButtonEvent_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int32 grey_button\n\
int32 white_button\n\
\n\
";
  }

  static const char* value(const  ::phantom_omni::PhantomButtonEvent_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::phantom_omni::PhantomButtonEvent_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::phantom_omni::PhantomButtonEvent_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.grey_button);
    stream.next(m.white_button);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct PhantomButtonEvent_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::phantom_omni::PhantomButtonEvent_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::phantom_omni::PhantomButtonEvent_<ContainerAllocator> & v) 
  {
    s << indent << "grey_button: ";
    Printer<int32_t>::stream(s, indent + "  ", v.grey_button);
    s << indent << "white_button: ";
    Printer<int32_t>::stream(s, indent + "  ", v.white_button);
  }
};


} // namespace message_operations
} // namespace ros

#endif // PHANTOM_OMNI_MESSAGE_PHANTOMBUTTONEVENT_H

