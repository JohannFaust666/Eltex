cmd_/home/alexander/hello/hello.mod := printf '%s\n'   hello.o | awk '!x[$$0]++ { print("/home/alexander/hello/"$$0) }' > /home/alexander/hello/hello.mod
