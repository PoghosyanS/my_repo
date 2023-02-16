#!/bin/bash

function myfree(){

	# path of meminfo file
	memory_path="/proc/meminfo"
	
        # Total ram available on the system.
	MemTotal=$( awk 'NR==1 {print $2}' $memory_path)
	
	# How much memory is available, without swapping.
	MemAvailable=$( awk 'NR==3 {print $2}' $memory_path)
        
	# Unused memory on the system.
	MemFree=$( awk 'NR==2 {print $2}' $memory_path)
	
	# Memory shared by multiple processes on the system.
	Shmem=$( awk 'NR==21 {print $2}' $memory_path)
        
	# Memory reserved by the OS to allocate as buffers when process need them.
	Buffers=$( awk 'NR==4 {print $2}' $memory_path)
	
	# Recently used files cached in ram
	Cached=$( awk 'NR==5 {print $2}' $memory_path)
	
	# Total available in swap.
	SwapTotal=$( awk 'NR==15 {print $2}' $memory_path)
	
	# Free memory in swap.
	SwapFree=$( awk 'NR==16 {print $2}' $memory_path)

	SwapCached=$( awk 'NR==6 {print $2}' $memory_path)
	
	# Cached + Buffers.
	Buf_Cache=$(($Cached + $Buffers))
	
	# Memory currently in use.
	MemUsed=$((MemTotal - MemFree - Buf_Cache ))
	

echo "                total          used          free          shared           buff/cache          available"

echo "Mem:         $MemTotal       $MemUsed      $MemFree          $Shmem              $Buf_Cache           $MemAvailable "


echo "Swap:         $SwapTotal             $SwapCached       $SwapFree"

}
myfree
