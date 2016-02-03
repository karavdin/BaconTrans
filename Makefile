LIBRARY := SUHH2bacondataformats
DICT := baconheaders/BaconTransObjects.h baconheaders/SUHH2bacondataformats_LinkDef.h
#DICT := include/ReconstructionHypothesis.h include/SUHH2common_LinkDef.h
#TEST := 1
USERCXXFLAGS := -Wno-unused-parameter -Wno-unused-variable
USERLDFLAGS := -lSUHH2common -lSUHH2core
include ../Makefile.common

