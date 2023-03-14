// Generated by gencpp from file wpb_home_tutorials/FollowRequest.msg
// DO NOT EDIT!


#ifndef WPB_HOME_TUTORIALS_MESSAGE_FOLLOWREQUEST_H
#define WPB_HOME_TUTORIALS_MESSAGE_FOLLOWREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace wpb_home_tutorials
{
template <class ContainerAllocator>
struct FollowRequest_
{
  typedef FollowRequest_<ContainerAllocator> Type;

  FollowRequest_()
    : thredhold(0.0)  {
    }
  FollowRequest_(const ContainerAllocator& _alloc)
    : thredhold(0.0)  {
  (void)_alloc;
    }



   typedef float _thredhold_type;
  _thredhold_type thredhold;





  typedef boost::shared_ptr< ::wpb_home_tutorials::FollowRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::wpb_home_tutorials::FollowRequest_<ContainerAllocator> const> ConstPtr;

}; // struct FollowRequest_

typedef ::wpb_home_tutorials::FollowRequest_<std::allocator<void> > FollowRequest;

typedef boost::shared_ptr< ::wpb_home_tutorials::FollowRequest > FollowRequestPtr;
typedef boost::shared_ptr< ::wpb_home_tutorials::FollowRequest const> FollowRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::wpb_home_tutorials::FollowRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::wpb_home_tutorials::FollowRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::wpb_home_tutorials::FollowRequest_<ContainerAllocator1> & lhs, const ::wpb_home_tutorials::FollowRequest_<ContainerAllocator2> & rhs)
{
  return lhs.thredhold == rhs.thredhold;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::wpb_home_tutorials::FollowRequest_<ContainerAllocator1> & lhs, const ::wpb_home_tutorials::FollowRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace wpb_home_tutorials

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::wpb_home_tutorials::FollowRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::wpb_home_tutorials::FollowRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::wpb_home_tutorials::FollowRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::wpb_home_tutorials::FollowRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::wpb_home_tutorials::FollowRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::wpb_home_tutorials::FollowRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::wpb_home_tutorials::FollowRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c112d3700d2186140dee3c92caad02d8";
  }

  static const char* value(const ::wpb_home_tutorials::FollowRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc112d3700d218614ULL;
  static const uint64_t static_value2 = 0x0dee3c92caad02d8ULL;
};

template<class ContainerAllocator>
struct DataType< ::wpb_home_tutorials::FollowRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "wpb_home_tutorials/FollowRequest";
  }

  static const char* value(const ::wpb_home_tutorials::FollowRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::wpb_home_tutorials::FollowRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 thredhold\n"
;
  }

  static const char* value(const ::wpb_home_tutorials::FollowRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::wpb_home_tutorials::FollowRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.thredhold);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FollowRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::wpb_home_tutorials::FollowRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::wpb_home_tutorials::FollowRequest_<ContainerAllocator>& v)
  {
    s << indent << "thredhold: ";
    Printer<float>::stream(s, indent + "  ", v.thredhold);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WPB_HOME_TUTORIALS_MESSAGE_FOLLOWREQUEST_H
