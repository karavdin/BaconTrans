{
  gSystem->SetFlagsOpt("-O2 -DNDEBUG -Wno-missing-field-initializers");
  gROOT->LoadMacro("baconheaders/TEventInfo.hh+");
  gROOT->LoadMacro("baconheaders/TGenEventInfo.hh+");
  gROOT->LoadMacro("baconheaders/TTrigger.hh+");
  gROOT->LoadMacro("baconheaders/TJet.hh+");
  gROOT->LoadMacro("baconheaders/TAddJet.hh+");
  gROOT->LoadMacro("baconheaders/TVertex.hh+");

  
  gROOT->LoadMacro("convert.C+");
}
