; Auto-generated. Do not edit!


(cl:in-package hrl_lib-msg)


;//! \htmlinclude WrenchPoseArrayStamped.msg.html

(cl:defclass <WrenchPoseArrayStamped> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (wrench
    :reader wrench
    :initarg :wrench
    :type geometry_msgs-msg:Wrench
    :initform (cl:make-instance 'geometry_msgs-msg:Wrench))
   (poses
    :reader poses
    :initarg :poses
    :type (cl:vector geometry_msgs-msg:Pose)
   :initform (cl:make-array 0 :element-type 'geometry_msgs-msg:Pose :initial-element (cl:make-instance 'geometry_msgs-msg:Pose))))
)

(cl:defclass WrenchPoseArrayStamped (<WrenchPoseArrayStamped>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <WrenchPoseArrayStamped>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'WrenchPoseArrayStamped)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name hrl_lib-msg:<WrenchPoseArrayStamped> is deprecated: use hrl_lib-msg:WrenchPoseArrayStamped instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <WrenchPoseArrayStamped>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader hrl_lib-msg:header-val is deprecated.  Use hrl_lib-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'wrench-val :lambda-list '(m))
(cl:defmethod wrench-val ((m <WrenchPoseArrayStamped>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader hrl_lib-msg:wrench-val is deprecated.  Use hrl_lib-msg:wrench instead.")
  (wrench m))

(cl:ensure-generic-function 'poses-val :lambda-list '(m))
(cl:defmethod poses-val ((m <WrenchPoseArrayStamped>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader hrl_lib-msg:poses-val is deprecated.  Use hrl_lib-msg:poses instead.")
  (poses m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <WrenchPoseArrayStamped>) ostream)
  "Serializes a message object of type '<WrenchPoseArrayStamped>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'wrench) ostream)
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'poses))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'poses))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <WrenchPoseArrayStamped>) istream)
  "Deserializes a message object of type '<WrenchPoseArrayStamped>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'wrench) istream)
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'poses) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'poses)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'geometry_msgs-msg:Pose))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<WrenchPoseArrayStamped>)))
  "Returns string type for a message object of type '<WrenchPoseArrayStamped>"
  "hrl_lib/WrenchPoseArrayStamped")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'WrenchPoseArrayStamped)))
  "Returns string type for a message object of type 'WrenchPoseArrayStamped"
  "hrl_lib/WrenchPoseArrayStamped")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<WrenchPoseArrayStamped>)))
  "Returns md5sum for a message object of type '<WrenchPoseArrayStamped>"
  "327486bfeb5bbc48d8eb365e9d139038")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'WrenchPoseArrayStamped)))
  "Returns md5sum for a message object of type 'WrenchPoseArrayStamped"
  "327486bfeb5bbc48d8eb365e9d139038")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<WrenchPoseArrayStamped>)))
  "Returns full string definition for message of type '<WrenchPoseArrayStamped>"
  (cl:format cl:nil "Header header~%geometry_msgs/Wrench wrench~%geometry_msgs/Pose[] poses~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.secs: seconds (stamp_secs) since epoch~%# * stamp.nsecs: nanoseconds since stamp_secs~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: geometry_msgs/Wrench~%# This represents force in free space, seperated into ~%# it's linear and angular parts.  ~%Vector3  force~%Vector3  torque~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%~%float64 x~%float64 y~%float64 z~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of postion and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'WrenchPoseArrayStamped)))
  "Returns full string definition for message of type 'WrenchPoseArrayStamped"
  (cl:format cl:nil "Header header~%geometry_msgs/Wrench wrench~%geometry_msgs/Pose[] poses~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.secs: seconds (stamp_secs) since epoch~%# * stamp.nsecs: nanoseconds since stamp_secs~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: geometry_msgs/Wrench~%# This represents force in free space, seperated into ~%# it's linear and angular parts.  ~%Vector3  force~%Vector3  torque~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%~%float64 x~%float64 y~%float64 z~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of postion and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <WrenchPoseArrayStamped>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'wrench))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'poses) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <WrenchPoseArrayStamped>))
  "Converts a ROS message object to a list"
  (cl:list 'WrenchPoseArrayStamped
    (cl:cons ':header (header msg))
    (cl:cons ':wrench (wrench msg))
    (cl:cons ':poses (poses msg))
))
