#!/bin/bash
cd `dirname $0`
DIR_file=`pwd`



serverid=$1
if [ ! -n "$1" ] ;then  
    serverid=1001
fi 


ln -sf service_loader binary/zone_${serverid}

${DIR_file}/binary/zone_${serverid} --worldid=$serverid --stop --logpath=/data/log/zone_$serverid
