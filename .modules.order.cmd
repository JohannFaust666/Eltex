cmd_/home/alexander/hello/modules.order := {   echo /home/alexander/hello/hello.ko; :; } | awk '!x[$$0]++' - > /home/alexander/hello/modules.order
