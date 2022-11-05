; Auto-generated. Do not edit!


(cl:in-package dino_service-srv)


;//! \htmlinclude DinoGenerator-request.msg.html

(cl:defclass <DinoGenerator-request> (roslisp-msg-protocol:ros-message)
  ((word
    :reader word
    :initarg :word
    :type cl:string
    :initform ""))
)

(cl:defclass DinoGenerator-request (<DinoGenerator-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <DinoGenerator-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'DinoGenerator-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dino_service-srv:<DinoGenerator-request> is deprecated: use dino_service-srv:DinoGenerator-request instead.")))

(cl:ensure-generic-function 'word-val :lambda-list '(m))
(cl:defmethod word-val ((m <DinoGenerator-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dino_service-srv:word-val is deprecated.  Use dino_service-srv:word instead.")
  (word m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <DinoGenerator-request>) ostream)
  "Serializes a message object of type '<DinoGenerator-request>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'word))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'word))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <DinoGenerator-request>) istream)
  "Deserializes a message object of type '<DinoGenerator-request>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'word) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'word) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<DinoGenerator-request>)))
  "Returns string type for a service object of type '<DinoGenerator-request>"
  "dino_service/DinoGeneratorRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'DinoGenerator-request)))
  "Returns string type for a service object of type 'DinoGenerator-request"
  "dino_service/DinoGeneratorRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<DinoGenerator-request>)))
  "Returns md5sum for a message object of type '<DinoGenerator-request>"
  "05cbef6d39d9b92810fa937192b245b1")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'DinoGenerator-request)))
  "Returns md5sum for a message object of type 'DinoGenerator-request"
  "05cbef6d39d9b92810fa937192b245b1")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<DinoGenerator-request>)))
  "Returns full string definition for message of type '<DinoGenerator-request>"
  (cl:format cl:nil "string word~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'DinoGenerator-request)))
  "Returns full string definition for message of type 'DinoGenerator-request"
  (cl:format cl:nil "string word~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <DinoGenerator-request>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'word))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <DinoGenerator-request>))
  "Converts a ROS message object to a list"
  (cl:list 'DinoGenerator-request
    (cl:cons ':word (word msg))
))
;//! \htmlinclude DinoGenerator-response.msg.html

(cl:defclass <DinoGenerator-response> (roslisp-msg-protocol:ros-message)
  ((dino_name
    :reader dino_name
    :initarg :dino_name
    :type cl:string
    :initform ""))
)

(cl:defclass DinoGenerator-response (<DinoGenerator-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <DinoGenerator-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'DinoGenerator-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dino_service-srv:<DinoGenerator-response> is deprecated: use dino_service-srv:DinoGenerator-response instead.")))

(cl:ensure-generic-function 'dino_name-val :lambda-list '(m))
(cl:defmethod dino_name-val ((m <DinoGenerator-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dino_service-srv:dino_name-val is deprecated.  Use dino_service-srv:dino_name instead.")
  (dino_name m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <DinoGenerator-response>) ostream)
  "Serializes a message object of type '<DinoGenerator-response>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'dino_name))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'dino_name))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <DinoGenerator-response>) istream)
  "Deserializes a message object of type '<DinoGenerator-response>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'dino_name) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'dino_name) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<DinoGenerator-response>)))
  "Returns string type for a service object of type '<DinoGenerator-response>"
  "dino_service/DinoGeneratorResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'DinoGenerator-response)))
  "Returns string type for a service object of type 'DinoGenerator-response"
  "dino_service/DinoGeneratorResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<DinoGenerator-response>)))
  "Returns md5sum for a message object of type '<DinoGenerator-response>"
  "05cbef6d39d9b92810fa937192b245b1")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'DinoGenerator-response)))
  "Returns md5sum for a message object of type 'DinoGenerator-response"
  "05cbef6d39d9b92810fa937192b245b1")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<DinoGenerator-response>)))
  "Returns full string definition for message of type '<DinoGenerator-response>"
  (cl:format cl:nil "string dino_name~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'DinoGenerator-response)))
  "Returns full string definition for message of type 'DinoGenerator-response"
  (cl:format cl:nil "string dino_name~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <DinoGenerator-response>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'dino_name))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <DinoGenerator-response>))
  "Converts a ROS message object to a list"
  (cl:list 'DinoGenerator-response
    (cl:cons ':dino_name (dino_name msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'DinoGenerator)))
  'DinoGenerator-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'DinoGenerator)))
  'DinoGenerator-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'DinoGenerator)))
  "Returns string type for a service object of type '<DinoGenerator>"
  "dino_service/DinoGenerator")