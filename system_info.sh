#!/bin/bash

read -p "select is options-- cur_log_user,your_shell_dir,home_dir,os_name_&_version,cur_work_dir,num_usr_log,avale_shell,hard_disk_info,cpu_info,mem_info,file_system_info,cur_run_proc : " var
echo "------------------"
echo "------------------"
case $var in
        cur_log_user)
		echo `who`
		;;
	your_shell_dir)
		echo "$SHELL"
		;;
	home_dir)
		echo "$HOME"
		;;
	os_name_version)
		echo `lsb_release -a`
		;;	
	cur_work_dir)
		echo "`pwd`"
		;;
	num_usr_log)
		echo "`who | wc -l`"
                ;;
	avale_shell)
		
		echo `cat /etc/shells`
		;;
	hard_disk_info)
		echo `lsblk`
		echo `df -h`
		;;
        cpu_info)
		echo `lscpu`
		;;
	mem_info)
		echo `free -h`
		;;
	file_system_info)
		echo `lsblk -o FSTYPE`
		;;

	cur_run_proc)
		echo `ps`	
			
esac
