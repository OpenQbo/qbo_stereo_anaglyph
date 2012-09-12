/* Auto-generated by genmsg_cpp for file /opt/ros/electric/stacks/hrl/hrl_srvs/srv/String_None.srv */
#ifndef HRL_SRVS_SERVICE_STRING_NONE_H
#define HRL_SRVS_SERVICE_STRING_NONE_H
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




namespace hrl_srvs
{
template <class ContainerAllocator>
struct String_NoneRequest_ {
  typedef String_NoneRequest_<ContainerAllocator> Type;

  String_NoneRequest_()
  : data()
  {
  }

  String_NoneRequest_(const ContainerAllocator& _alloc)
  : data(_alloc)
  {
  }

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _data_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  data;


private:
  static const char* __s_getDataType_() { return "hrl_srvs/String_NoneRequest"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "992ce8a1687cec8c8bd883ec73ca41d1"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getServerMD5Sum_() { return "992ce8a1687cec8c8bd883ec73ca41d1"; }
public:
  ROS_DEPRECATED static const std::string __s_getServerMD5Sum() { return __s_getServerMD5Sum_(); }

  ROS_DEPRECATED const std::string __getServerMD5Sum() const { return __s_getServerMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "string data\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, data);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, data);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(data);
    return size;
  }

  typedef boost::shared_ptr< ::hrl_srvs::String_NoneRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hrl_srvs::String_NoneRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct String_NoneRequest
typedef  ::hrl_srvs::String_NoneRequest_<std::allocator<void> > String_NoneRequest;

typedef boost::shared_ptr< ::hrl_srvs::String_NoneRequest> String_NoneRequestPtr;
typedef boost::shared_ptr< ::hrl_srvs::String_NoneRequest const> String_NoneRequestConstPtr;


template <class ContainerAllocator>
struct String_NoneResponse_ {
  typedef String_NoneResponse_<ContainerAllocator> Type;

  String_NoneResponse_()
  {
  }

  String_NoneResponse_(const ContainerAllocator& _alloc)
  {
  }


private:
  static const char* __s_getDataType_() { return "hrl_srvs/String_NoneResponse"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "d41d8cd98f00b204e9800998ecf8427e"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getServerMD5Sum_() { return "992ce8a1687cec8c8bd883ec73ca41d1"; }
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

  typedef boost::shared_ptr< ::hrl_srvs::String_NoneResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hrl_srvs::String_NoneResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct String_NoneResponse
typedef  ::hrl_srvs::String_NoneResponse_<std::allocator<void> > String_NoneResponse;

typedef boost::shared_ptr< ::hrl_srvs::String_NoneResponse> String_NoneResponsePtr;
typedef boost::shared_ptr< ::hrl_srvs::String_NoneResponse const> String_NoneResponseConstPtr;

struct String_None
{

typedef String_NoneRequest Request;
typedef String_NoneResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct String_None
} // namespace hrl_srvs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::hrl_srvs::String_NoneRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::hrl_srvs::String_NoneRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::hrl_srvs::String_NoneRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "992ce8a1687cec8c8bd883ec73ca41d1";
  }

  static const char* value(const  ::hrl_srvs::String_NoneRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x992ce8a1687cec8cULL;
  static const uint64_t static_value2 = 0x8bd883ec73ca41d1ULL;
};

template<class ContainerAllocator>
struct DataType< ::hrl_srvs::String_NoneRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "hrl_srvs/String_NoneRequest";
  }

  static const char* value(const  ::hrl_srvs::String_NoneRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::hrl_srvs::String_NoneRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "string data\n\
\n\
";
  }

  static const char* value(const  ::hrl_srvs::String_NoneRequest_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::hrl_srvs::String_NoneResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::hrl_srvs::String_NoneResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::hrl_srvs::String_NoneResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const  ::hrl_srvs::String_NoneResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::hrl_srvs::String_NoneResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "hrl_srvs/String_NoneResponse";
  }

  static const char* value(const  ::hrl_srvs::String_NoneResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::hrl_srvs::String_NoneResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
\n\
\n\
";
  }

  static const char* value(const  ::hrl_srvs::String_NoneResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::hrl_srvs::String_NoneResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::hrl_srvs::String_NoneRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.data);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct String_NoneRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::hrl_srvs::String_NoneResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct String_NoneResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<hrl_srvs::String_None> {
  static const char* value() 
  {
    return "992ce8a1687cec8c8bd883ec73ca41d1";
  }

  static const char* value(const hrl_srvs::String_None&) { return value(); } 
};

template<>
struct DataType<hrl_srvs::String_None> {
  static const char* value() 
  {
    return "hrl_srvs/String_None";
  }

  static const char* value(const hrl_srvs::String_None&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<hrl_srvs::String_NoneRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "992ce8a1687cec8c8bd883ec73ca41d1";
  }

  static const char* value(const hrl_srvs::String_NoneRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<hrl_srvs::String_NoneRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "hrl_srvs/String_None";
  }

  static const char* value(const hrl_srvs::String_NoneRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<hrl_srvs::String_NoneResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "992ce8a1687cec8c8bd883ec73ca41d1";
  }

  static const char* value(const hrl_srvs::String_NoneResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<hrl_srvs::String_NoneResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "hrl_srvs/String_None";
  }

  static const char* value(const hrl_srvs::String_NoneResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // HRL_SRVS_SERVICE_STRING_NONE_H

