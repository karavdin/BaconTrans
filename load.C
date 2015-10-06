{
  gSystem->AddIncludePath("-I/afs/desy.de/user/k/karavdia/CMSSW_7_4_9/UHH2/BaconTrans/baconheaders/");
  gSystem->AddLinkedLibs("-L/afs/desy.de/user/k/karavdia/SFrame_04_00_01_root602/lib -lSUHH2bacondataformats");
  gSystem->SetFlagsOpt("-O2 -DNDEBUG -Wno-missing-field-initializers");
  // gROOT->LoadMacro("baconheaders/TEventInfo.hh+");
  // gROOT->LoadMacro("baconheaders/TGenEventInfo.hh+");
  // gROOT->LoadMacro("baconheaders/TTrigger.hh+");
  // gROOT->LoadMacro("baconheaders/TJet.hh+");
  // gROOT->LoadMacro("baconheaders/TAddJet.hh+");
  // gROOT->LoadMacro("baconheaders/TVertex.hh+");

  
  gROOT->LoadMacro("UHH2/BaconTrans/convert.C+");
}
