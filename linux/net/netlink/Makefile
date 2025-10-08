# SPDX-License-Identifier: GPL-2.0-only
#
# Makefile for the netlink driver.
#

# netlink_hook 커널에 빌드 되도록 설정
obj-y  				:= af_netlink.o genetlink.o policy.o netlink_hook.o

obj-$(CONFIG_NETLINK_DIAG)	+= netlink_diag.o
netlink_diag-y			:= diag.o
