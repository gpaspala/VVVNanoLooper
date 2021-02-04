#include "Process_OS2Fatjet.h"

void Process_OS2Fatjet()
{
     // The framework may run over NanoAOD directly or, it may run over VVVTree.
     // ana.run_VVVTree boolean determines this.
     if (ana.run_VVVTree)
     {
         Process_OS2Fatjet_VVVTree();
     }
     else
     {
         Process_OS2Fatjet_NanoAOD();
     }


}

void Process_OS2Fatjet_NanoAOD()
{
  //==============================================
  // Process_OS2Fatjet:
  // This function gets called during the event looping.
  // This is where one sets the variables used for the category OS2Fatjet.
  //==============================================

  // Set variables used in this category.
  // If histograms are booked with these variables the histograms will be filled automatically.
  // Please follow the convention of <category>_<varname> structure.
  //ana.tx.setBranch<int>("OS2Fatjet_intVar1", -999);
  //ana.tx.setBranch<float>("OS2Fatjet_floatVar1", -999);

  // Example of reading from Nano
  // std::vector<LorentzVector> electron_p4s = nt.Electron_p4(); // nt is a global variable that accesses NanoAOD
  // std::vector<float> electron_mvaTTH = nt.Electron_mvaTTH(); // electron ttH MVA scores from NanoAOD
  // Semi-complete list of NanoAOD for 102X can be found here: https://cms-nanoaod-integration.web.cern.ch/integration/master-102X/mc102X_doc.html
  // Also consult here: https://github.com/cmstas/NanoTools/blob/d641a6d6c1aa9ecc8094a1af73d5e1bd7d6502ab/NanoCORE/Nano.h#L4875 (if new variables are added they may show up in master)

  //LorentzVector LV_OS2jet_LVVar1 = RooUtil::Calc::getLV(34.5, 1.2, 3.123, 0.105); // RooUtil::Calc::getLV() creates 4 vector

  //ana.tx.setBranch<LorentzVector>("OS2jet_LVVar1", LV_OS2jet_LVVar1);
}

void Process_OS2Fatjet_VVVTree()
{
    //==============================================
    // Process_OS2Fatjet:
    // This function gets called during the event looping.
    // This is where one sets the variables used for the category OS2Fatjet.
    //==============================================

    // Set variables used in this category.
    // If histograms are booked with these variables the histograms will be filled automatically.
    // Please follow the convention of <category>_<varname> structure.

    ana.tx.setBranch<bool>         ("Cut_OS2Fatjet_Preselection"               , vvv.Cut_OS2Fatjet_Preselection());
    ana.tx.setBranch<bool>         ("Cut_OS2Fatjet_Preselection_genmatched"    , vvv.Cut_OS2Fatjet_Preselection_genmatched());
    ana.tx.setBranch<bool>         ("Cut_OS2Fatjet_OFPreselection"       , vvv.Cut_OS2Fatjet_OFPreselection());
    ana.tx.setBranch<bool>         ("Cut_OS2Fatjet_OF2jets"       , vvv.Cut_OS2Fatjet_OF2jets());
    ana.tx.setBranch<bool>         ("Cut_OS2Fatjet_OFPreselection"       , vvv.Cut_OS2Fatjet_OFPreselection());
    ana.tx.setBranch<bool>         ("Cut_OS2Fatjet_OF1fatjet"       , vvv.Cut_OS2Fatjet_OF1fatjet());

    ana.tx.setBranch<int>          ("OS2jet_SFcontent"             ,vvv.OS2jet_SFcontent());
    ana.tx.setBranch<int>          ("OS2jet_Jetcontent"            ,vvv.OS2jet_Jetcontent());
    ana.tx.setBranch<int>          ("OS2jet_Njets"                 ,vvv.OS2jet_Njets());
    ana.tx.setBranch<int>          ("OS2jet_Nfatjets_medium"       ,vvv.OS2jet_Nfatjets_medium());
    ana.tx.setBranch<float>        ("OS2jet_fatjetwgt_medium"      ,vvv.OS2jet_fatjetwgt_medium());
    ana.tx.setBranch<int>          ("OS2jet_Nbjetsv1"              ,vvv.OS2jet_Nbjetsv1());
    ana.tx.setBranch<float>        ("OS2jet_lep12_DR"              ,vvv.OS2jet_lep12_DR());
    ana.tx.setBranch<float>        ("OS2jet_jet12_DR"              ,vvv.OS2jet_jet12_DR());

    ana.tx.setBranch<bool>         ("OS2jet_fatjet1_tau21cut"       , vvv.OS2jet_fatjet1_tau21cut());









}




  void PostProcess_OS2Fatjet(){
    if (ana.cutflow.getCut("Cut_OS2Fatjet_Preselection").pass){
                   ana.tx.fill();
    }
  }
