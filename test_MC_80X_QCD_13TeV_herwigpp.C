{
  gROOT->Macro("load.C");
  std::string first,second,path;
  first = "/nfs/dust/cms/user/karavdia/GridControl_JEC/JMEValidatorTree_QCD_Flat_13TeV_herwigpp_RunIISpring16MiniAODv1-PUSpring16_80X_Spring16_25nsV1_MC/mcflatherwigpp_";
  second = ".root";
  std::string tmp;
  Long_t *id,*size,*flags,*mt;
  for (int i=1; i<394; i++){
    tmp = std::to_string(i);
    path = first+tmp+second;
    const char *tmp_ = path.c_str();
    // error message if the file does not exist
    if(gSystem->GetPathInfo(tmp_,id,size,flags,mt)==1) std::cout << "file " << path << " does not exist" << std::endl;
    // conversion if the file exists...
    if(!gSystem->GetPathInfo(tmp_,id,size,flags,mt)){ 
      std::cout << "    ++++++    conversion of " << path << " to bacon data format    ++++++" << std::endl;
      convert(first+tmp+second,"/nfs/dust/cms/user/karavdia/BaconTrans_JEC/80X/AK4PFCHS/QCD_Flat_13TeV_herwigpp/mcflatherwigpp_"+tmp+".root","AK4PFCHS");
      convert(first+tmp+second,"/nfs/dust/cms/user/karavdia/BaconTrans_JEC/80X/AK8PFCHS/QCD_Flat_13TeV_herwigpp/mcflatherwigpp_"+tmp+".root","AK8PFCHS");
      convert(first+tmp+second,"/nfs/dust/cms/user/karavdia/BaconTrans_JEC/80X/AK4PFPUPPI/QCD_Flat_13TeV_herwigpp/mcflatherwigpp_"+tmp+".root","AK4PFPUPPI");
      convert(first+tmp+second,"/nfs/dust/cms/user/karavdia/BaconTrans_JEC/80X/AK8PFPUPPI/QCD_Flat_13TeV_herwigpp/mcflatherwigpp_"+tmp+".root","AK8PFPUPPI");
    }
  }
}
