## EPSON TM-T88V Printer Driver for GNU/Linux
## Copyright (C) 2000-2008 AVASYS CORPORATION.
## Copyright (C) Seiko Epson Corporation 2000-2017.
## Copyright (C) 2020 Grégory DAVID
##  This program is free software; you can redistribute it and/or modify
## it under the terms of the GNU General Public License as published by
## the Free Software Foundation; either version 2 of the License, or
## (at your option) any later version.
##
## This program is distributed in the hope that it will be useful,
## but WITHOUT ANY WARRANTY; without even the implied warranty of
## MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
## GNU General Public License for more details.
##
## You should have received a copy of the GNU General Public License
## along with this program; if not, write to the Free Software
## Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110, USA.
SUBDIRS = .

AM_CXXFLAGS = -I$(top_srcdir)/src -Wall -Werror -Wshadow -Wduplicated-cond -Wunused-parameter -Wsign-promo -Wconversion -Wsign-conversion -fstack-protector -Wno-deprecated -Wno-deprecated-declarations

cupsfilterdir = $(CUPS_FILTER_DIR)
cupsfilter_PROGRAMS = rastertotmt88v
rastertotmt88v_SOURCES = rastertotmt88v.cc
rastertotmt88v_CFLAGS = -DCUPS_FILTER_NAME=\"rastertotmt88v\"	-DCUPS_FILTER_PATH=\"$(CUPS_FILTER_DIR)\"
