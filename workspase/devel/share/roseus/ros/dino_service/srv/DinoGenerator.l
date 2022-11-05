;; Auto-generated. Do not edit!


(when (boundp 'dino_service::DinoGenerator)
  (if (not (find-package "DINO_SERVICE"))
    (make-package "DINO_SERVICE"))
  (shadow 'DinoGenerator (find-package "DINO_SERVICE")))
(unless (find-package "DINO_SERVICE::DINOGENERATOR")
  (make-package "DINO_SERVICE::DINOGENERATOR"))
(unless (find-package "DINO_SERVICE::DINOGENERATORREQUEST")
  (make-package "DINO_SERVICE::DINOGENERATORREQUEST"))
(unless (find-package "DINO_SERVICE::DINOGENERATORRESPONSE")
  (make-package "DINO_SERVICE::DINOGENERATORRESPONSE"))

(in-package "ROS")





(defclass dino_service::DinoGeneratorRequest
  :super ros::object
  :slots (_word ))

(defmethod dino_service::DinoGeneratorRequest
  (:init
   (&key
    ((:word __word) "")
    )
   (send-super :init)
   (setq _word (string __word))
   self)
  (:word
   (&optional __word)
   (if __word (setq _word __word)) _word)
  (:serialization-length
   ()
   (+
    ;; string _word
    4 (length _word)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _word
       (write-long (length _word) s) (princ _word s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _word
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _word (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(defclass dino_service::DinoGeneratorResponse
  :super ros::object
  :slots (_dino_name ))

(defmethod dino_service::DinoGeneratorResponse
  (:init
   (&key
    ((:dino_name __dino_name) "")
    )
   (send-super :init)
   (setq _dino_name (string __dino_name))
   self)
  (:dino_name
   (&optional __dino_name)
   (if __dino_name (setq _dino_name __dino_name)) _dino_name)
  (:serialization-length
   ()
   (+
    ;; string _dino_name
    4 (length _dino_name)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _dino_name
       (write-long (length _dino_name) s) (princ _dino_name s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _dino_name
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _dino_name (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(defclass dino_service::DinoGenerator
  :super ros::object
  :slots ())

(setf (get dino_service::DinoGenerator :md5sum-) "05cbef6d39d9b92810fa937192b245b1")
(setf (get dino_service::DinoGenerator :datatype-) "dino_service/DinoGenerator")
(setf (get dino_service::DinoGenerator :request) dino_service::DinoGeneratorRequest)
(setf (get dino_service::DinoGenerator :response) dino_service::DinoGeneratorResponse)

(defmethod dino_service::DinoGeneratorRequest
  (:response () (instance dino_service::DinoGeneratorResponse :init)))

(setf (get dino_service::DinoGeneratorRequest :md5sum-) "05cbef6d39d9b92810fa937192b245b1")
(setf (get dino_service::DinoGeneratorRequest :datatype-) "dino_service/DinoGeneratorRequest")
(setf (get dino_service::DinoGeneratorRequest :definition-)
      "string word
---
string dino_name

")

(setf (get dino_service::DinoGeneratorResponse :md5sum-) "05cbef6d39d9b92810fa937192b245b1")
(setf (get dino_service::DinoGeneratorResponse :datatype-) "dino_service/DinoGeneratorResponse")
(setf (get dino_service::DinoGeneratorResponse :definition-)
      "string word
---
string dino_name

")



(provide :dino_service/DinoGenerator "05cbef6d39d9b92810fa937192b245b1")


