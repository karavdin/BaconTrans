{
  gROOT->Macro("load.C");
  //convert("/nfs/dust/cms/user/kovalch/CRAB/ZeroBias/jme_1.root","test.root","nt_AK4PFCluster");
  //convert("/pnfs/desy.de/cms/tier2/store/user/stadie/ZeroBias1/zero/150625_132419/0000/jme_1.root","test.root","nt_AK4PFCluster");
  std::string first,second,path;
  //  first = "/pnfs/desy.de/cms/tier2/store/user/nkovalch/ZeroBias4/zero/150702_093020/0000/jme_";
  //  first = "/nfs/dust/cms/user/karavdia/GridControl_JEC/JMEValidatorTree_QCD_Pt-15to7000_TuneCUETHS1_Flat_13TeV_herwigpp_RunIIFall15MiniAODv1_Fall15_25nsV1_MC/mcflatherwigpp_";
  first = "/nfs/dust/cms/user/karavdia/GridControl_JEC/JMEValidatorTree_QCD_Pt-15to7000_TuneCUETP8M1_Flat_13TeV_pythia8_RunIIFall15MiniAODv1_Fall15_25nsV1_MC/mcflatpythia8_";
  second = ".root";
  std::string tmp;
  Long_t *id,*size,*flags,*mt;
  //  for (int i=0; i<1424; i++){
  for (int i=0; i<262; i++){
  //  for (int i=0; i<226; i++){
    tmp = std::to_string(i);
    path = first+tmp+second;
    const char *tmp_ = path.c_str();
    // error message if the file does not exist
    if(gSystem->GetPathInfo(tmp_,id,size,flags,mt)==1) std::cout << "file " << path << " does not exist" << std::endl;
    // conversion if the file exists...
    if(!gSystem->GetPathInfo(tmp_,id,size,flags,mt)){ 
      std::cout << "    ++++++    conversion of " << path << " to bacon data format    ++++++" << std::endl;
      //    convert(first+tmp+second,"/nfs/dust/cms/user/karavdia/BaconTrans_JEC/AK4PFCHS/JMEValidatorTree_QCD_Pt-15to7000_TuneCUETHS1_Flat_13TeV_herwigpp_RunIIFall15MiniAODv1_Fall15_25nsV1_MC/mcflatherwigpp_"+tmp+".root","AK4PFCHS");
      convert(first+tmp+second,"/nfs/dust/cms/user/karavdia/BaconTrans_JEC/AK8PFCHS/JMEValidatorTree_QCD_Pt-15to7000_TuneCUETP8M1_Flat_13TeV_pythia8_RunIIFall15MiniAODv1_Fall15_25nsV1_MC/mcflatpythia8_"+tmp+".root","AK8PFCHS");
    }
  }
}
