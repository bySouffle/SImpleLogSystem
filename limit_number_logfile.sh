#! /bin/bash
# 定义监测文件夹
BACK_DIR=$(dirname $(readlink -f $0))
OPT_DIR=${BACK_DIR}/$1 
cd $OPT_DIR
count2=$(ls $OPT_DIR -l | grep "/*.log" | wc -l)
echo file cout: $count2
if [ $count2 -gt 10 ]; then
   rm $(ls -rt | head -n1)
fi
