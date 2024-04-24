// Generated by gencpp from file pp_msgs/MoveItPluginResponse.msg
// DO NOT EDIT!


#ifndef PP_MSGS_MESSAGE_MOVEITPLUGINRESPONSE_H
#define PP_MSGS_MESSAGE_MOVEITPLUGINRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <trajectory_msgs/JointTrajectory.h>

namespace pp_msgs
{
template <class ContainerAllocator>
struct MoveItPluginResponse_
{
  typedef MoveItPluginResponse_<ContainerAllocator> Type;

  MoveItPluginResponse_()
    : plan()  {
    }
  MoveItPluginResponse_(const ContainerAllocator& _alloc)
    : plan(_alloc)  {
  (void)_alloc;
    }



   typedef  ::trajectory_msgs::JointTrajectory_<ContainerAllocator>  _plan_type;
  _plan_type plan;





  typedef boost::shared_ptr< ::pp_msgs::MoveItPluginResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pp_msgs::MoveItPluginResponse_<ContainerAllocator> const> ConstPtr;

}; // struct MoveItPluginResponse_

typedef ::pp_msgs::MoveItPluginResponse_<std::allocator<void> > MoveItPluginResponse;

typedef boost::shared_ptr< ::pp_msgs::MoveItPluginResponse > MoveItPluginResponsePtr;
typedef boost::shared_ptr< ::pp_msgs::MoveItPluginResponse const> MoveItPluginResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pp_msgs::MoveItPluginResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pp_msgs::MoveItPluginResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::pp_msgs::MoveItPluginResponse_<ContainerAllocator1> & lhs, const ::pp_msgs::MoveItPluginResponse_<ContainerAllocator2> & rhs)
{
  return lhs.plan == rhs.plan;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::pp_msgs::MoveItPluginResponse_<ContainerAllocator1> & lhs, const ::pp_msgs::MoveItPluginResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace pp_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::pp_msgs::MoveItPluginResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pp_msgs::MoveItPluginResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pp_msgs::MoveItPluginResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pp_msgs::MoveItPluginResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pp_msgs::MoveItPluginResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pp_msgs::MoveItPluginResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pp_msgs::MoveItPluginResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1406506fbfd269e79e1a93b4e8386da6";
  }

  static const char* value(const ::pp_msgs::MoveItPluginResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1406506fbfd269e7ULL;
  static const uint64_t static_value2 = 0x9e1a93b4e8386da6ULL;
};

template<class ContainerAllocator>
struct DataType< ::pp_msgs::MoveItPluginResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pp_msgs/MoveItPluginResponse";
  }

  static const char* value(const ::pp_msgs::MoveItPluginResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pp_msgs::MoveItPluginResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "trajectory_msgs/JointTrajectory plan \n"
"\n"
"================================================================================\n"
"MSG: trajectory_msgs/JointTrajectory\n"
"Header header\n"
"string[] joint_names\n"
"JointTrajectoryPoint[] points\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: trajectory_msgs/JointTrajectoryPoint\n"
"# Each trajectory point specifies either positions[, velocities[, accelerations]]\n"
"# or positions[, effort] for the trajectory to be executed.\n"
"# All specified values are in the same order as the joint names in JointTrajectory.msg\n"
"\n"
"float64[] positions\n"
"float64[] velocities\n"
"float64[] accelerations\n"
"float64[] effort\n"
"duration time_from_start\n"
;
  }

  static const char* value(const ::pp_msgs::MoveItPluginResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pp_msgs::MoveItPluginResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.plan);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MoveItPluginResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pp_msgs::MoveItPluginResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pp_msgs::MoveItPluginResponse_<ContainerAllocator>& v)
  {
    s << indent << "plan: ";
    s << std::endl;
    Printer< ::trajectory_msgs::JointTrajectory_<ContainerAllocator> >::stream(s, indent + "  ", v.plan);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PP_MSGS_MESSAGE_MOVEITPLUGINRESPONSE_H