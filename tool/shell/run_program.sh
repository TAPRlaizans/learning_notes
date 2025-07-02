#!/bin/bash
path_script=$(dirname $(readlink -f "$0"))
first_one_levels="${path_script%/*}"
first_two_levels="${first_one_levels%/*}"
# first_three_levels="${first_two_levels%/*}"

NUM_PARAMETR=$#
MASK_CORE=255  #default 255, use all cores

NAME_PROGRAM="test_radio_unify_bh_63b7"
NAME_CONFIG_FILE="param_test_radio_unify_bh_read_bin_100m_pdcch_pdsch_case000.json"

PATH_PROGRAM=$path_script"/"$NAME_PROGRAM
PATH_CONFIG_FILE=$path_script"/config/"$NAME_CONFIG_FILE
PATH_LOG_FOLDER=$path_script"/log"

COMMADN_RM_LOG_FOLDER="rm "$PATH_LOG_FOLDER"/*"

print_parameter_prompt() {
    echo "Parameters:"
    echo "-k                : kill all programs"
    echo "-d                : decompress log files"
}

#判断是否杀掉程序
if [ $1 == "-k" ]
then
    ps -ef | grep $NAME_PROGRAM | awk '{print $2}' | xargs kill -9
    echo "$PATH_PROGRAM has been killed"

    echo $COMMADN_DECOMPRESS_LOG
    $COMMADN_DECOMPRESS_LOG
    echo "$PATH_LOG_FOLDER has been decompressed"
    exit 1
fi

#查找配置文件是否存在
files=$(find "$PATH_CONFIG_FILE" -type f -exec basename {} \;)

if [ $PATH_CONFIG_FILE == "" ];
then
    echo "$PATH_CONFIG_FILE has not been found."
    exit -1
fi

# 清除日志
echo "command: $COMMADN_RM_LOG_FOLDER"
$COMMADN_RM_LOG_FOLDER
echo "$PATH_LOG_FOLDER has been cleared"

# 启动程序
echo "command: $PATH_PROGRAM $PATH_CONFIG_FILE"
$PATH_PROGRAM $PATH_CONFIG_FILE
