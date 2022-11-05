
(cl:in-package :asdf)

(defsystem "dino_service-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "DinoGenerator" :depends-on ("_package_DinoGenerator"))
    (:file "_package_DinoGenerator" :depends-on ("_package"))
  ))