LIBRARY := SUHH2bacondataformats
DICT := baconheaders/TAddJet.hh baconheaders/TElectron.hh baconheaders/TEventInfo.hh baconheaders/TGenEventInfo.hh baconheaders/TGenParticle.hh baconheaders/TJet.hh baconheaders/TMuon.hh baconheaders/TPFPart.hh baconheaders/TPhoton.hh baconheaders/TTau.hh  baconheaders/TTrigger.hh baconheaders/TVertex.hh baconheaders/TriggerRecord.hh baconheaders/SUHH2bacondataformats_LinkDef.h
#DICT := include/ReconstructionHypothesis.h include/SUHH2common_LinkDef.h
#TEST := 1
USERCXXFLAGS := -Wno-unused-parameter -Wno-unused-variable
USERLDFLAGS := -lSUHH2common -lSUHH2core
PAR := 1
include ../Makefile.common

