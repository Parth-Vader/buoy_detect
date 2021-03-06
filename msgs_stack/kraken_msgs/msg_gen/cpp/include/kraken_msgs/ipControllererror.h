/* Auto-generated by genmsg_cpp for file /home/dyutimoy/kinetic_workspace/kraken_3.0-indigo-devel/msgs_stack/kraken_msgs/msg/ipControllererror.msg */
#ifndef KRAKEN_MSGS_MESSAGE_IPCONTROLLERERROR_H
#define KRAKEN_MSGS_MESSAGE_IPCONTROLLERERROR_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"


namespace kraken_msgs
{
template <class ContainerAllocator>
struct ipControllererror_ {
  typedef ipControllererror_<ContainerAllocator> Type;

  ipControllererror_()
  : dx(0.0)
  , dy(0.0)
  , dz(0.0)
  {
  }

  ipControllererror_(const ContainerAllocator& _alloc)
  : dx(0.0)
  , dy(0.0)
  , dz(0.0)
  {
  }

  typedef float _dx_type;
  float dx;

  typedef float _dy_type;
  float dy;

  typedef float _dz_type;
  float dz;


  typedef boost::shared_ptr< ::kraken_msgs::ipControllererror_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kraken_msgs::ipControllererror_<ContainerAllocator>  const> ConstPtr;
}; // struct ipControllererror
typedef  ::kraken_msgs::ipControllererror_<std::allocator<void> > ipControllererror;

typedef boost::shared_ptr< ::kraken_msgs::ipControllererror> ipControllererrorPtr;
typedef boost::shared_ptr< ::kraken_msgs::ipControllererror const> ipControllererrorConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::kraken_msgs::ipControllererror_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::kraken_msgs::ipControllererror_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace kraken_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::kraken_msgs::ipControllererror_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::kraken_msgs::ipControllererror_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::kraken_msgs::ipControllererror_<ContainerAllocator> > {
  static const char* value() 
  {
    return "4ab42549fa178ce73d9539e3218875e9";
  }

  static const char* value(const  ::kraken_msgs::ipControllererror_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x4ab42549fa178ce7ULL;
  static const uint64_t static_value2 = 0x3d9539e3218875e9ULL;
};

template<class ContainerAllocator>
struct DataType< ::kraken_msgs::ipControllererror_<ContainerAllocator> > {
  static const char* value() 
  {
    return "kraken_msgs/ipControllererror";
  }

  static const char* value(const  ::kraken_msgs::ipControllererror_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::kraken_msgs::ipControllererror_<ContainerAllocator> > {
  static const char* value() 
  {
    return "float32 dx\n\
float32 dy\n\
float32 dz\n\
";
  }

  static const char* value(const  ::kraken_msgs::ipControllererror_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::kraken_msgs::ipControllererror_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::kraken_msgs::ipControllererror_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.dx);
    stream.next(m.dy);
    stream.next(m.dz);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct ipControllererror_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kraken_msgs::ipControllererror_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::kraken_msgs::ipControllererror_<ContainerAllocator> & v) 
  {
    s << indent << "dx: ";
    Printer<float>::stream(s, indent + "  ", v.dx);
    s << indent << "dy: ";
    Printer<float>::stream(s, indent + "  ", v.dy);
    s << indent << "dz: ";
    Printer<float>::stream(s, indent + "  ", v.dz);
  }
};


} // namespace message_operations
} // namespace ros

#endif // KRAKEN_MSGS_MESSAGE_IPCONTROLLERERROR_H

