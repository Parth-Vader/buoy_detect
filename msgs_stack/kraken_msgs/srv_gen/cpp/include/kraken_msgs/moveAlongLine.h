/* Auto-generated by genmsg_cpp for file /home/dyutimoy/kinetic_workspace/kraken_3.0-indigo-devel/msgs_stack/kraken_msgs/srv/moveAlongLine.srv */
#ifndef KRAKEN_MSGS_SERVICE_MOVEALONGLINE_H
#define KRAKEN_MSGS_SERVICE_MOVEALONGLINE_H
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

#include "ros/service_traits.h"




namespace kraken_msgs
{
template <class ContainerAllocator>
struct moveAlongLineRequest_ {
  typedef moveAlongLineRequest_<ContainerAllocator> Type;

  moveAlongLineRequest_()
  : type(0)
  , angle(0.0)
  {
  }

  moveAlongLineRequest_(const ContainerAllocator& _alloc)
  : type(0)
  , angle(0.0)
  {
  }

  typedef uint32_t _type_type;
  uint32_t type;

  typedef float _angle_type;
  float angle;


  typedef boost::shared_ptr< ::kraken_msgs::moveAlongLineRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kraken_msgs::moveAlongLineRequest_<ContainerAllocator>  const> ConstPtr;
}; // struct moveAlongLineRequest
typedef  ::kraken_msgs::moveAlongLineRequest_<std::allocator<void> > moveAlongLineRequest;

typedef boost::shared_ptr< ::kraken_msgs::moveAlongLineRequest> moveAlongLineRequestPtr;
typedef boost::shared_ptr< ::kraken_msgs::moveAlongLineRequest const> moveAlongLineRequestConstPtr;



template <class ContainerAllocator>
struct moveAlongLineResponse_ {
  typedef moveAlongLineResponse_<ContainerAllocator> Type;

  moveAlongLineResponse_()
  : result(0)
  {
  }

  moveAlongLineResponse_(const ContainerAllocator& _alloc)
  : result(0)
  {
  }

  typedef uint32_t _result_type;
  uint32_t result;


  typedef boost::shared_ptr< ::kraken_msgs::moveAlongLineResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kraken_msgs::moveAlongLineResponse_<ContainerAllocator>  const> ConstPtr;
}; // struct moveAlongLineResponse
typedef  ::kraken_msgs::moveAlongLineResponse_<std::allocator<void> > moveAlongLineResponse;

typedef boost::shared_ptr< ::kraken_msgs::moveAlongLineResponse> moveAlongLineResponsePtr;
typedef boost::shared_ptr< ::kraken_msgs::moveAlongLineResponse const> moveAlongLineResponseConstPtr;


struct moveAlongLine
{

typedef moveAlongLineRequest Request;
typedef moveAlongLineResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct moveAlongLine
} // namespace kraken_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::kraken_msgs::moveAlongLineRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::kraken_msgs::moveAlongLineRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::kraken_msgs::moveAlongLineRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "b3102c5805e525d5fae6d2c6cce31144";
  }

  static const char* value(const  ::kraken_msgs::moveAlongLineRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xb3102c5805e525d5ULL;
  static const uint64_t static_value2 = 0xfae6d2c6cce31144ULL;
};

template<class ContainerAllocator>
struct DataType< ::kraken_msgs::moveAlongLineRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "kraken_msgs/moveAlongLineRequest";
  }

  static const char* value(const  ::kraken_msgs::moveAlongLineRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::kraken_msgs::moveAlongLineRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
\n\
\n\
\n\
uint32 type\n\
float32 angle\n\
\n\
\n\
";
  }

  static const char* value(const  ::kraken_msgs::moveAlongLineRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::kraken_msgs::moveAlongLineRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::kraken_msgs::moveAlongLineResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::kraken_msgs::moveAlongLineResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::kraken_msgs::moveAlongLineResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "13d5d28ceaaadbc975dd072a2e10b88a";
  }

  static const char* value(const  ::kraken_msgs::moveAlongLineResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x13d5d28ceaaadbc9ULL;
  static const uint64_t static_value2 = 0x75dd072a2e10b88aULL;
};

template<class ContainerAllocator>
struct DataType< ::kraken_msgs::moveAlongLineResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "kraken_msgs/moveAlongLineResponse";
  }

  static const char* value(const  ::kraken_msgs::moveAlongLineResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::kraken_msgs::moveAlongLineResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
uint32 result\n\
\n\
";
  }

  static const char* value(const  ::kraken_msgs::moveAlongLineResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::kraken_msgs::moveAlongLineResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::kraken_msgs::moveAlongLineRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.type);
    stream.next(m.angle);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct moveAlongLineRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::kraken_msgs::moveAlongLineResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.result);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct moveAlongLineResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<kraken_msgs::moveAlongLine> {
  static const char* value() 
  {
    return "83d2c27254d8886c28fb825aec6949dd";
  }

  static const char* value(const kraken_msgs::moveAlongLine&) { return value(); } 
};

template<>
struct DataType<kraken_msgs::moveAlongLine> {
  static const char* value() 
  {
    return "kraken_msgs/moveAlongLine";
  }

  static const char* value(const kraken_msgs::moveAlongLine&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<kraken_msgs::moveAlongLineRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "83d2c27254d8886c28fb825aec6949dd";
  }

  static const char* value(const kraken_msgs::moveAlongLineRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<kraken_msgs::moveAlongLineRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "kraken_msgs/moveAlongLine";
  }

  static const char* value(const kraken_msgs::moveAlongLineRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<kraken_msgs::moveAlongLineResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "83d2c27254d8886c28fb825aec6949dd";
  }

  static const char* value(const kraken_msgs::moveAlongLineResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<kraken_msgs::moveAlongLineResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "kraken_msgs/moveAlongLine";
  }

  static const char* value(const kraken_msgs::moveAlongLineResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // KRAKEN_MSGS_SERVICE_MOVEALONGLINE_H
