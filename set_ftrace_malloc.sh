#!/bin/bash

echo 0 > /sys/kernel/debug/tracing/tracing_on
sleep 1
echo "tracing_off"

echo 0 > /sys/kernel/debug/tracing/events/enable
sleep 1
echo "events disabled!"

echo function > /sys/kernel/debug/tracing/current_tracer
sleep 1
echo "function tracer enabled!"

echo cpu_startup_entry > /sys/kernel/debug/tracing/set_ftrace_filter
sleep 1
echo "cpu_startup_entry enabled!"

#####################################################################


echo __arm64_sys_brk > /sys/kernel/debug/tracing/set_ftrace_filter
sleep 1
echo "__arm64_sys_brk  => enabled!"


#####################################################################

#echo 1 > /sys/kernel/debug/tracing/events/irq/irq_handler_entry/enable
#echo 1 > /sys/kernel/debug/tracing/events/irq/irq_handler_exit/enable
#echo "event enabled"

#echo 1 > /sys/kernel/debug/tracing/events/sched/sched_switch/enable
#sleep 1
#echo "sched switch enabled!"

echo 1 > /sys/kernel/debug/tracing/events/raw_syscalls/sys_enter/enable
echo 1 > /sys/kernel/debug/tracing/events/raw_syscalls/sys_exit/enable


echo 1 > /sys/kernel/debug/tracing/options/func_stack_trace
echo "function stack trace enabled"

echo 1 > /sys/kernel/debug/tracing/options/sym-offset
echo "sym-offset trace enabled"

echo 1 > /sys/kernel/debug/tracing/tracing_on
echo "tracing_on"

