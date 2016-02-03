#include <string>
#include <vector>
#include "TLorentzVector.h"
#include "TTree.h"
#include "TFile.h"
#include "TDirectory.h"
#include "Math/GenVector/LorentzVector.h"
#include "Math/PositionVector3D.h"
#include "Math/SMatrix.h"
#include "Math/GenVector/PtEtaPhiM4D.h"
#include "Math/Vector4D.h"
#include "TClonesArray.h"


#include "baconheaders/TEventInfo.hh"
#include "baconheaders/TGenEventInfo.hh"
#include "baconheaders/TTrigger.hh"
#include "baconheaders/TriggerRecord.hh"
#include "baconheaders/TVertex.hh"
#include "baconheaders/TJet.hh"
#include "baconheaders/TAddJet.hh"


using namespace std;
typedef ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<float> > PtEtaPhiE4Vector;
typedef ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> PointVector;
typedef ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> > CovMatrix;

struct JMETree {
  Int_t           nMEPartonsFiltered;
  vector<int>     *bunch_spacings;
  vector<int>     *bxns;
  ULong64_t       evt;
  Float_t         alphaQCD;
  Int_t           nMEPartons;
  ULong64_t       run;
  Float_t         alphaQED;
  vector<float>   *rhos;
  ULong64_t       lumi;
  vector<float>   *pu_sumpt_lowpt;
  vector<int>     *npus;
  ULong64_t       npv;
  Float_t         rho;
  Float_t         pthat;
  Float_t         qScale;
  vector<float>   *tnpus;
  Float_t         weight;
  vector<int>     *pu_ntrks_lowpt;
  vector<float>   *pu_sumpt_highpt;
  vector<vector<float> > *pu_zpositions;
  vector<int>     *pu_ntrks_highpt;
  std::pair<float, float> *pdf_x;
  std::pair<int, int>    *pdf_id;
  //hlt
  vector<vector<bool> > *objects_paths_islast;
  vector<vector<int> > *objects_paths;
  vector<vector<bool> > *objects_paths_isl3;
  vector<float>   *objects_phi;
  vector<float>   *objects_e;
  vector<float>   *objects_eta;
  vector<float>   *objects_pt;
  vector<int>     *prescales;
  vector<string>  *paths;
  //jets
  vector<bool>    *allGenJet_patJetmatched;
  vector<float>   *allGenJet_phi;
  vector<float>   *neutralEmEnergyFraction;
  vector<float>   *hoEnergyFraction;
  vector<float>   *HFEMEnergyFraction;
  vector<float>   *chargedMuEnergyFraction;
  vector<float>   *chargedHadronEnergyFraction;
  vector<float>   *dZ;
  vector<int>     *nTot;
  vector<int>     *PUJetId_cutBasedId;
  vector<float>   *betaStar;
  vector<map<string,float> > *jec_factors;
  vector<float>   *betaClassic;
  vector<float>   *jec_toraw;
  vector<signed char> *hadronFlavor;
  vector<int>     *chargedMultiplicity;
  vector<float>   *gen_y;
  vector<float>   *y;
  vector<float>   *fRing1;
  vector<signed char> *partonFlavor;
  vector<float>   *fRing3;
  vector<float>   *allGenJet_pt;
  vector<bool>    *has_gen_particle;
  vector<int>     *refpdgid;
  vector<signed char> *gen_charge;
  vector<float>   *fRing2;
  vector<float>   *DRweighted;
  vector<float>   *photonEnergyFraction;
  vector<float>   *refarea;
  vector<float>   *jtarea;
  vector<PtEtaPhiE4Vector> *p4;
  vector<float>   *refdrjt;
  vector<float>   *neutralHadronEnergyFraction;
  vector<float>   *fRing4;
  vector<float>   *axisMinor;
  vector<float>   *fRing5;
  vector<float>   *electronEnergyFraction;
  vector<float>   *fRing6;
  vector<float>   *axisMajor;
  vector<float>   *betaStarClassic;
  vector<float>   *fRing7;
  vector<unsigned short> *nCh;
  vector<float>   *fRing0;
  vector<unsigned short> *nNeutrals;
  vector<float>   *allGenJet_m;
  vector<float>   *allGenJet_eta;
  vector<float>   *HFHadronEnergyFraction;
  vector<PtEtaPhiE4Vector> *gen_p4;
  vector<float>   *ptD;
  vector<float>   *PUJetId_fullDiscriminant;
  vector<int>     *PUJetId_fullId;
  vector<float>   *chargedEmEnergyFraction;
  vector<float>   *jetRchg;
  vector<signed char> *charge;
  vector<float>   *QGTagger_qgLikelihood;
  vector<float>   *dRMatch;
  vector<float>   *muonEnergyFraction;
  vector<float>   *fRing8;
  vector<float>   *pull;
  vector<float>   *beta;
  vector<float>   *jetRneutral;
  vector<float>   *jetR;
  vector<float>   *Ttheta;
  vector<float>   *pfTrackCountingHighEffBJetTags;
  vector<float>   *pfTrackCountingHighPurBJetTags;
  vector<float>   *pfJetProbabilityBJetTags;
  vector<float>   *pfJetBProbabilityBJetTags;
  vector<float>   *pfSimpleSecondaryVertexHighEffBJetTags;
  vector<float>   *pfSimpleSecondaryVertexHighPurBJetTags;
  vector<float>   *pfCombinedSecondaryVertexV2BJetTags;
  vector<float>   *pfCombinedInclusiveSecondaryVertexV2BJetTags;
  //vertex
  vector<CovMatrix> *covariance;
  vector<PointVector> *position;
  vector<bool>    *isValid;
  vector<bool>    *isFake;
  vector<float>   *ndof;
  vector<float>   *normalizedChi2;
  //met
  vector<float>   *met_caloMET_pt;
  vector<float>   *met_gen_significance;
  vector<float>   *met_gen_sumEt;
  vector<float>   *met_uncorrectedSumEt;
  vector<float>   *met_gen_y;
  vector<float>   *met_uncorrectedPhi;
  vector<float>   *met_y;
  vector<float>   *met_sumEt;
  vector<float>   *met_significance;
  vector<signed char> *met_charge;
  vector<float>   *met_caloMET_sumEt;
  vector<bool>    *met_has_gen_particle;
  vector<PtEtaPhiE4Vector> *met_gen_p4;
  vector<PtEtaPhiE4Vector> *met_p4;
  vector<float>   *met_caloMET_phi;
  vector<signed char> *met_gen_charge;
  vector<float>   *met_uncorrectedPt;


  TTree *tevent, *thlt,*tvtx, *tjet, *tmet;


  long init(TFile* f,  string jetcoll) {
    TDirectory* dir = (TDirectory*)f->Get("event");
    dir->GetObject("t",tevent);
    dir = (TDirectory*)f->Get("hlt");
    dir->GetObject("t",thlt);
    dir = (TDirectory*)f->Get("vertex");
    dir->GetObject("t",tvtx);
    dir = (TDirectory*)f->Get(jetcoll.c_str());
    dir->GetObject("t",tjet);
    dir = (TDirectory*)f->Get("met_chs");
    dir->GetObject("t",tmet);

    assert(tevent);
    assert(thlt);
    assert(tvtx);
    assert(tjet);
    assert(tmet);

    // Set branch addresses.
    tevent->SetBranchAddress("nMEPartonsFiltered",&nMEPartonsFiltered);
    tevent->SetBranchAddress("bunch_spacings",&bunch_spacings);
    tevent->SetBranchAddress("bxns",&bxns);
    tevent->SetBranchAddress("evt",&evt);
    tevent->SetBranchAddress("alphaQCD",&alphaQCD);
    tevent->SetBranchAddress("nMEPartons",&nMEPartons);
    tevent->SetBranchAddress("run",&run);
    tevent->SetBranchAddress("alphaQED",&alphaQED);
    tevent->SetBranchAddress("rhos",&rhos);
    tevent->SetBranchAddress("lumi",&lumi);
    tevent->SetBranchAddress("pu_sumpt_lowpt",&pu_sumpt_lowpt);
    tevent->SetBranchAddress("npus",&npus);
    tevent->SetBranchAddress("npv",&npv);
    tevent->SetBranchAddress("rho",&rho);
    tevent->SetBranchAddress("pthat",&pthat);
    tevent->SetBranchAddress("qScale",&qScale);
    tevent->SetBranchAddress("tnpus",&tnpus);
    tevent->SetBranchAddress("weight",&weight);
    tevent->SetBranchAddress("pu_ntrks_lowpt",&pu_ntrks_lowpt);
    tevent->SetBranchAddress("pu_sumpt_highpt",&pu_sumpt_highpt);
    tevent->SetBranchAddress("pu_zpositions",&pu_zpositions);
    tevent->SetBranchAddress("pu_ntrks_highpt",&pu_ntrks_highpt);
    tevent->SetBranchAddress("pdf_x",&pdf_x);
    tevent->SetBranchAddress("pdf_id",&pdf_id);


    thlt->SetBranchAddress("objects_paths_islast",&objects_paths_islast);
    thlt->SetBranchAddress("objects_paths",&objects_paths);
    thlt->SetBranchAddress("objects_paths_isl3",&objects_paths_isl3);
    thlt->SetBranchAddress("objects_phi",&objects_phi);
    thlt->SetBranchAddress("objects_e",&objects_e);
    thlt->SetBranchAddress("objects_eta",&objects_eta);
    thlt->SetBranchAddress("objects_pt",&objects_pt);
    thlt->SetBranchAddress("prescales",&prescales);
    thlt->SetBranchAddress("paths",&paths);

    tjet->SetBranchAddress("allGenJet_patJetmatched",&allGenJet_patJetmatched);
    tjet->SetBranchAddress("allGenJet_phi",&allGenJet_phi);
    tjet->SetBranchAddress("neutralEmEnergyFraction",&neutralEmEnergyFraction);
    tjet->SetBranchAddress("hoEnergyFraction",&hoEnergyFraction);
    tjet->SetBranchAddress("HFEMEnergyFraction",&HFEMEnergyFraction);
    tjet->SetBranchAddress("chargedMuEnergyFraction",&chargedMuEnergyFraction);
    tjet->SetBranchAddress("chargedHadronEnergyFraction",&chargedHadronEnergyFraction);
    tjet->SetBranchAddress("dZ",&dZ);
    tjet->SetBranchAddress("nTot",&nTot);
    tjet->SetBranchAddress("PUJetId_cutBasedId",&PUJetId_cutBasedId);
    tjet->SetBranchAddress("betaStar",&betaStar);
    tjet->SetBranchAddress("jec_factors",&jec_factors);
    tjet->SetBranchAddress("betaClassic",&betaClassic);
    tjet->SetBranchAddress("jec_toraw",&jec_toraw);
    tjet->SetBranchAddress("hadronFlavor",&hadronFlavor);
    tjet->SetBranchAddress("chargedMultiplicity",&chargedMultiplicity);
    tjet->SetBranchAddress("gen_y",&gen_y);
    tjet->SetBranchAddress("y",&y);
    tjet->SetBranchAddress("fRing1",&fRing1);
    tjet->SetBranchAddress("partonFlavor",&partonFlavor);
    tjet->SetBranchAddress("fRing3",&fRing3);
    tjet->SetBranchAddress("allGenJet_pt",&allGenJet_pt);
    tjet->SetBranchAddress("has_gen_particle",&has_gen_particle);
    tjet->SetBranchAddress("refpdgid",&refpdgid);
    tjet->SetBranchAddress("gen_charge",&gen_charge);
    tjet->SetBranchAddress("fRing2",&fRing2);
    tjet->SetBranchAddress("DRweighted",&DRweighted);
    tjet->SetBranchAddress("photonEnergyFraction",&photonEnergyFraction);
    tjet->SetBranchAddress("refarea",&refarea);
    tjet->SetBranchAddress("jtarea",&jtarea);
    tjet->SetBranchAddress("p4",&p4);
    tjet->SetBranchAddress("refdrjt",&refdrjt);
    tjet->SetBranchAddress("neutralHadronEnergyFraction",&neutralHadronEnergyFraction);
    tjet->SetBranchAddress("fRing4",&fRing4);
    tjet->SetBranchAddress("axisMinor",&axisMinor);
    tjet->SetBranchAddress("fRing5",&fRing5);
    tjet->SetBranchAddress("electronEnergyFraction",&electronEnergyFraction);
    tjet->SetBranchAddress("fRing6",&fRing6);
    tjet->SetBranchAddress("axisMajor",&axisMajor);
    tjet->SetBranchAddress("betaStarClassic",&betaStarClassic);
    tjet->SetBranchAddress("fRing7",&fRing7);
    tjet->SetBranchAddress("nCh",&nCh);
    tjet->SetBranchAddress("fRing0",&fRing0);
    tjet->SetBranchAddress("nNeutrals",&nNeutrals);
    tjet->SetBranchAddress("allGenJet_m",&allGenJet_m);
    tjet->SetBranchAddress("allGenJet_eta",&allGenJet_eta);
    tjet->SetBranchAddress("HFHadronEnergyFraction",&HFHadronEnergyFraction);
    tjet->SetBranchAddress("gen_p4",&gen_p4);
    tjet->SetBranchAddress("ptD",&ptD);
    tjet->SetBranchAddress("PUJetId_fullDiscriminant",&PUJetId_fullDiscriminant);
    tjet->SetBranchAddress("PUJetId_fullId",&PUJetId_fullId);
    tjet->SetBranchAddress("chargedEmEnergyFraction",&chargedEmEnergyFraction);
    tjet->SetBranchAddress("jetRchg",&jetRchg);
    tjet->SetBranchAddress("charge",&charge);
    tjet->SetBranchAddress("QGTagger_qgLikelihood",&QGTagger_qgLikelihood);
    tjet->SetBranchAddress("dRMatch",&dRMatch);
    tjet->SetBranchAddress("muonEnergyFraction",&muonEnergyFraction);
    tjet->SetBranchAddress("fRing8",&fRing8);
    tjet->SetBranchAddress("pull",&pull);
    tjet->SetBranchAddress("beta",&beta);
    tjet->SetBranchAddress("jetRneutral",&jetRneutral);
    tjet->SetBranchAddress("jetR",&jetR);
    tjet->SetBranchAddress("Ttheta",&Ttheta);
    tjet->SetBranchAddress("pfTrackCountingHighEffBJetTags",&pfTrackCountingHighEffBJetTags);
    tjet->SetBranchAddress("pfTrackCountingHighPurBJetTags",&pfTrackCountingHighPurBJetTags);
    tjet->SetBranchAddress("pfJetProbabilityBJetTags",&pfJetProbabilityBJetTags);
    tjet->SetBranchAddress("pfJetBProbabilityBJetTags",&pfJetBProbabilityBJetTags);
    tjet->SetBranchAddress("pfSimpleSecondaryVertexHighEffBJetTags",&pfSimpleSecondaryVertexHighEffBJetTags);
    tjet->SetBranchAddress("pfSimpleSecondaryVertexHighPurBJetTags",&pfSimpleSecondaryVertexHighPurBJetTags);
    tjet->SetBranchAddress("pfCombinedSecondaryVertexV2BJetTags",&pfCombinedSecondaryVertexV2BJetTags);
    tjet->SetBranchAddress("pfCombinedInclusiveSecondaryVertexV2BJetTags",&pfCombinedInclusiveSecondaryVertexV2BJetTags);


    tvtx->SetBranchAddress("covariance",&covariance);
    tvtx->SetBranchAddress("position",&position);
    tvtx->SetBranchAddress("isValid",&isValid);
    tvtx->SetBranchAddress("isFake",&isFake);
    tvtx->SetBranchAddress("ndof",&ndof);
    tvtx->SetBranchAddress("normalizedChi2",&normalizedChi2);

    tmet->SetBranchAddress("caloMET_pt",&met_caloMET_pt);
    tmet->SetBranchAddress("gen_significance",&met_gen_significance);
    tmet->SetBranchAddress("gen_sumEt",&met_gen_sumEt);
    tmet->SetBranchAddress("uncorrectedSumEt",&met_uncorrectedSumEt);
    tmet->SetBranchAddress("gen_y",&met_gen_y);
    tmet->SetBranchAddress("uncorrectedPhi",&met_uncorrectedPhi);
    tmet->SetBranchAddress("y",&met_y);
    tmet->SetBranchAddress("sumEt",&met_sumEt);
    tmet->SetBranchAddress("significance",&met_significance);
    tmet->SetBranchAddress("charge",&met_charge);
    tmet->SetBranchAddress("caloMET_sumEt",&met_caloMET_sumEt);
    tmet->SetBranchAddress("has_gen_particle",&met_has_gen_particle);
    tmet->SetBranchAddress("gen_p4",&met_gen_p4);
    tmet->SetBranchAddress("p4",&met_p4);
    tmet->SetBranchAddress("gen_charge",&met_gen_charge);
    tmet->SetBranchAddress("caloMET_phi",&met_caloMET_phi);
    tmet->SetBranchAddress("uncorrectedPt",&met_uncorrectedPt);

    int entries = tevent->GetEntries();
    cout<<"Number of events in file: "<<entries<<endl;
    assert(thlt->GetEntries()==entries);
    assert(tjet->GetEntries()==entries);
    assert(tvtx->GetEntries()==entries);
    assert(tmet->GetEntries()==entries);
    return entries;
  }
  void read(long i) {
    tevent->GetEntry(i);
    thlt->GetEntry(i);
    tjet->GetEntry(i);
    tvtx->GetEntry(i);
    tmet->GetEntry(i);
  }
};

struct BaconTree {
  baconhep::TEventInfo eventinfo;
  baconhep::TGenEventInfo geneventinfo;
  TClonesArray *vertices,*jets,*addjets;
  TTree *tree;
  vector<string> *triggernames;

  void init(TFile *f, string jetcoll) {
    baconhep::TEventInfo::Class()->IgnoreTObjectStreamer();
    baconhep::TGenEventInfo::Class()->IgnoreTObjectStreamer();
    baconhep::TJet::Class()->IgnoreTObjectStreamer();
    baconhep::TVertex::Class()->IgnoreTObjectStreamer();
    baconhep::TAddJet::Class()->IgnoreTObjectStreamer();

    vertices = new TClonesArray("baconhep::TVertex");
    jets = new TClonesArray("baconhep::TJet");
    addjets = new TClonesArray("baconhep::TAddJet");
    triggernames = new vector<string>({"HLT_ZeroBias_v","HLT_DiPFJetAve100_HFJEC_v", "HLT_DiPFJetAve140_v", "HLT_DiPFJetAve160_HFJEC_v",
	                                     "HLT_DiPFJetAve200_v", "HLT_DiPFJetAve220_HFJEC_v", "HLT_DiPFJetAve260_v", "HLT_DiPFJetAve300_HFJEC_v",
	                                     "HLT_DiPFJetAve320_v", "HLT_DiPFJetAve400_",	"HLT_DiPFJetAve40_v", "HLT_DiPFJetAve500_v",
	                                     "HLT_DiPFJetAve60_HFJEC_v", "HLT_DiPFJetAve60_v", "HLT_DiPFJetAve80_HFJEC_v", "HLT_DiPFJetAve80_v",
                                       "HLT_PFJet140_v", "HLT_PFJet200_v", "HLT_PFJet260_v", "HLT_PFJet320_v", "HLT_PFJet40_v", "HLT_PFJet400_v",
                                       "HLT_PFJet450_v", "HLT_PFJet500_v", "HLT_PFJet60_v", "HLT_PFJet80_v"});
    sort(triggernames->begin(),triggernames->end());

    f->cd();
    tree   = new TTree("Events","Events");
    tree->Branch("Info",&eventinfo);
    tree->Branch("GenEvtInfo",&geneventinfo);
    tree->Branch("PV",&vertices);
    tree->Branch(jetcoll.c_str(),&jets);
    tree->Branch("TriggerNames",&triggernames);
    string addname = "Add";
    addname +=jetcoll;
    tree->Branch(addname.c_str(),&addjets);
  }

  void fill(const JMETree& jme) {
    eventinfo.runNum = jme.run;
    eventinfo.evtNum = jme.evt;
    eventinfo.lumiSec = jme.lumi;
    eventinfo.nPU =  jme.npus->size() ? (*jme.npus)[0] : 0;
    eventinfo.nPUmean = jme.tnpus->size() ? (*jme.tnpus)[0] : 0;
    eventinfo.rhoIso = 0;
    eventinfo.rhoJet = jme.rho;
    eventinfo.triggerBits = 0;
    for(auto i = jme.paths->cbegin() ;  i != jme.paths->cend() ; ++i) {
//       cout << "testing " << *i << endl;
      for(auto i2 = triggernames->cbegin(); i2 != triggernames->cend() ; ++i2) {
        if(*i2 > *i) break;
//         cout << "trying " << *i2 << endl;
        if(i->compare(0,min(i->size(),i2->size()),*i2) == 0) {
//           std::cout << "setting" << *i << ", " << *i2 << " " << i2-triggernames->cbegin() << endl;
          eventinfo.triggerBits[i2-triggernames->cbegin()] = true;
        }
      }
//       std::cout << *i << endl;
    }
    //eventinfo.triggerBits = jme.prescales->size();
    eventinfo.pfMET =  (*jme.met_p4)[0].Pt();// not stored atm, to be done later
    eventinfo.pfMETphi = (*jme.met_p4)[0].Phi();
    geneventinfo.id_1 = jme.pdf_id->first;
    geneventinfo.id_2 = jme.pdf_id->second;
    geneventinfo.x_1 = jme.pdf_x->first;
    geneventinfo.x_2 = jme.pdf_x->second;
    geneventinfo.weight = jme.weight;
    geneventinfo.pthat = jme.pthat; // is missing in the header - but anyway not needed (at the moment)


    vertices->Clear();
    jets->Clear();
    addjets->Clear();


    for(unsigned int j = 0 ; j < jme.position->size() ; ++j) {
      assert(vertices->GetEntries() < vertices->GetSize());
      const int index = vertices->GetEntries();
      new((*vertices)[index]) baconhep::TVertex();
      baconhep::TVertex    *pVertex = (baconhep::TVertex*)(*vertices)[index];
      //pVertex->nTracksFit =
      pVertex->ndof = (*jme.ndof)[j];
      pVertex->chi2 = (*jme.normalizedChi2)[j];
      pVertex->x = (*jme.position)[j].X();
      pVertex->y = (*jme.position)[j].Y();
      pVertex->z = (*jme.position)[j].Z();
    }



    for(unsigned int j = 0 ; j < jme.p4->size() ; ++j) {
      assert(jets->GetEntries() < jets->GetSize());
      const int index = jets->GetEntries();
      new((*jets)[index]) baconhep::TJet();
      baconhep::TJet    *pJet = (baconhep::TJet*)(*jets)[index];
      pJet->pt    = (*jme.p4)[j].pt();
      pJet->eta   = (*jme.p4)[j].eta();
      pJet->phi   = (*jme.p4)[j].phi();
      pJet->mass  = (*jme.p4)[j].mass();
      pJet->ptRaw = (*jme.p4)[j].pt() * (*jme.jec_toraw)[j];
      //pJet->csv = (*jme.pfCombinedSecondaryVertexV2BJetTags)[j];  // only stored in AK4PFCHS, to be done later
      pJet->area  = (*jme.jtarea)[j];
      pJet->genpt    = (*jme.gen_p4)[j].pt();
      pJet->geneta   = (*jme.gen_p4)[j].eta();
      pJet->genphi   = (*jme.gen_p4)[j].phi();
      pJet->genm  = (*jme.gen_p4)[j].mass();
      pJet->betaStar = (*jme.betaStar)[j];
      //std::cout << pJet->pt << std::endl;
    }


    tree->Fill();

  }


};

int convert(string infile, string outfile, string jetcoll) {
  JMETree jmetree = { };
  TFile* fin = TFile::Open(infile.c_str());
  long nev = jmetree.init(fin,jetcoll);

  TFile* fout = TFile::Open(outfile.c_str(),"RECREATE");
  BaconTree bacontree;
  bacontree.init(fout,jetcoll);

  //  std::cout << "input file " << infile << " with " << nev << " events.\n";
  for(int i = 0 ; i < nev ; ++i) {
    jmetree.read(i);
    if(jmetree.p4->size() < 2) continue;
    //std::cout << "event " << jmetree.evt << " vertices:" << jmetree.position->size() << " rhos " << jmetree.rhos->size() << " jets " << jmetree.p4->size() << '\n';
    /*
    for(unsigned int j = 0 ; j < jmetree.p4->size() ; ++j) {
      std::cout << (*jmetree.p4)[j].pt() << '\n';
    }
    */
    bacontree.fill(jmetree);
  }

  fin->Close();
  bacontree.tree->Write();
  fout->Close();
  return 0;
}
