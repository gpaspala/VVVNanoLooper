#include "TMVA/Factory.h"
#include "TMVA/MethodCategory.h"
#include "TFile.h"
#include "TTree.h"
#include "TCut.h"
#include "TH1F.h"
#include "TMVA/Reader.h"
#include "TMVA/DataLoader.h"

using namespace TMVA;
using namespace TMath;

void trainingScript(){

  //open root files

  int NSig =4;

  float XSEC[4] = {
    0.2086, //WWW
    0.1651, //WWZ
    0.05565, //WZZ
    0.01398, //ZZZ
  };

  TString SAMPLE[4]{
  "/nfs-7/userdata/gpaspala/tupler_babies/merged/VVV/test_TreesforTraining/output/2018/WWW.root",
  "/nfs-7/userdata/gpaspala/tupler_babies/merged/VVV/test_TreesforTraining/output/2018/WWZ.root",
  "/nfs-7/userdata/gpaspala/tupler_babies/merged/VVV/test_TreesforTraining/output/2018/WZZ.root",
  "/nfs-7/userdata/gpaspala/tupler_babies/merged/VVV/test_TreesforTraining/output/2018/ZZZ.root",
  };

  TFile *inf[NSig];
  TTree *SignalTree[NSig];
  TTree *SignalTreeTrain[NSig];


  float norm[NSig];
  for(int i=0; i<NSig; i++){
    inf[i] = TFile::Open(SAMPLE[i]);
    cout << SAMPLE[i] << endl;
    norm[i] = ((TH1F*)inf[i]->Get("Wgt__h_nevents"))->GetSumOfWeights();
    SignalTreeTrain[i]  = (TTree*)inf[i]->Get("t");
    //SignalTreeTrain[i]=(TTree*)SignalTree[i]->CloneTree(300000);
  }

  int NDY= 2;

  TString SAMPLE_DY[2]{
   "/nfs-7/userdata/gpaspala/tupler_babies/merged/VVV/test_TreesforTraining/output/2018/DY_low.root",
   "/nfs-7/userdata/gpaspala/tupler_babies/merged/VVV/test_TreesforTraining/output/2018/DY_high.root",
 };

  float XSEC_DY[2]{
    20657,//DY10to50
    6197.9 //DY50
  };

  TFile *infDY[NDY];
  TTree *DYTree[NDY];
  TTree *DYTreeTrain[NDY];

  float normDY[NDY];
  for(int i=0; i<NDY; i++){
    infDY[i] = TFile::Open(SAMPLE_DY[i]);
    cout << SAMPLE_DY[i] << endl;
    normDY[i] = ((TH1F*)inf[i]->Get("Wgt__h_nevents"))->GetSumOfWeights();
    DYTreeTrain[i]  = (TTree*)infDY[i]->Get("t");
    //DYTreeTrain[i]=(TTree*)DYTree[i]->CloneTree(300000);
  }


  //add ttJets//
  TFile *fttb=TFile::Open("/nfs-7/userdata/gpaspala/tupler_babies/merged/VVV/test_TreesforTraining/output/2018/TTBAR_PH.root");
  TTree *trainTTbarTree =(TTree*)fttb->Get("t");

  //adiing ttbr
  /*TString SAMPLE_ttb[4]{
   "/nfs-7/userdata/gpaspala/tupler_babies/merged/VVV/test_TreesforTraining/output/2018/TTBAR_PH.root",
   "/nfs-7/userdata/gpaspala/tupler_babies/merged/VVV/test_TreesforTraining/output/2018/TTDL.root",
   "/nfs-7/userdata/gpaspala/tupler_babies/merged/VVV/test_TreesforTraining/output/2018/TTdilep0jet.root",
   "/nfs-7/userdata/gpaspala/tupler_babies/merged/VVV/test_TreesforTraining/output/2018/TTdilep1jet.root",

 };

  int Nttb= 4;
  float XSEC_ttb[4]{
    831.76,//TTJ_Tune
    72.1, //TTDL
    81.32, //TTdilep0jet
    72.48, //TTdilep1jet
  };

  TFile *infttb[Nttb];
  TTree *ttbTree[Nttb];
  TTree *ttbTreeTrain[Nttb];

  float normttb[Nttb];

  for(int i=0; i<Nttb; i++){
    infttb[i] = TFile::Open(SAMPLE_ttb[i]);
    cout << SAMPLE_ttb[i] << endl;
    normttb[i] = ((TH1F*)inf[i]->Get("Wgt__h_nevents"))->GetSumOfWeights();
    ttbTreeTrain[i]  = (TTree*)infttb[i]->Get("t");
  }

*/



  //output root file//
  TFile *outf = new TFile("Output_training.root","RECREATE");

  // TMVA factory //
  TMVA::Factory* factory = new TMVA::Factory("Factory",outf,"!V:!Silent:Color:DrawProgressBar:Transformations=I:AnalysisType=classification");

  /// create a Dataloader and add the trees for training ///

  TMVA::DataLoader *dataloader1 = new TMVA::DataLoader("dataloader_Sig_DY");
  TMVA::DataLoader *dataloader2 = new TMVA::DataLoader("dataloader_Sig_ttbar");

  for(int i=0; i<NSig; i++){
    dataloader1->AddSignalTree(SignalTreeTrain[i],XSEC[i]/norm[i]);
    dataloader2->AddSignalTree(SignalTreeTrain[i],XSEC[i]/norm[i]);
  }

  for(int i=0; i<NDY; i++){
    dataloader1->AddBackgroundTree(DYTreeTrain[i],XSEC_DY[i]/normDY[i]);
  }

/*  for(int i=0; i<Nttb; i++){
    dataloader2->AddBackgroundTree(ttbTreeTrain[i],XSEC_ttb[i]/normttb[i]);
  }*/

  dataloader2->AddBackgroundTree(trainTTbarTree);

  const int NVAR = 14;
  TString VAR[NVAR] = {
  "OS2jet_fatjet1_tau1",
  "OS2jet_fatjet1_tau2",
  "OS2jet_fatjet1_tau3",
  "OS2jet_fatjet1_Wtag",
  "OS2jet_fatjet1_toptag",
  "OS2jet_fatjet1_ll_DR",
  "OS2jet_fatjet1_subjet0_mass",
  //"OS2jet_fatjet1_subjet1_mass",
  //"OS2jet_fatjet1_subjet0_pt",
  //"OS2jet_fatjet1_subjet1_pt",
  "OS2jet_lep12_mass",
  "OS2jet_MTfatjetsleptonsMET",
  "OS2jet_Mfatjetsleptons",
  "OS2jet_lep12_ptscalarsum",
  };

 char TYPE[NVAR] = {'F','F','F','F','F','F','F','F','F','F','F'/*,'F','F','F'*/};

 for(int i=0;i<NVAR;i++) {
   dataloader1->AddVariable(VAR[i],TYPE[i]);
   dataloader2->AddVariable(VAR[i],TYPE[i]);

 }

 dataloader1->PrepareTrainingAndTestTree("OS2jet_Jetcontent>0","SplitMode=Random:NormMode=NumEvents:!V");
 dataloader2->PrepareTrainingAndTestTree("OS2jet_Jetcontent>0","SplitMode=Random:NormMode=NumEvents:!V");

 factory->BookMethod(dataloader1, TMVA::Types::kBDT,"BDT_SvsDY","NTrees=200:BoostType=Grad:Shrinkage=0.1:nCuts=500");
 factory->BookMethod(dataloader2, TMVA::Types::kBDT,"BDT_Svsttb","NTrees=200:BoostType=Grad:Shrinkage=0.1:nCuts=500");
 factory->BookMethod(dataloader1, TMVA::Types::kFisher,"Fisher_SvsDY");
 factory->BookMethod(dataloader2, TMVA::Types::kFisher,"Fisher_Svsttb");

 factory->TrainAllMethods();
 factory->TestAllMethods();
 factory->EvaluateAllMethods();
 outf->Close();

 delete factory;
 delete dataloader1;
 delete dataloader2;

}
