LIBRARY := SUHH2bacondataformats
DICT := baconheaders/BaconTransObjects.h baconheaders/SUHH2bacondataformats_LinkDef.h
#TEST := 1
#TESTPAR := 1
USERCXXFLAGS := -Wno-unused-parameter -Wno-unused-variable
USERLDFLAGS := -lSUHH2common -lSUHH2core
include ../Makefile.common

