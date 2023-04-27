cmd_/home/alexander/hello/Module.symvers := sed 's/ko$$/o/' /home/alexander/hello/modules.order | scripts/mod/modpost -m -a  -o /home/alexander/hello/Module.symvers -e -i Module.symvers   -T -
