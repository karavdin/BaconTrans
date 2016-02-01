{
  gROOT->Macro("load.C");
  //convert("/nfs/dust/cms/user/kovalch/CRAB/ZeroBias/jme_1.root","test.root","nt_AK4PFCluster");
  //convert("/pnfs/desy.de/cms/tier2/store/user/stadie/ZeroBias1/zero/150625_132419/0000/jme_1.root","test.root","nt_AK4PFCluster");
  std::string first,second,path;
  //  first = "/pnfs/desy.de/cms/tier2/store/user/nkovalch/ZeroBias4/zero/150702_093020/0000/jme_";
  first = "/nfs/dust/cms/user/karavdia/GridControl_JEC/JMEValidatorTree_13TeV_DATA_RunIID_Cert_246908-260627_v2_13TeV_PromptReco_Collisions15_25ns_JSON_Summer15_25nsV6_DATA/dataJetHTRun2015D16Dec_";
  second = ".root";
  std::string tmp;
  Long_t *id,*size,*flags,*mt;
  for (int i=1; i<1424; i++){
  //  for (int i=0; i<1; i++){
    tmp = std::to_string(i);
    path = first+tmp+second;
    const char *tmp_ = path.c_str();
    // error message if the file does not exist
    if(gSystem->GetPathInfo(tmp_,id,size,flags,mt)==1) std::cout << "file " << path << " does not exist" << std::endl;
    // conversion if the file exists...
    if(!gSystem->GetPathInfo(tmp_,id,size,flags,mt)){ 
      std::cout << "    ++++++    conversion of " << path << " to bacon data format    ++++++" << std::endl;
      convert(first+tmp+second,"/nfs/dust/cms/user/karavdia/BaconTrans_JEC/AK4PFCHS/JMEValidatorTree_13TeV_DATA_RunIID_Cert_246908-260627_v2_13TeV_PromptReco_Collisions15_25ns_JSON_Summer15_25nsV6_DATA/dataJetHTRun2015D16Dec_"+tmp+".root","AK4PFCHS");
    }
  }
}
