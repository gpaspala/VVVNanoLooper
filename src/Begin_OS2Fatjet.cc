#include "Begin_OS2Fatjet.h"

void Begin_OS2Fatjet()
{


   //comment
  //==============================================
  //// Begin_OS2Fatjet:
  //// This function gets called prior to the event looping.
  //// This is where one declares variables, histograms, event selections for the category OS2jet.
  ////==============================================
  //


  // Create variables used in this category.
  // Please follow the convention of <category>_<varname> structure.

  ana.tx.createBranch<int>  ("OS2jet_SFcontent"             );
  ana.tx.createBranch<int>  ("OS2jet_Jetcontent"            );
  ana.tx.createBranch<int>  ("OS2jet_Nfatjets"              );
  ana.tx.createBranch<int>  ("OS2jet_Njets"                 );
  ana.tx.createBranch<int>  ("OS2jet_Nbjetsv1"              );
  ana.tx.createBranch<int>  ("OS2jet_Nbjetsv2"              );
  //ana.tx.createBranch<int>  ("OS2jet_Nbjetsmedv1"           );
  //ana.tx.createBranch<int>  ("OS2jet_NfatjetsMinusNjets"    );
  ana.tx.createBranch<float>("OS2jet_lep1_pt"               );
  ana.tx.createBranch<float>("OS2jet_lep2_pt"               );
  ana.tx.createBranch<float>("OS2jet_lep12_ptvectorsum"     );
  ana.tx.createBranch<float>("OS2jet_lep12_ptscalarsum"     );
  ana.tx.createBranch<float>("OS2jet_lep12_ptscalarprod"    );
  ana.tx.createBranch<float>("OS2jet_lep12_mass"            );
  ana.tx.createBranch<float>("OS2jet_lep12_DR"              );
  ana.tx.createBranch<float>("OS2jet_lep12_DPhi"            );
  ana.tx.createBranch<float>("OS2jet_lep12_Deta"            );
  ana.tx.createBranch<float>("OS2jet_fatjet1_pt"            );
  ana.tx.createBranch<float>("OS2jet_fatjet2_pt"            );
  ana.tx.createBranch<float>("OS2jet_fatjet1_mass"          );
  ana.tx.createBranch<float>("OS2jet_fatjet2_mass"          );
  ana.tx.createBranch<float>("OS2jet_fatjet1_massSD"        );
  ana.tx.createBranch<float>("OS2jet_fatjet2_massSD"        );
  ana.tx.createBranch<float>("OS2jet_fatjet1_subjet0_pt"    );
  ana.tx.createBranch<float>("OS2jet_fatjet1_subjet1_pt"    );
  ana.tx.createBranch<float>("OS2jet_fatjet1_subjet0_eta"   );
  ana.tx.createBranch<float>("OS2jet_fatjet1_subjet1_eta"   );
  ana.tx.createBranch<float>("OS2jet_fatjet1_subjet0_mass"  );
  ana.tx.createBranch<float>("OS2jet_fatjet1_subjet1_mass"  );
  ana.tx.createBranch<float>("OS2jet_fatjet2_subjet0_pt"    );
  ana.tx.createBranch<float>("OS2jet_fatjet2_subjet1_pt"    );
  ana.tx.createBranch<float>("OS2jet_fatjet2_subjet0_eta"   );
  ana.tx.createBranch<float>("OS2jet_fatjet2_subjet1_eta"   );
  ana.tx.createBranch<float>("OS2jet_fatjet2_subjet0_mass"  );
  ana.tx.createBranch<float>("OS2jet_fatjet2_subjet1_mass"  );
  ana.tx.createBranch<float>("OS2jet_fatjet1_tau1"          );
  ana.tx.createBranch<float>("OS2jet_fatjet1_tau2"          );
  ana.tx.createBranch<float>("OS2jet_fatjet1_tau3"          );
  ana.tx.createBranch<float>("OS2jet_fatjet1_tau21"         );
  ana.tx.createBranch<float>("OS2jet_fatjet2_tau21"         );
  ana.tx.createBranch<float>("OS2jet_fatjet1_tau32"         );
  ana.tx.createBranch<float>("OS2jet_fatjet2_tau32"         );
  ana.tx.createBranch<float>("OS2jet_fatjet2_tau1"          );
  ana.tx.createBranch<float>("OS2jet_fatjet2_tau2"          );
  ana.tx.createBranch<float>("OS2jet_fatjet2_tau3"          );
  ana.tx.createBranch<float>("OS2jet_fatjet1_ll_DR"         );
  ana.tx.createBranch<float>("OS2jet_fatjet2_ll_DR"         );
  ana.tx.createBranch<float>("OS2jet_fatjet12_ll_DRmax"     );
  ana.tx.createBranch<float>("OS2jet_fatjet12_ptvectorsum"  );
  ana.tx.createBranch<float>("OS2jet_fatjet12_ptscalarsum"  );
  ana.tx.createBranch<float>("OS2jet_fatjet12_ptscalarprod" );
  ana.tx.createBranch<float>("OS2jet_fatjet12_mass"         );
  ana.tx.createBranch<float>("OS2jet_fatjet12_masssum"      );
  ana.tx.createBranch<float>("OS2jet_fatjet12_massproduct"  );
  ana.tx.createBranch<float>("OS2jet_fatjet12_massSDsum"    );
  ana.tx.createBranch<float>("OS2jet_fatjet12_massSDproduct");
  ana.tx.createBranch<float>("OS2jet_fatjet12_DR"           );
  ana.tx.createBranch<float>("OS2jet_fatjet12_DPhi"         );
  ana.tx.createBranch<float>("OS2jet_fatjet12_DEta"         );
  ana.tx.createBranch<float>("OS2jet_fatjet1_toptag"        );
  ana.tx.createBranch<float>("OS2jet_fatjet2_toptag"        );
  ana.tx.createBranch<float>("OS2jet_fatjet1_Wtag"          );
  ana.tx.createBranch<float>("OS2jet_fatjet2_Wtag"          );
  ana.tx.createBranch<float>("OS2jet_fatjet1_Ztag"          );
  ana.tx.createBranch<float>("OS2jet_fatjet2_Ztag"          );
  ana.tx.createBranch<float>("OS2jet_fatjet1_Zbbtag"        );
  ana.tx.createBranch<float>("OS2jet_fatjet2_Zbbtag"        );
  //ana.tx.createBranch<float>("OS2jet_fatjet1_WpZtag"        );
  //ana.tx.createBranch<float>("OS2jet_fatjet1_WtZtag"        );
  //ana.tx.createBranch<float>("OS2jet_fatjet2_WpZtag"        );
  //ana.tx.createBranch<float>("OS2jet_fatjet2_WtZtag"        );
  ana.tx.createBranch<float>("OS2jet_fatjet12_WtWtag"       );
  //ana.tx.createBranch<float>("OS2jet_fatjet12_WtZtag"       );
  //ana.tx.createBranch<float>("OS2jet_fatjet12_ZtWtag"       );
  //ana.tx.createBranch<float>("OS2jet_fatjet12_ZtZtag"       );
  ana.tx.createBranch<float>("OS2jet_fatjet12_WpWtag"       );
  //ana.tx.createBranch<float>("OS2jet_fatjet12_WpZtag"       );
  //ana.tx.createBranch<float>("OS2jet_fatjet12_ZpWtag"       );
  //ana.tx.createBranch<float>("OS2jet_fatjet12_ZpZtag"       );
  ana.tx.createBranch<int>  ("OS2jet_jet1_idx"              );
  ana.tx.createBranch<int>  ("OS2jet_jet2_idx"              );
  ana.tx.createBranch<float>("OS2jet_jet1_pt"               );
  ana.tx.createBranch<float>("OS2jet_jet2_pt"               );
  ana.tx.createBranch<float>("OS2jet_jet12_ptvectorsum"     );
  ana.tx.createBranch<float>("OS2jet_jet12_ptscalarsum"     );
  ana.tx.createBranch<float>("OS2jet_jet12_ptscalarprod"    );
  ana.tx.createBranch<float>("OS2jet_jet12_mass"            );
  ana.tx.createBranch<float>("OS2jet_jet12_DR"              );
  ana.tx.createBranch<float>("OS2jet_jet12_DPhi"            );
  ana.tx.createBranch<float>("OS2jet_jet12_DEta"            );
  ana.tx.createBranch<float>("OS2jet_MET"                   );
  ana.tx.createBranch<float>("OS2jet_MET_fatjet1_DPhi"      );
  ana.tx.createBranch<float>("OS2jet_MET_ll_DPhi"           );
  ana.tx.createBranch<float>("OS2jet_fatjet1_Recojet_matchJet_DRmin");
  //ana.tx.createBranch<float>("OS2jet_fatjet2_Recojet_matchJet_DRmin");
  //ana.tx.createBranch<float>("OS2jet_fatjet1_Recojet_Whadr_match_DRmin");
  ana.tx.createBranch<int>  ("OS2jet_fatjet1_genmatching"   );
  ana.tx.createBranch<int>  ("OS2jet_fatjet2_genmatching"   );
  ana.tx.createBranch<int>  ("OS2jet_fatjet1_genmatchingv2" );
  ana.tx.createBranch<int>  ("OS2jet_fatjet2_genmatchingv2" );
  ana.tx.createBranch<int>  ("OS2jet_fatjet1_genmatchingv3" );
  //ana.tx.createBranch<int>  ("OS2jet_fatjet2_genmatchingv3" );
  ana.tx.createBranch<float>("OS2jet_genMVVV"               );
  ana.tx.createBranch<float>("OS2jet_genpTVVV"              );
  ana.tx.createBranch<float>("OS2jet_Mfatjetsleptons"       );
  ana.tx.createBranch<float>("OS2jet_MTfatjetsleptonsMET"   );
  /*ana.tx.createBranch<bool >("OS2jet_fatjet1_massSDcut"     );
  ana.tx.createBranch<bool >("OS2jet_fatjet1_WtagMcut"      );
  ana.tx.createBranch<bool >("OS2jet_fatjet1_WtagLcut"      );
  ana.tx.createBranch<bool >("OS2jet_fatjet1_tau21cut"      );
  ana.tx.createBranch<bool >("OS2jet_fatjet2_massSDcut"     );
  ana.tx.createBranch<bool >("OS2jet_fatjet2_WtagMcut"      );
  ana.tx.createBranch<bool >("OS2jet_fatjet2_WtagLcut"      );
  ana.tx.createBranch<bool >("OS2jet_fatjet2_tau21cut"      );
  //ana.tx.createBranch<float>("OS2jet_fatjet2_Recojet_Whadr_match_DRmin");
  ana.tx.createBranch<bool >("OS2jet_fatjet12_ANDmassSDcut" );
  ana.tx.createBranch<bool >("OS2jet_fatjet12_ANDWtagMcut"  );
  ana.tx.createBranch<bool >("OS2jet_fatjet12_ANDWtagLcut"  );
  ana.tx.createBranch<bool >("OS2jet_fatjet12_ANDtau21cut"  );
  ana.tx.createBranch<bool >("OS2jet_fatjet12_ORmassSDcut"  );
  ana.tx.createBranch<bool >("OS2jet_fatjet12_ORWtagMcut"   );
  ana.tx.createBranch<bool >("OS2jet_fatjet12_ORWtagLcut"   );
  ana.tx.createBranch<bool >("OS2jet_fatjet12_ORtau21cut"   );
  ana.tx.createBranch<int  >("OS2jet_Nfatjets_vloose"       );
  ana.tx.createBranch<int  >("OS2jet_Nfatjets_loose"        );
  ana.tx.createBranch<int  >("OS2jet_Nfatjets_medium"       );
  ana.tx.createBranch<float>("OS2jet_fatjetwgt_vloose"      );
  ana.tx.createBranch<float>("OS2jet_fatjetwgt_loose"       );
  ana.tx.createBranch<float>("OS2jet_fatjetwgt_medium"      ); */




// Define selections
// CommonCut will contain selections that should be common to all categories, starting from this cut, add cuts for this category of the analysis.
  ana.cutflow.getCut("CommonCut");

  ana.cutflow.addCutToLastActiveCut("Cut_OS2Fatjet_OSleps",
                                   [&]()
                                   {
                                     //2 leptons
                                    if (not (ana.tx.getBranchLazy<vector<int> >("Common_lep_pdgid").size() == 2))
                                      return false;
                                    if(ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[0].Pt()<25)
                                      return false;
                                    if(ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[1].Pt()<15)
                                      return false;
                                    //test for OS
                                    if(ana.tx.getBranchLazy<vector<int> >("Common_lep_pdgid")[0]*ana.tx.getBranchLazy<vector<int> >("Common_lep_pdgid")[1]>0)
                                      return false;
                                    return true;
                                    }, [&]() { return ana.tx.getBranchLazy<float>("Common_event_lepSF"); });
                                    //}, UNITY );

  //
  ana.cutflow.addCutToLastActiveCut("Cut_OS2Fatjet_Trigger",
                                      [&]()
                                      {
                                        // test trigger bits
                                        //if (nt.isData()){// run only on data
                                        if (true){// run on data and simulation
                                          if(nt.isData() && !(ana.tx.getBranchLazy<bool>("Common_pass_duplicate_removal_mm_em_ee"))) return false;
                                          if(abs(ana.tx.getBranchLazy<vector<int> >("Common_lep_pdgid")[0]*ana.tx.getBranchLazy<vector<int> >("Common_lep_pdgid")[1])==121){
                                            if(!ana.tx.getBranchLazy<bool>("Common_HLT_DoubleEl")) return false;
                                          }
                                          if(abs(ana.tx.getBranchLazy<vector<int> >("Common_lep_pdgid")[0]*ana.tx.getBranchLazy<vector<int> >("Common_lep_pdgid")[1])==169){
                                            if(!ana.tx.getBranchLazy<bool>("Common_HLT_DoubleMu")) return false;
                                          }
                                          if(abs(ana.tx.getBranchLazy<vector<int> >("Common_lep_pdgid")[0]*ana.tx.getBranchLazy<vector<int> >("Common_lep_pdgid")[1])==143){
                                            if(!ana.tx.getBranchLazy<bool>("Common_HLT_MuEG")) return false;
                                          }
                                        }
                                        return true;
                                      }, UNITY);


 ///
 ana.cutflow.addCutToLastActiveCut("Cut_OS2Fatjet_Preselection",
                                      [&]()
                                      {
                                        bool isSFOSZ = false;
                                        bool isSFOS = false;
                                        //cout << ana.tx.getBranchLazy<vector<int>>("Common_ana.tx.getBranchLazy<vector<int> >("Common_lep_pdgid")")[0] << " " << ana.tx.getBranchLazy<vector<int>>("Common_ana.tx.getBranchLazy<vector<int> >("Common_lep_pdgid")")[1] << endl;
                                        //test for SFOSs
                                        if(ana.tx.getBranchLazy<vector<int> >("Common_lep_pdgid")[0]==(-ana.tx.getBranchLazy<vector<int> >("Common_lep_pdgid")[1])){
                                          isSFOS = true;
                                          //test if OS is a Z
                                          if( abs((ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[0]+ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[1]).M()-91.1876)<20.)
                                            isSFOSZ = true;
                                        }
                                        //if (nbjets>0)
                                        //  return false;//XXX undo this - implement a selection with >=1 b
                                        if(     isSFOSZ==true )  ana.tx.setBranch<int>("OS2jet_SFcontent"  ,2);
                                        else if(isSFOS ==true )  ana.tx.setBranch<int>("OS2jet_SFcontent"  ,1);
                                        else                     ana.tx.setBranch<int>("OS2jet_SFcontent"  ,0);



                                        //make some default setting - overwrite later
                                        ana.tx.setBranch<float>("OS2jet_lep1_pt",               ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[0].Pt());
                                        ana.tx.setBranch<float>("OS2jet_lep2_pt",               ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[1].Pt());
                                        ana.tx.setBranch<float>("OS2jet_lep12_ptvectorsum",    (ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[0]+ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[1]).Pt());
                                        ana.tx.setBranch<float>("OS2jet_lep12_ptscalarsum",     ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[0].Pt()+ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[1].Pt());
                                        ana.tx.setBranch<float>("OS2jet_lep12_ptscalarprod",    ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[0].Pt()*ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[1].Pt());
                                        ana.tx.setBranch<float>("OS2jet_lep12_mass",           (ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[0]+ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[1]).M());
                                        ana.tx.setBranch<float>("OS2jet_lep12_DR",              RooUtil::Calc::DeltaR(ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[0],ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[1]));
                                        ana.tx.setBranch<float>("OS2jet_lep12_DPhi",            abs(RooUtil::Calc::DeltaPhi(ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[0],ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[1])));
                                        ana.tx.setBranch<float>("OS2jet_lep12_Deta",            abs(RooUtil::Calc::DeltaEta(ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[0],ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[1])));
                                        ana.tx.setBranch<int>  ("OS2jet_Jetcontent",            -999);
                                        ana.tx.setBranch<int>  ("OS2jet_Nfatjets",              -999);
                                        ana.tx.setBranch<int>  ("OS2jet_Njets",                 -999);
                                        ana.tx.setBranch<int>  ("OS2jet_Nbjetsv1",              ana.tx.getBranchLazy<int>("Common_nb_loose"));
                                        //ana.tx.setBranch<int>  ("OS2jet_Nbjetsmedv1",           ana.tx.getBranchLazy<int>("Common_nb_medium"));
                                        ana.tx.setBranch<int>  ("OS2jet_Nbjetsv2",              -999);
                                        //ana.tx.setBranch<int>  ("OS2jet_NfatjetsMinusNjets",    -999);
                                        ana.tx.setBranch<float>("OS2jet_MET",                   ana.tx.getBranchLazy<LorentzVector>("Common_met_p4").Pt());
                                        ana.tx.setBranch<float>("OS2jet_MET_fatjet1_DPhi",      -999.);
                                        ana.tx.setBranch<float>("OS2jet_MET_ll_DPhi",           abs(RooUtil::Calc::DeltaPhi(ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[0]+ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[1],ana.tx.getBranchLazy<LorentzVector>("Common_met_p4"))));
                                        ana.tx.setBranch<float>("OS2jet_fatjet1_pt",            -999.);
                                        ana.tx.setBranch<float>("OS2jet_fatjet2_pt",            -999.);
                                        ana.tx.setBranch<float>("OS2jet_fatjet1_mass",          -999.);
                                        ana.tx.setBranch<float>("OS2jet_fatjet2_mass",          -999.);
                                        ana.tx.setBranch<float>("OS2jet_fatjet1_massSD",        -999.);
                                        ana.tx.setBranch<float>("OS2jet_fatjet2_massSD",        -999.);
                                        ana.tx.setBranch<float>("OS2jet_fatjet1_subjet0_pt",     -999.);
                                        ana.tx.setBranch<float>("OS2jet_fatjet1_subjet1_pt",     -999.);
                                        ana.tx.setBranch<float>("OS2jet_fatjet1_subjet0_eta",    -999.);
                                        ana.tx.setBranch<float>("OS2jet_fatjet1_subjet1_eta",    -999.);
                                        ana.tx.setBranch<float>("OS2jet_fatjet1_subjet0_mass",   -999.);
                                        ana.tx.setBranch<float>("OS2jet_fatjet1_subjet1_mass",   -999.);
                                        ana.tx.setBranch<float>("OS2jet_fatjet2_subjet0_pt",     -999.);
                                        ana.tx.setBranch<float>("OS2jet_fatjet2_subjet1_pt",     -999.);
                                        ana.tx.setBranch<float>("OS2jet_fatjet2_subjet0_eta",    -999.);
                                        ana.tx.setBranch<float>("OS2jet_fatjet2_subjet1_eta",   -999.);
                                        ana.tx.setBranch<float>("OS2jet_fatjet2_subjet0_mass",   -999.);
                                        ana.tx.setBranch<float>("OS2jet_fatjet2_subjet1_mass",   -999.);
                                        ana.tx.setBranch<float>("OS2jet_fatjet1_tau21",         -999.);
                                        ana.tx.setBranch<float>("OS2jet_fatjet2_tau21",         -999.);
                                        ana.tx.setBranch<float>("OS2jet_fatjet1_tau32",         -999.);
                                        ana.tx.setBranch<float>("OS2jet_fatjet2_tau32",         -999.);
                                        ana.tx.setBranch<float>("OS2jet_fatjet1_ll_DR",         -999.);
                                        ana.tx.setBranch<float>("OS2jet_fatjet2_ll_DR",         -999.);
                                        ana.tx.setBranch<float>("OS2jet_fatjet12_ll_DRmax",     -999.);
                                        ana.tx.setBranch<float>("OS2jet_fatjet12_ptvectorsum",  -999.);
                                        ana.tx.setBranch<float>("OS2jet_fatjet12_ptscalarsum",  -999.);
                                        ana.tx.setBranch<float>("OS2jet_fatjet12_ptscalarprod", -999.);
                                        ana.tx.setBranch<float>("OS2jet_fatjet12_mass",         -999.);
                                        ana.tx.setBranch<float>("OS2jet_fatjet12_masssum",      -999.);
                                        ana.tx.setBranch<float>("OS2jet_fatjet12_massproduct",  -999.);
                                        ana.tx.setBranch<float>("OS2jet_fatjet12_massSDsum",    -999.);
                                        ana.tx.setBranch<float>("OS2jet_fatjet12_massSDproduct",-999.);
                                        ana.tx.setBranch<float>("OS2jet_fatjet12_DR",           -999.);
                                        ana.tx.setBranch<float>("OS2jet_fatjet12_DPhi",         -999.);
                                        ana.tx.setBranch<float>("OS2jet_fatjet12_DEta",         -999.);
                                        ana.tx.setBranch<float>("OS2jet_fatjet1_toptag",        -999.);
                                        ana.tx.setBranch<float>("OS2jet_fatjet2_toptag",        -999.);
                                        ana.tx.setBranch<float>("OS2jet_fatjet1_Wtag",          -999.);
                                        ana.tx.setBranch<float>("OS2jet_fatjet2_Wtag",          -999.);
                                        ana.tx.setBranch<float>("OS2jet_fatjet1_Ztag",          -999.);
                                        ana.tx.setBranch<float>("OS2jet_fatjet2_Ztag",          -999.);
                                        ana.tx.setBranch<float>("OS2jet_fatjet1_Zbbtag",        -999.);
                                        ana.tx.setBranch<float>("OS2jet_fatjet2_Zbbtag",        -999.);
                                        ana.tx.setBranch<float>("OS2jet_fatjet12_WtWtag",       -999.);
                                        ana.tx.setBranch<float>("OS2jet_fatjet12_WpWtag",       -999.);
                                        ana.tx.setBranch<int>  ("OS2jet_jet1_idx",              -999.);
                                        ana.tx.setBranch<int>  ("OS2jet_jet2_idx",              -999.);
                                        ana.tx.setBranch<float>("OS2jet_jet1_pt",               -999.);
                                        ana.tx.setBranch<float>("OS2jet_jet2_pt",               -999.);
                                        ana.tx.setBranch<float>("OS2jet_jet12_ptvectorsum",     -999.);
                                        ana.tx.setBranch<float>("OS2jet_jet12_ptscalarsum",     -999.);
                                        ana.tx.setBranch<float>("OS2jet_jet12_ptscalarprod",    -999.);
                                        ana.tx.setBranch<float>("OS2jet_jet12_mass",            -999.);
                                        ana.tx.setBranch<float>("OS2jet_jet12_DR",              -999.);
                                        ana.tx.setBranch<float>("OS2jet_jet12_DPhi",            -999.);
                                        ana.tx.setBranch<float>("OS2jet_jet12_DEta",            -999.);
                                        ana.tx.setBranch<float>("OS2jet_fatjet1_Recojet_matchJet_DRmin",            -999.);
                                        //ana.tx.setBranch<float>("OS2jet_fatjet2_Recojet_matchJet_DRmin",            -999.);
                                        ana.tx.setBranch<int>  ("OS2jet_fatjet1_genmatching",   -999.);
                                        ana.tx.setBranch<int>  ("OS2jet_fatjet2_genmatching",   -999.);
                                        ana.tx.setBranch<int>  ("OS2jet_fatjet1_genmatchingv2", -999.);
                                        ana.tx.setBranch<int>  ("OS2jet_fatjet2_genmatchingv2", -999.);
                                        ana.tx.setBranch<int>  ("OS2jet_fatjet1_genmatchingv3", -999.);
                                        //ana.tx.setBranch<int>  ("OS2jet_fatjet2_genmatchingv3", -999.);
                                        ana.tx.setBranch<float>("OS2jet_genMVVV",               -999.);
                                        ana.tx.setBranch<float>("OS2jet_genpTVVV",              -999.);
                                        ana.tx.setBranch<float>("OS2jet_Mfatjetsleptons",       -999.);
                                        ana.tx.setBranch<float>("OS2jet_MTfatjetsleptonsMET",   -999.);
                                        /*ana.tx.setBranch<bool >("OS2jet_fatjet1_massSDcut",     false);
                                        ana.tx.setBranch<bool >("OS2jet_fatjet1_tau21cut",      false);
                                        ana.tx.setBranch<bool >("OS2jet_fatjet2_massSDcut",     false);
                                        ana.tx.setBranch<bool >("OS2jet_fatjet2_tau21cut",      false);
                                        ana.tx.setBranch<bool >("OS2jet_fatjet12_ANDmassSDcut", false);
                                        ana.tx.setBranch<bool >("OS2jet_fatjet12_ANDtau21cut",  false);
                                        ana.tx.setBranch<bool >("OS2jet_fatjet12_ORmassSDcut",  false);
                                        ana.tx.setBranch<bool >("OS2jet_fatjet12_ORtau21cut",   false);
                                        ana.tx.setBranch<int>  ("OS2jet_Nfatjets_vloose",       -999.);
                                        ana.tx.setBranch<int>  ("OS2jet_Nfatjets_loose",        -999.);
                                        ana.tx.setBranch<int>  ("OS2jet_Nfatjets_medium",       -999.);
                                        ana.tx.setBranch<float>("OS2jet_fatjetwgt_vloose",      -999.);
                                        ana.tx.setBranch<float>("OS2jet_fatjetwgt_loose",       -999.);
                                        ana.tx.setBranch<float>("OS2jet_fatjetwgt_medium",      -999.);*/

                                        //vvv decays//
                                        if(ana.tx.getBranchLazy<vector<LorentzVector>>("Common_gen_vvvdecay_p4s").size()>=6){
                                          LorentzVector genVVV = LorentzVector(0.,0.,0.,0.);
                                          for(unsigned int gi = 0; gi < ana.tx.getBranchLazy<vector<LorentzVector>>("Common_gen_vvvdecay_p4s").size(); ++gi){
                                            genVVV +=  ana.tx.getBranchLazy<vector<LorentzVector>>("Common_gen_vvvdecay_p4s")[gi];
                                          }
                                          ana.tx.setBranch<float>("OS2jet_genMVVV",  genVVV.M() );
                                          ana.tx.setBranch<float>("OS2jet_genpTVVV", genVVV.Pt());
                                        }


                                        //mass variables
                                        LorentzVector LVfjl = LorentzVector(0.,0.,0.,0.); //lorentz vector fatjet-lepton
                                        for(unsigned int ifj = 0; ifj<ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4").size(); ++ifj){
                                          LVfjl += ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[ifj];
                                        }
                                        for(unsigned int il = 0; il<ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4").size(); ++il){
                                          LVfjl += ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[il];
                                        }
                                        ana.tx.setBranch<float>("OS2jet_Mfatjetsleptons", LVfjl.M());
                                        ana.tx.setBranch<float>("OS2jet_MTfatjetsleptonsMET",RooUtil::Calc::mT(LVfjl,ana.tx.getBranchLazy<LorentzVector>("Common_met_p4")));


 													               //now fill branches already here
                                        int nfat= ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4").size();
                                        int nnonfat = 0; int nbnonfat = 0;
                                        //start with fat jets
                                        //int fatidx1 = -1; int fatidx2 = -1; - to be replaced XX
                                        //do normal jets
                                        int jetidx1 = -1; int jetidx2 = -1;
                                        for(unsigned int ti = 0; ti<ana.tx.getBranchLazy<vector<bool>>("Common_jet_passBloose").size(); ++ti){
                                          if(ana.tx.getBranchLazy<vector<int>>("Common_jet_overlapfatjet")[ti]>=0) continue;
                                          ++nnonfat;
                                          if(ana.tx.getBranchLazy<vector<bool>>("Common_jet_passBloose")[ti]) ++nbnonfat;
                                          if(jetidx1<0) { jetidx1 = ti; continue; }
                                          if(jetidx2<0) { jetidx2 = ti; continue; }
                                        }
                                        ana.tx.setBranch<int>  ("OS2jet_Nfatjets",              nfat);
                                        ana.tx.setBranch<int>  ("OS2jet_Njets",                 nnonfat);
                                        ana.tx.setBranch<int>  ("OS2jet_Nbjetsv2",              nbnonfat);
                                        //ana.tx.setBranch<int>  ("OS2jet_NfatjetsMinusNjets",    nfat-nnonfat);

                                        if(nfat>=2)     ana.tx.setBranch<int>("OS2jet_Jetcontent" ,2);
                                        else if(nfat==1)     ana.tx.setBranch<int>("OS2jet_Jetcontent" ,1);
                                        else if(nnonfat>=2)  ana.tx.setBranch<int>("OS2jet_Jetcontent" ,0);
                                        //do >=1fatjet
                                        if(nfat>=1){
                                          ana.tx.setBranch<float>("OS2jet_MET_fatjet1_DPhi",      abs(RooUtil::Calc::DeltaPhi(ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[0],ana.tx.getBranchLazy<LorentzVector>("Common_met_p4"))));
                                          ana.tx.setBranch<float>("OS2jet_fatjet1_pt",            ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[0].Pt());
                                          ana.tx.setBranch<float>("OS2jet_fatjet1_mass",          ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[0].M());
                                          ana.tx.setBranch<float>("OS2jet_fatjet1_massSD",        ana.tx.getBranchLazy<vector<float>>("Common_fatjet_msoftdrop")[0]);
                                          //subjet info
                                          ana.tx.setBranch<float>("OS2jet_fatjet1_subjet0_pt",     ana.tx.getBranchLazy<vector<float>>("Common_fatjet_subjet0_pt")[0]);
                                          ana.tx.setBranch<float>("OS2jet_fatjet1_subjet1_pt",     ana.tx.getBranchLazy<vector<float>>("Common_fatjet_subjet1_pt")[0]);
                                          ana.tx.setBranch<float>("OS2jet_fatjet1_subjet0_eta",    ana.tx.getBranchLazy<vector<float>>("Common_fatjet_subjet0_eta")[0]);
                                          ana.tx.setBranch<float>("OS2jet_fatjet1_subjet1_eta",    ana.tx.getBranchLazy<vector<float>>("Common_fatjet_subjet1_eta")[0]);
                                          ana.tx.setBranch<float>("OS2jet_fatjet1_subjet0_mass",   ana.tx.getBranchLazy<vector<float>>("Common_fatjet_subjet0_mass")[0]);
                                          ana.tx.setBranch<float>("OS2jet_fatjet1_subjet1_mass",   ana.tx.getBranchLazy<vector<float>>("Common_fatjet_subjet1_mass")[0]);
                                          //Njettines info
                                          ana.tx.setBranch<float>("OS2jet_fatjet1_tau1",          ana.tx.getBranchLazy<vector<float>>("Common_fatjet_tau1")[0]);
                                          ana.tx.setBranch<float>("OS2jet_fatjet1_tau2",          ana.tx.getBranchLazy<vector<float>>("Common_fatjet_tau2")[0]);
                                          ana.tx.setBranch<float>("OS2jet_fatjet1_tau3",          ana.tx.getBranchLazy<vector<float>>("Common_fatjet_tau3")[0]);
                                          ana.tx.setBranch<float>("OS2jet_fatjet1_tau21",         ana.tx.getBranchLazy<vector<float>>("Common_fatjet_tau21")[0]);
                                          ana.tx.setBranch<float>("OS2jet_fatjet1_tau32",         ana.tx.getBranchLazy<vector<float>>("Common_fatjet_tau32")[0]);
                                          ana.tx.setBranch<float>("OS2jet_fatjet1_toptag",        ana.tx.getBranchLazy<vector<float>>("Common_fatjet_deepMD_T")[0]);
                                          ana.tx.setBranch<float>("OS2jet_fatjet1_Wtag",          ana.tx.getBranchLazy<vector<float>>("Common_fatjet_deepMD_W")[0]);
                                          ana.tx.setBranch<float>("OS2jet_fatjet1_Ztag",          ana.tx.getBranchLazy<vector<float>>("Common_fatjet_deepMD_Z")[0]);
                                          ana.tx.setBranch<float>("OS2jet_fatjet1_Zbbtag",        ana.tx.getBranchLazy<vector<float>>("Common_fatjet_deepMD_bb")[0]);
                                          ana.tx.setBranch<float>("OS2jet_fatjet1_ll_DR",         RooUtil::Calc::DeltaR(ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[0],ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[0]+ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[1]));
                                          ana.tx.setBranch<float>("OS2jet_fatjet12_ll_DRmax",     RooUtil::Calc::DeltaR(ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[0],ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[0]+ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[1]));
                                          if(!nt.isData()){
                                            //gen matching v2:
                                            //1: match to bqq from t + W/Z
                                            //2: match to qq from W/Z
                                            //3: match to bq from t
                                            //4: match to bl from t
                                            //5: match to bb from ttbar
                                            //6: match to bq+ from ttbar
                                            //7: match to bl from ttbar
                                            int idb1 (-1), idb2 (-1), idq1(-1), idqp1(-1), idq2(-1), idqp2(-1), idl1(-1), idl2(-1);
                                            bool dRb1 (false), dRb2 (false), dRq1(false), dRqp1(false), dRq2(false), dRqp2(false), dRl1(false), dRl2(false);
                                            for(unsigned int ig = 0; ig<=ana.tx.getBranchLazy<vector<int>>("Common_gen_idx").size(); ++ig){
                                              bool tempDR = (RooUtil::Calc::DeltaR(ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[0],ana.tx.getBranchLazy<vector<LorentzVector>>("Common_gen_p4s")[ig])<0.8);
                                              //if (ana.tx.getBranchLazy<vector<float>>("Common_fatjet_msoftdrop")[0]>65.&&ana.tx.getBranchLazy<vector<float>>("Common_fatjet_msoftdrop")[0]<105.) cout << "fatjet eta/phi " << ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[0].Eta() << "/" << ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[0].Phi() << " genpart eta/phi " << ana.tx.getBranchLazy<vector<LorentzVector>>("Common_gen_p4s")[ig].Eta() << "/" << ana.tx.getBranchLazy<vector<LorentzVector>>("Common_gen_p4s")[ig].Phi() << " dR " <<  RooUtil::Calc::DeltaR(ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[0],ana.tx.getBranchLazy<vector<LorentzVector>>("Common_gen_p4s")[ig]) << " bool " << tempDR << " --- ID " << ana.tx.getBranchLazy<vector<int>>("Common_gen_pdgid")[ig] << " motherID " << ana.tx.getBranchLazy<vector<int>>("Common_gen_mother_id")[ig] << endl;
                                              if(abs(ana.tx.getBranchLazy<vector<int>>("Common_gen_pdgid")[ig])==5 && (ana.tx.getBranchLazy<vector<int>>("Common_gen_mother_id")[ig])==6) {
                                                idb1 = ig; dRb1 = tempDR;
                                              }
                                              if(abs(ana.tx.getBranchLazy<vector<int>>("Common_gen_pdgid")[ig])<=4 && (ana.tx.getBranchLazy<vector<int>>("Common_gen_mother_id")[ig])==24) {
                                                if(idq1<0) { idq1  = ig; dRq1  = tempDR; }
                                                else       { idqp1 = ig; dRqp1 = tempDR; }
                                              }
                                              if((abs(ana.tx.getBranchLazy<vector<int>>("Common_gen_pdgid")[ig])==11 || abs(ana.tx.getBranchLazy<vector<int>>("Common_gen_pdgid")[ig])==13 || abs(ana.tx.getBranchLazy<vector<int>>("Common_gen_pdgid")[ig])==15)  && (ana.tx.getBranchLazy<vector<int>>("Common_gen_mother_id")[ig])==24){
                                                idl1 = ig; dRl1 = tempDR;
                                              }
                                              if(abs(ana.tx.getBranchLazy<vector<int>>("Common_gen_pdgid")[ig])==5 && (ana.tx.getBranchLazy<vector<int>>("Common_gen_mother_id")[ig])==-6) {
                                                idb2 = ig; dRb2 = tempDR;
                                              }
                                              if(abs(ana.tx.getBranchLazy<vector<int>>("Common_gen_pdgid")[ig])<=4 && (ana.tx.getBranchLazy<vector<int>>("Common_gen_mother_id")[ig])==-24) {
                                                if(idq1<0) { idq2  = ig; dRq2  = tempDR; }
                                                else       { idqp2 = ig; dRqp2 = tempDR; }
                                              }
                                              if((abs(ana.tx.getBranchLazy<vector<int>>("Common_gen_pdgid")[ig])==11 || abs(ana.tx.getBranchLazy<vector<int>>("Common_gen_pdgid")[ig])==13 || abs(ana.tx.getBranchLazy<vector<int>>("Common_gen_pdgid")[ig])==15)  && (ana.tx.getBranchLazy<vector<int>>("Common_gen_mother_id")[ig])==-24) {
                                                idl2 = ig; dRl2 = tempDR;
                                              }
                                            }
                                            if((dRb1&&dRq1&&dRqp1)||(dRb2&&dRq2&&dRqp2))                      ana.tx.setBranch<int>  ("OS2jet_fatjet1_genmatchingv2", 1);
                                            else if((dRq1&&dRqp1)||(dRq2&&dRqp2))                             ana.tx.setBranch<int>  ("OS2jet_fatjet1_genmatchingv2", 2);
                                            else if((dRb1&&dRq1)||(dRb1&&dRqp1)||(dRb2&&dRq2)||(dRb2&&dRqp2)) ana.tx.setBranch<int>  ("OS2jet_fatjet1_genmatchingv2", 3);
                                            else if((dRb1&&dRl1)||(dRb1&&dRl2))                               ana.tx.setBranch<int>  ("OS2jet_fatjet1_genmatchingv2", 4);
                                            else if((dRb1&&dRb2))                                             ana.tx.setBranch<int>  ("OS2jet_fatjet1_genmatchingv2", 5);
                                            else if((dRb1&&dRq2)||(dRb1&&dRqp2)||(dRb2&&dRq1)||(dRb2&&dRqp1)) ana.tx.setBranch<int>  ("OS2jet_fatjet1_genmatchingv2", 6);
                                            else if((dRb1&&dRl2)||(dRb1&&dRl1))                               ana.tx.setBranch<int>  ("OS2jet_fatjet1_genmatchingv2", 7);
                                            else if((dRb1||dRb2))                                             ana.tx.setBranch<int>  ("OS2jet_fatjet1_genmatchingv2", 8);
                                            else if((dRq1||dRqp1)||(dRq2||dRqp2))                             ana.tx.setBranch<int>  ("OS2jet_fatjet1_genmatchingv2", 9);
                                            else if((dRl1||dRl2))                                             ana.tx.setBranch<int>  ("OS2jet_fatjet1_genmatchingv2",10);
                                            else                                                              ana.tx.setBranch<int>  ("OS2jet_fatjet1_genmatchingv2", 0);
                                            //if (ana.tx.getBranchLazy<vector<float>>("Common_fatjet_msoftdrop")[0]>65.&&ana.tx.getBranchLazy<vector<float>>("Common_fatjet_msoftdrop")[0]<105.) cout << "bool map " << dRb1 << " " << dRq1 << " " << dRqp1 << " " << dRl1 << "  " << dRb2 << " " << dRq2 << " " << dRqp2 << " " << dRl2 <<  " -- " <<  ana.tx.getBranch<int>("OS2jet_fatjet1_genmatchingv2")  << endl;
                                            for(unsigned int ig = 0; ig<=ana.tx.getBranchLazy<vector<int>>("Common_gen_idx").size(); ++ig){
                                              if(abs(ana.tx.getBranchLazy<vector<int>>("Common_gen_pdgid")[ig])!=23 && abs(ana.tx.getBranchLazy<vector<int>>("Common_gen_pdgid")[ig])!=24)
                                                continue;
                                              if(RooUtil::Calc::DeltaR(ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[0],ana.tx.getBranchLazy<vector<LorentzVector>>("Common_gen_p4s")[ig])<0.4){
                                                ana.tx.setBranch<int>  ("OS2jet_fatjet1_genmatching",  ig);
                                                break;
                                              }
                                            }

                                          //find minDR
                                          //calculate minDR for reco jet and a W hadronic decay jet //
                                          float dRmin(1000);
                                          int imatch(-1);
                                          //loop over gen jets//
                                          for(unsigned int ig = 0; ig<=ana.tx.getBranchLazy<vector<int>>("Common_gen_idx").size(); ++ig){
                                            if(abs(ana.tx.getBranchLazy<vector<int>>("Common_gen_pdgid")[ig])!=23 && abs(ana.tx.getBranchLazy<vector<int>>("Common_gen_pdgid")[ig])!=24)
                                              continue;
                                            float dR_W_Rec=	RooUtil::Calc::DeltaR(ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[0],ana.tx.getBranchLazy<vector<LorentzVector>>("Common_gen_p4s")[ig]);

                                            if (dR_W_Rec < dRmin) {
                                            		imatch = ig;
                                            		dRmin = dR_W_Rec;
                                            		//cout<< "imatch: "  << imatch << " and  dR_W_Rec: " << dR_W_Rec << endl;
                                            }
                                          }

                                          if(imatch>=0){
                                            //cout << "Min DR: " << dRmin <<endl;
                                            //cout << "====================== " << endl;
                                            ana.tx.setBranch<float>("OS2jet_fatjet1_Recojet_matchJet_DRmin", dRmin);

                                            for(unsigned int ig = 0; ig<=ana.tx.getBranchLazy<vector<int>>("Common_gen_idx").size(); ++ig){

                                               if(dRmin<0.4){   ana.tx.setBranch<int>  ("OS2jet_fatjet1_genmatchingv3",  imatch);
                                                 //cout << "Min DR: " << dRmin << "and ig: "<< ig << " and imatch " << imatch <<endl;
                                                 //cout << "====================== " << endl;
                                                 break;
                                               }
                                             }
                                          }//imatch



                                          }//is data
                                          //ana.tx.setBranch<bool >("OS2jet_fatjet1_massSDcut",     (ana.tx.getBranchLazy<vector<float>>("Common_fatjet_msoftdrop")[0]>65.&&ana.tx.getBranchLazy<vector<float>>("Common_fatjet_msoftdrop")[0]<105.));
                                          //ana.tx.setBranch<bool >("OS2jet_fatjet1_tau21cut",      ana.tx.getBranchLazy<vector<float>>("Common_fatjet_tau21")[0]<0.45);

                                        }//at least one fat jet

                                        //do >=2 fatjet
                                        if(nfat>=2){
                                          ana.tx.setBranch<float>("OS2jet_fatjet2_pt",            ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[1].Pt());
                                          ana.tx.setBranch<float>("OS2jet_fatjet2_mass",          ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[1].M());
                                          ana.tx.setBranch<float>("OS2jet_fatjet2_massSD",        ana.tx.getBranchLazy<vector<float>>("Common_fatjet_msoftdrop")[1]);
                                          //subjet info
                                          ana.tx.setBranch<float>("OS2jet_fatjet2_subjet0_pt",     ana.tx.getBranchLazy<vector<float>>("Common_fatjet_subjet0_pt")[1]);
                                          ana.tx.setBranch<float>("OS2jet_fatjet2_subjet1_pt",     ana.tx.getBranchLazy<vector<float>>("Common_fatjet_subjet1_pt")[1]);
                                          ana.tx.setBranch<float>("OS2jet_fatjet2_subjet0_eta",    ana.tx.getBranchLazy<vector<float>>("Common_fatjet_subjet0_eta")[1]);
                                          ana.tx.setBranch<float>("OS2jet_fatjet2_subjet1_eta",    ana.tx.getBranchLazy<vector<float>>("Common_fatjet_subjet1_eta")[1]);
                                          ana.tx.setBranch<float>("OS2jet_fatjet2_subjet0_mass",   ana.tx.getBranchLazy<vector<float>>("Common_fatjet_subjet0_mass")[1]);
                                          ana.tx.setBranch<float>("OS2jet_fatjet2_subjet1_mass",   ana.tx.getBranchLazy<vector<float>>("Common_fatjet_subjet1_mass")[1]);



                                          ana.tx.setBranch<float>("OS2jet_fatjet2_tau1",          ana.tx.getBranchLazy<vector<float>>("Common_fatjet_tau1")[1]);
                                          ana.tx.setBranch<float>("OS2jet_fatjet2_tau2",          ana.tx.getBranchLazy<vector<float>>("Common_fatjet_tau2")[1]);
                                          ana.tx.setBranch<float>("OS2jet_fatjet2_tau3",          ana.tx.getBranchLazy<vector<float>>("Common_fatjet_tau3")[1]);
                                          ana.tx.setBranch<float>("OS2jet_fatjet2_tau21",         ana.tx.getBranchLazy<vector<float>>("Common_fatjet_tau21")[1]);
                                          ana.tx.setBranch<float>("OS2jet_fatjet2_tau32",         ana.tx.getBranchLazy<vector<float>>("Common_fatjet_tau32")[1]);
                                          ana.tx.setBranch<float>("OS2jet_fatjet2_toptag",        ana.tx.getBranchLazy<vector<float>>("Common_fatjet_deepMD_T")[1]);
                                          ana.tx.setBranch<float>("OS2jet_fatjet2_Wtag",          ana.tx.getBranchLazy<vector<float>>("Common_fatjet_deepMD_W")[1]);
                                          ana.tx.setBranch<float>("OS2jet_fatjet2_Ztag",          ana.tx.getBranchLazy<vector<float>>("Common_fatjet_deepMD_Z")[1]);
                                          ana.tx.setBranch<float>("OS2jet_fatjet2_Zbbtag",        ana.tx.getBranchLazy<vector<float>>("Common_fatjet_deepMD_bb")[1]);
                                          ana.tx.setBranch<float>("OS2jet_fatjet2_ll_DR",         RooUtil::Calc::DeltaR(ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[1],ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[0]+ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[1]));
                                          ana.tx.setBranch<float>("OS2jet_fatjet12_ll_DRmax",     std::max(RooUtil::Calc::DeltaR(ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[1],ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[0]+ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[1]),RooUtil::Calc::DeltaR(ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[0],ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[0]+ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[1])));
                                          ana.tx.setBranch<float>("OS2jet_fatjet12_ptvectorsum",  (ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[0]+ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[1]).Pt());
                                          ana.tx.setBranch<float>("OS2jet_fatjet12_ptscalarsum",   ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[0].Pt()+ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[1].Pt());
                                          ana.tx.setBranch<float>("OS2jet_fatjet12_ptscalarprod",  ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[0].Pt()*ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[1].Pt());
                                          ana.tx.setBranch<float>("OS2jet_fatjet12_mass",         (ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[0]+ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[1]).M());
                                          ana.tx.setBranch<float>("OS2jet_fatjet12_masssum",       ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[0].M()+ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[1].M());
                                          ana.tx.setBranch<float>("OS2jet_fatjet12_massproduct",   ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[0].M()*ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[1].M());
                                          ana.tx.setBranch<float>("OS2jet_fatjet12_massSDsum",     ana.tx.getBranchLazy<vector<float>>("Common_fatjet_msoftdrop")[0]+ana.tx.getBranchLazy<vector<float>>("Common_fatjet_msoftdrop")[1]);
                                          ana.tx.setBranch<float>("OS2jet_fatjet12_massSDproduct", ana.tx.getBranchLazy<vector<float>>("Common_fatjet_msoftdrop")[0]*ana.tx.getBranchLazy<vector<float>>("Common_fatjet_msoftdrop")[1]);
                                          ana.tx.setBranch<float>("OS2jet_fatjet12_DR",                RooUtil::Calc::DeltaR(  ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[0],ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[1]));
                                          ana.tx.setBranch<float>("OS2jet_fatjet12_DPhi",          abs(RooUtil::Calc::DeltaPhi(ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[0],ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[1])));
                                          ana.tx.setBranch<float>("OS2jet_fatjet12_DEta",          abs(RooUtil::Calc::DeltaEta(ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[0],ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[1])));
                                          ana.tx.setBranch<float>("OS2jet_fatjet12_WtWtag",        ana.tx.getBranchLazy<vector<float>>("Common_fatjet_deepMD_W")[0]*ana.tx.getBranchLazy<vector<float>>("Common_fatjet_deepMD_W")[1]);
                                          ana.tx.setBranch<float>("OS2jet_fatjet12_WpWtag",        ana.tx.getBranchLazy<vector<float>>("Common_fatjet_deepMD_W")[0]+ana.tx.getBranchLazy<vector<float>>("Common_fatjet_deepMD_W")[1]);
                                          if(!nt.isData()){
                                            for(unsigned int ig = 0; ig<=ana.tx.getBranchLazy<vector<int>>("Common_gen_idx").size(); ++ig){
                                              if(abs(ana.tx.getBranchLazy<vector<int>>("Common_gen_pdgid")[ig])!=23 && abs(ana.tx.getBranchLazy<vector<int>>("Common_gen_pdgid")[ig])!=24)
                                                continue;
                                              if(RooUtil::Calc::DeltaR(ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[1],ana.tx.getBranchLazy<vector<LorentzVector>>("Common_gen_p4s")[ig])<0.4){
                                                ana.tx.setBranch<int>  ("OS2jet_fatjet2_genmatching",  ig);
                                                break;
                                              }
                                            }



                                          }//data
                                          /*ana.tx.setBranch<bool >("OS2jet_fatjet2_massSDcut",     (ana.tx.getBranchLazy<vector<float>>("Common_fatjet_msoftdrop")[1]>65.&&ana.tx.getBranchLazy<vector<float>>("Common_fatjet_msoftdrop")[1]<105.));
                                          ana.tx.setBranch<bool >("OS2jet_fatjet2_tau21cut",      ana.tx.getBranchLazy<vector<float>>("Common_fatjet_tau21")[1]<0.45);
                                          ana.tx.setBranch<bool >("OS2jet_fatjet12_ANDmassSDcut", ((ana.tx.getBranchLazy<vector<float>>("Common_fatjet_msoftdrop")[0]>65.&&ana.tx.getBranchLazy<vector<float>>("Common_fatjet_msoftdrop")[0]<105.)&&(ana.tx.getBranchLazy<vector<float>>("Common_fatjet_msoftdrop")[1]>65.&&ana.tx.getBranchLazy<vector<float>>("Common_fatjet_msoftdrop")[1]<105.)));
                                          ana.tx.setBranch<bool >("OS2jet_fatjet12_ANDtau21cut",  ((ana.tx.getBranchLazy<vector<float>>("Common_fatjet_tau21")[1]<0.45)&&(ana.tx.getBranchLazy<vector<float>>("Common_fatjet_tau21")[1]<0.45)));
                                          ana.tx.setBranch<bool >("OS2jet_fatjet12_ORmassSDcut",  ((ana.tx.getBranchLazy<vector<float>>("Common_fatjet_msoftdrop")[0]>65.&&ana.tx.getBranchLazy<vector<float>>("Common_fatjet_msoftdrop")[0]<105.)||(ana.tx.getBranchLazy<vector<float>>("Common_fatjet_msoftdrop")[1]>65.&&ana.tx.getBranchLazy<vector<float>>("Common_fatjet_msoftdrop")[1]<105.)));
                                          ana.tx.setBranch<bool >("OS2jet_fatjet12_ORtau21cut",   ((ana.tx.getBranchLazy<vector<float>>("Common_fatjet_tau21")[1]<0.45)||(ana.tx.getBranchLazy<vector<float>>("Common_fatjet_tau21")[1]<0.45)));*/
                                        }

                                        //do >=2 jets - do jets orthogonal to fatjets
                                        if(jetidx2>=0){
                                          ana.tx.setBranch<int>  ("OS2jet_jet1_idx",              jetidx1);
                                          ana.tx.setBranch<int>  ("OS2jet_jet2_idx",              jetidx2);
                                          ana.tx.setBranch<float>("OS2jet_jet1_pt",               ana.tx.getBranchLazy<vector<LorentzVector>>("Common_jet_p4")[jetidx1].Pt());
                                          ana.tx.setBranch<float>("OS2jet_jet2_pt",               ana.tx.getBranchLazy<vector<LorentzVector>>("Common_jet_p4")[jetidx2].Pt());
                                          ana.tx.setBranch<float>("OS2jet_jet12_ptvectorsum",    (ana.tx.getBranchLazy<vector<LorentzVector>>("Common_jet_p4")[jetidx1]+ana.tx.getBranchLazy<vector<LorentzVector>>("Common_jet_p4")[jetidx1]).Pt());
                                          ana.tx.setBranch<float>("OS2jet_jet12_ptscalarsum",     ana.tx.getBranchLazy<vector<LorentzVector>>("Common_jet_p4")[jetidx1].Pt()+ana.tx.getBranchLazy<vector<LorentzVector>>("Common_jet_p4")[jetidx2].Pt());
                                          ana.tx.setBranch<float>("OS2jet_jet12_ptscalarprod",    ana.tx.getBranchLazy<vector<LorentzVector>>("Common_jet_p4")[jetidx1].Pt()*ana.tx.getBranchLazy<vector<LorentzVector>>("Common_jet_p4")[jetidx2].Pt());
                                          ana.tx.setBranch<float>("OS2jet_jet12_mass",           (ana.tx.getBranchLazy<vector<LorentzVector>>("Common_jet_p4")[jetidx1]+ana.tx.getBranchLazy<vector<LorentzVector>>("Common_jet_p4")[jetidx2]).M());
                                          ana.tx.setBranch<float>("OS2jet_jet12_DR",                  RooUtil::Calc::DeltaR(  ana.tx.getBranchLazy<vector<LorentzVector>>("Common_jet_p4")[jetidx1],ana.tx.getBranchLazy<vector<LorentzVector>>("Common_jet_p4")[jetidx2]));
                                          ana.tx.setBranch<float>("OS2jet_jet12_DPhi",            abs(RooUtil::Calc::DeltaPhi(ana.tx.getBranchLazy<vector<LorentzVector>>("Common_jet_p4")[jetidx1],ana.tx.getBranchLazy<vector<LorentzVector>>("Common_jet_p4")[jetidx2])));
                                          ana.tx.setBranch<float>("OS2jet_jet12_DEta",            abs(RooUtil::Calc::DeltaEta(ana.tx.getBranchLazy<vector<LorentzVector>>("Common_jet_p4")[jetidx1],ana.tx.getBranchLazy<vector<LorentzVector>>("Common_jet_p4")[jetidx2])));
                                        }



                                   return true;
                                  }, UNITY);// trigger SF would go in here instead of UNITY, in principle also btag weight

    //
    ///////// 'matched selection'
    ana.cutflow.getCut("Cut_OS2Fatjet_Preselection");
    ana.cutflow.addCutToLastActiveCut("Cut_OS2Fatjet_Preselection_genmatched",               [&]() { return ana.tx.getBranch<int>("OS2jet_fatjet1_genmatching") >=0 /*&& ana.tx.getBranch<int>("OS2jet_Nbjetsv1")==0*/;}, UNITY);


    //adding cut flow plots to compare with matched plots

    // --------------------

    // ***      OF      ***
    // --------------------
    ana.cutflow.getCut("Cut_OS2Fatjet_Preselection");

    ana.cutflow.addCutToLastActiveCut("Cut_OS2Fatjet_OFPreselection",               [&]() { return ana.tx.getBranch<int>("OS2jet_SFcontent") ==0 /*&& ana.tx.getBranch<int>("OS2jet_Nbjetsv1")==0*/;}, UNITY);
    // __________________
    // *** OS2jet_OF2jets
    ana.cutflow.addCutToLastActiveCut("Cut_OS2Fatjet_OF2jets",                      [&]() { return ana.tx.getBranch<int>("OS2jet_Jetcontent")==0 && ana.tx.getBranch<int>("OS2jet_Njets")>=2;}, UNITY);
    // ____________________
    // *** OS2jet_OF1fatjet
    ana.cutflow.getCut("Cut_OS2Fatjet_OFPreselection");
    ana.cutflow.addCutToLastActiveCut("Cut_OS2Fatjet_OF1fatjet",                    [&]() { return ana.tx.getBranch<int>("OS2jet_Jetcontent")==1;}, UNITY);
=======
Begin_OS2Fatjet_Create_Branches();

// The framework may run over NanoAOD directly or, it may run over VVVTree.
// ana.run_VVVTree boolean determines this.

  if (ana.run_VVVTree)
     {
         Begin_OS2Fatjet_VVVTree();
     }
     else
     {
         Begin_OS2Fatjet_NanoAOD();
     }

    //
    ///////// 'matched selection'
    ana.cutflow.getCut("Cut_OS2Fatjet_Preselection");
    //ana.cutflow.addCutToLastActiveCut("Cut_OS2Fatjet_Preselection_genmatched",               [&]() { ana.tx.setBranch<bool>("Cut_OS2Fatjet_Preselection_genmatched", true); return ana.tx.getBranch<int>("OS2jet_fatjet1_genmatching") >=0 /*&& ana.tx.getBranch<int>("OS2jet_Nbjetsv1")==0*/;}, UNITY);
    //adding categories//


    // --------------------

    // ***      OF      ***
    // --------------------
    ana.cutflow.getCut("Cut_OS2Fatjet_Preselection");
    ana.cutflow.addCutToLastActiveCut("Cut_OS2Fatjet_OFPreselection",               [&]() { return ana.tx.getBranch<int>("OS2jet_SFcontent") ==0 && ana.tx.getBranch<int>("OS2jet_Nbjetsv1")==0;}, UNITY);


  /*  ana.cutflow.addCutToLastActiveCut("Cut_OS2Fatjet_OFPreselection",                [&](){ if (ana.tx.getBranch<int>("OS2jet_SFcontent") !=0) return false;
                                                                                                 ana.tx.setBranch<bool>("Cut_OS2Fatjet_OF2jets", true);
                                                                                                 return true;}, UNITY);*/
    // __________________
    // *** OS2jet_OF2jets
    ana.cutflow.addCutToLastActiveCut("Cut_OS2Fatjet_OF2jets",                      [&]() { ana.tx.setBranch<bool>("Cut_OS2Fatjet_OF2jets", true); return ana.tx.getBranch<int>("OS2jet_Jetcontent")==0 && ana.tx.getBranch<int>("OS2jet_Njets")>=2;}, UNITY);

     //ana.cutflow.addCutToLastActiveCut("Cut_OS2Fatjet_OF2jets",                       [&](){ if (ana.tx.getBranch<int>("OS2jet_Jetcontent")==0 && ana.tx.getBranch<int>("OS2jet_Njets")>=2;)
                                                                                                //ana.tx.setBranch<bool>("Cut_OS2Fatjet_OF2jets", true);
                                                                                                //return true;}, UNITY);

    // ____________________
    // *** OS2jet_OF1fatjet
    ana.cutflow.getCut("Cut_OS2Fatjet_OFPreselection");

   ana.cutflow.addCutToLastActiveCut("Cut_OS2Fatjet_OF1fatjet",                      [&]() { return ana.tx.getBranch<int>("OS2jet_Jetcontent")==1;}, UNITY);
  /*  ana.cutflow.addCutToLastActiveCut("Cut_OS2Fatjet_OF1fatjet",                    [&]() { if (ana.tx.getBranch<int>("OS2jet_Jetcontent")!=1) return false;
                                                                                                ana.tx.setBranch<bool>("Cut_OS2Fatjet_OF1fatjet", true);
                                                                                                return true; }, UNITY);*/
    ana.cutflow.addCutToLastActiveCut("Cut_OS2Fatjet_OF1fatjet_medWP",              [&]() { return ana.tx.getBranch<int>("OS2jet_Nfatjets_medium")==1;}, [&]() { return ana.tx.getBranch<float>("OS2jet_fatjetwgt_medium"); });
    ana.cutflow.addCutToLastActiveCut("Cut_OS2Fatjet_OF1fatjet_sel",                [&]() { return ana.tx.getBranch<bool>("OS2jet_fatjet1_tau21cut");}, UNITY);

    // --------------------
     // *** SF without Z ***
     // --------------------
     ana.cutflow.getCut("Cut_OS2Fatjet_Preselection");
     // _____________________
     // *** OS2jet_SFnoZ2jets
     ana.cutflow.addCutToLastActiveCut("Cut_OS2Fatjet_SFnoZPreselection",               [&]() { return ana.tx.getBranch<int>("OS2jet_SFcontent") ==1 && ana.tx.getBranch<int>("OS2jet_Nbjetsv1")==0;}, UNITY);
     ana.cutflow.addCutToLastActiveCut("Cut_OS2jet_SFnoZ2jets",                         [&]() { return ana.tx.getBranch<int>("OS2jet_Jetcontent")==0 && ana.tx.getBranch<int>("OS2jet_Njets")>=3;}, UNITY);


        //___________________
    // *** OS2jet_SFnoZ1fatjet
    ana.cutflow.getCut("Cut_OS2Fatjet_SFnoZPreselection");
    ana.cutflow.addCutToLastActiveCut("Cut_OS2Fatjet_SFnoZ1fatjet",                    [&]() { return ana.tx.getBranch<int>("OS2jet_Jetcontent")==1;}, UNITY);
    ana.cutflow.addCutToLastActiveCut("Cut_OS2Fatjet_SFnoZ1fatjet_medWP",              [&]() { return ana.tx.getBranch<int>("OS2jet_Nfatjets_medium")==1;}, [&]() { return ana.tx.getBranch<float>("OS2jet_fatjetwgt_medium"); });
    ana.cutflow.addCutToLastActiveCut("Cut_OS2Fatjet_SFnoZ1fatjet_sel",                [&]() { return ana.tx.getBranch<bool>("OS2jet_fatjet1_tau21cut");}, UNITY);

    // --------------------
    // ***   SF with Z  ***
    // --------------------
    ana.cutflow.getCut("Cut_OS2Fatjet_Preselection");
    ana.cutflow.addCutToLastActiveCut("Cut_OS2Fatjet_SFZPreselection",               [&]() { return ana.tx.getBranch<int>("OS2jet_SFcontent") ==2 && ana.tx.getBranch<int>("OS2jet_Nbjetsv1")==0;}, UNITY);
    // ___________________
    // *** OS2jet_SFZ2jets
    ana.cutflow.addCutToLastActiveCut("Cut_OS2Fatjet_SFZ2jets",                      [&]() { return ana.tx.getBranch<int>("OS2jet_Jetcontent")==0;}, UNITY);
    ana.cutflow.addCutToLastActiveCut("Cut_OS2Fatjet_SFZ2jets_sel",                  [&]() { return ana.tx.getBranch<float>("OS2jet_lep12_DR")<2.1 && ana.tx.getBranch<float>("OS2jet_jet12_DR")<1.57;}, UNITY);
    // ____________________
    // *** OS2jet_SFZ1fatjet
    ana.cutflow.getCut("Cut_OS2Fatjet_SFZPreselection");
    ana.cutflow.addCutToLastActiveCut("Cut_OS2Fatjet_SFZ1fatjet",                    [&]() { return ana.tx.getBranch<int>("OS2jet_Jetcontent")==1;}, UNITY);
    ana.cutflow.addCutToLastActiveCut("Cut_OS2Fatjet_SFZ1fatjet_medWP",              [&]() { return ana.tx.getBranch<int>("OS2jet_Nfatjets_medium")==1;}, [&]() { return ana.tx.getBranch<float>("OS2jet_fatjetwgt_medium"); });
    ana.cutflow.addCutToLastActiveCut("Cut_OS2Fatjet_SFZ1fatjet_sel",                [&]() { return ana.tx.getBranch<bool>("OS2jet_fatjet1_tau21cut");}, UNITY);


    //DY CR//
    //DY CR
    ana.cutflow.getCut("Cut_OS2Fatjet_SFZPreselection");
    ana.cutflow.addCutToLastActiveCut("Cut_OS2Fatjet_DYCRPreselection",               [&]() { return ana.tx.getBranch<int>("OS2jet_Njets")==0;}, UNITY);


    //ana.cutflow.addCutToLastActiveCut("Cut_OS2jet_DYCR2jets",                      [&]() { return ana.tx.getBranch<int>("OS2jet_Jetcontent")==0;}, UNITY);
    // ____________________//
    //*** OS2jet_DYCR1fatjet
    ana.cutflow.getCut("Cut_OS2Fatjet_DYCRPreselection");
    ana.cutflow.addCutToLastActiveCut("Cut_OS2Fatjet_DYCR1fatjet",                   [&]() { return ana.tx.getBranch<int>("OS2jet_Jetcontent")==1;}, UNITY);
    //DY CR msd sideban
    ana.cutflow.addCutToLastActiveCut("Cut_OS2Fatjet_DYCR1fatjet_mSDwind",           [&]() { return ana.tx.getBranch<float>("OS2jet_fatjet1_massSD")>40 && ana.tx.getBranch<float>("OS2jet_fatjet1_massSD")<60; }, UNITY);

    //ana.cutflow.addCutToLastActiveCut("Cut_OS2Fatjet_DYCR1fatjet_medWP",             [&]() { return ana.tx.getBranch<int>("OS2jet_Nfatjets_medium")==1;}, [&]() { return ana.tx.getBranch<float>("OS2jet_fatjetwgt_medium"); });
    ana.cutflow.addCutToLastActiveCut("Cut_OS2Fatjet_DYCR1fatjet_sel",               [&]() { return ana.tx.getBranch<bool>("OS2jet_fatjet1_tau21cut");}, UNITY);


    //add a ttbar CR//

    //top CR
    ana.cutflow.getCut("Cut_OS2Fatjet_Preselection");
    ana.cutflow.addCutToLastActiveCut("Cut_OS2Fatjet_topCRPreselection",               [&]() { return ana.tx.getBranch<int>("OS2jet_Nbjetsmedv1")>=1;},  [&]() { return ana.tx.getBranchLazy<float>("Common_btagWeight_DeepCSVB");});
    ana.cutflow.addCutToLastActiveCut("Cut_OS2Fatjet_topCR2jets",                      [&]() { return ana.tx.getBranch<int>("OS2jet_Jetcontent")==0;}, UNITY);
    // ____________________
    // *** OS2jet_topCR1fatjet
    ana.cutflow.getCut("Cut_OS2Fatjet_topCRPreselection");
    ana.cutflow.addCutToLastActiveCut("Cut_OS2Fatjet_topCR1fatjet",                    [&]() { return ana.tx.getBranch<int>("OS2jet_Jetcontent")==1;}, UNITY);
    ana.cutflow.addCutToLastActiveCut("Cut_OS2Fatjet_topCR1fatjet_medWP",              [&]() { return ana.tx.getBranch<int>("OS2jet_Nfatjets_medium")==1;}, [&]() { return ana.tx.getBranch<float>("OS2jet_fatjetwgt_medium"); });
    ana.cutflow.addCutToLastActiveCut("Cut_OS2Fatjet_topCR1fatjet_sel",                [&]() { return ana.tx.getBranch<bool>("OS2jet_fatjet1_tau21cut");}, UNITY);

>>>>>>> common_ntup_cache



    // Create histograms used in this category.
    // Please follow the convention of h_<category>_<varname> structure.
    // N.B. Using nbins of size 180 or 360 can provide flexibility as it can be rebinned easily, as 180, 360 are highly composite numbers.


    ana.histograms.addHistogram("NFatjets"     ,  10,   0,    10, [&]() { return      ana.tx.getBranch<int>  ("OS2jet_Nfatjets"                   )   ; } );
    ana.histograms.addHistogram("Fat1_mass"    , 300,   0,   300, [&]() { return      ana.tx.getBranch<float>("OS2jet_fatjet1_mass"            )   ; } );
    ana.histograms.addHistogram("Fat1_massSD"  , 300,   0,   300, [&]() { return      ana.tx.getBranch<float>("OS2jet_fatjet1_massSD"          )   ; } );

    ana.histograms.addHistogram("Fat1_pt"      , 300, 100,  2000, [&]() { return      ana.tx.getBranch<float>("OS2jet_fatjet1_pt"              )   ; } );
    ana.histograms.addHistogram("ST"           , 300,  0,  2500, [&]() { return      ana.tx.getBranch<float>("OS2jet_ST"                       )   ; } );
    ana.histograms.addHistogram("Fat1_massSD"  , 300,   0,   300, [&]() { return      ana.tx.getBranch<float>("OS2jet_fatjet1_massSD"          )   ; } );
    ana.histograms.addHistogram("EvtMT"        , 450,   0,  4500, [&]() { return      ana.tx.getBranch<float>("OS2jet_MTfatjetsleptonsMET"     )   ; } );

    ana.histograms.addHistogram("EvtMassNoMET" , 450,   0,  4500, [&]() { return      ana.tx.getBranch<float>("OS2jet_Mfatjetsleptons"         )   ; } );
    ana.histograms.addHistogram("EvtMassWithMET", 450,   0,  4500, [&]() { return      ana.tx.getBranch<float>("OS2jet_MfatjetsleptonsMET"     )   ; } );
    ana.histograms.addHistogram("EvtMassWith2jets", 450,   0,  4500, [&]() { return      ana.tx.getBranch<float>("OS2jet_Mfatjetleptonsjets"     )   ; } );

    ana.histograms.addHistogram("genVVV_pt"    , 300,   0,  1500, [&]() { return      ana.tx.getBranch<float>("OS2jet_genpTVVV"                )   ; } );
    ana.histograms.addHistogram("genVVV_M"     , 450,   0,  4500, [&]() { return      ana.tx.getBranch<float>("OS2jet_genMVVV"                 )   ; } );
    ana.histograms.addHistogram("MET"          , 300,   0,  1500, [&]() { return      ana.tx.getBranch<float>("OS2jet_MET"                     )   ; } );
  /*  ana.histograms.addHistogram("NFatjets"     ,  10,   0,    10, [&]() { return      ana.tx.getBranch<int>  ("OS2jet_Nfatjets"                   )   ; } );
    ana.histograms.addHistogram("Fat1_mass"    , 300,   0,   300, [&]() { return      ana.tx.getBranch<float>("OS2jet_fatjet1_mass"            )   ; } );
    ana.histograms.addHistogram("Fat1_massSD"  , 300,   0,   300, [&]() { return      ana.tx.getBranch<float>("OS2jet_fatjet1_massSD"          )   ; } );
*/


    RooUtil::Histograms hists_OSFat2jet;



// Now book cutflow histogram (could be commented out if user does not want.)
//     // N.B. Cutflow histogramming can be CPU consuming.
         ana.cutflow.bookCutflows();
//

// Book histograms to cuts that user wants for this category.
    ana.cutflow.bookHistogramsForCutAndBelow(ana.histograms, "Cut_OS2Fatjet_Preselection");
    //ana.cutflow.bookHistogramsForCutAndBelow(ana.histograms, "CommonCut");


  }



  void Begin_OS2Fatjet_NanoAOD()
  {
    // Define selections
    // CommonCut will contain selections that should be common to all categories, starting from this cut, add cuts for this category of the analysis.
      ana.cutflow.getCut("CommonCut");

      ana.cutflow.addCutToLastActiveCut("Cut_OS2Fatjet_OSleps",
                                       [&]()
                                       {
                                         //2 leptons
                                        if (not (ana.tx.getBranchLazy<vector<int> >("Common_lep_pdgid").size() == 2))
                                          return false;
                                        if(ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[0].Pt()<25)
                                          return false;
                                        if(ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[1].Pt()<15)
                                          return false;
                                        //test for OS
                                        if(ana.tx.getBranchLazy<vector<int> >("Common_lep_pdgid")[0]*ana.tx.getBranchLazy<vector<int> >("Common_lep_pdgid")[1]>0)
                                          return false;

                                        ana.tx.setBranch<bool>("Cut_OS2Fatjet_OSleps", true);
                                        return true;

                                        }, [&]() { return ana.tx.getBranchLazy<float>("Common_event_lepSF"); });
                                        // }, UNITY );

      //
      ana.cutflow.addCutToLastActiveCut("Cut_OS2Fatjet_Trigger",
                                          [&]()
                                          {
                                            // test trigger bits
                                            //if (nt.isData()){// run only on data
                                            if (true){// run on data and simulation
                                              if(ana.tx.getBranch<int>("Common_isData") && !(ana.tx.getBranchLazy<bool>("Common_pass_duplicate_removal_mm_em_ee"))) return false;
                                              if(abs(ana.tx.getBranchLazy<vector<int> >("Common_lep_pdgid")[0]*ana.tx.getBranchLazy<vector<int> >("Common_lep_pdgid")[1])==121){
                                                if(!ana.tx.getBranchLazy<bool>("Common_HLT_DoubleEl")) return false;
                                              }
                                              if(abs(ana.tx.getBranchLazy<vector<int> >("Common_lep_pdgid")[0]*ana.tx.getBranchLazy<vector<int> >("Common_lep_pdgid")[1])==169){
                                                if(!ana.tx.getBranchLazy<bool>("Common_HLT_DoubleMu")) return false;
                                              }
                                              if(abs(ana.tx.getBranchLazy<vector<int> >("Common_lep_pdgid")[0]*ana.tx.getBranchLazy<vector<int> >("Common_lep_pdgid")[1])==143){
                                                if(!ana.tx.getBranchLazy<bool>("Common_HLT_MuEG")) return false;
                                              }
                                            }
                                            return true;
                                          }, UNITY);



     ana.cutflow.addCutToLastActiveCut("Cut_OS2Fatjet_Preselection",
                                          [&]()
                                          {
                                            bool isSFOSZ = false;
                                            bool isSFOS = false;
                                            //cout << ana.tx.getBranchLazy<vector<int>>("Common_ana.tx.getBranchLazy<vector<int> >("Common_lep_pdgid")")[0] << " " << ana.tx.getBranchLazy<vector<int>>("Common_ana.tx.getBranchLazy<vector<int> >("Common_lep_pdgid")")[1] << endl;
                                            //test for SFOSs
                                            if(ana.tx.getBranchLazy<vector<int> >("Common_lep_pdgid")[0]==(-ana.tx.getBranchLazy<vector<int> >("Common_lep_pdgid")[1])){
                                              isSFOS = true;
                                              //test if OS is a Z
                                              if( abs((ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[0]+ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[1]).M()-91.1876)<20.)
                                                isSFOSZ = true;
                                            }
                                            //if (nbjets>0)
                                            //  return false;//XXX undo this - implement a selection with >=1 b
                                            if(     isSFOSZ==true )  ana.tx.setBranch<int>("OS2jet_SFcontent"  ,2);
                                            else if(isSFOS ==true )  ana.tx.setBranch<int>("OS2jet_SFcontent"  ,1);
                                            else                     ana.tx.setBranch<int>("OS2jet_SFcontent"  ,0);



                                            //make some default setting - overwrite later
                                            ana.tx.setBranch<bool>("Cut_OS2Fatjet_Preselection", false);
                                            ana.tx.setBranch<float>("OS2jet_ST",                 -999.);
                                            ana.tx.setBranch<float>("OS2jet_lep1_pt",               ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[0].Pt());
                                            ana.tx.setBranch<float>("OS2jet_lep2_pt",               ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[1].Pt());
                                            ana.tx.setBranch<float>("OS2jet_lep12_ptvectorsum",    (ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[0]+ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[1]).Pt());
                                            ana.tx.setBranch<float>("OS2jet_lep12_ptscalarsum",     ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[0].Pt()+ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[1].Pt());
                                            ana.tx.setBranch<float>("OS2jet_lep12_ptscalarprod",    ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[0].Pt()*ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[1].Pt());
                                            ana.tx.setBranch<float>("OS2jet_lep12_mass",           (ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[0]+ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[1]).M());
                                            ana.tx.setBranch<float>("OS2jet_lep12_DR",              RooUtil::Calc::DeltaR(ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[0],ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[1]));
                                            ana.tx.setBranch<float>("OS2jet_lep12_DPhi",            abs(RooUtil::Calc::DeltaPhi(ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[0],ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[1])));
                                            ana.tx.setBranch<float>("OS2jet_lep12_Deta",            abs(RooUtil::Calc::DeltaEta(ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[0],ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[1])));
                                            ana.tx.setBranch<int>  ("OS2jet_Jetcontent",            -999);
                                            ana.tx.setBranch<int>  ("OS2jet_Nfatjets",              -999);
                                            ana.tx.setBranch<int>  ("OS2jet_Njets",                 -999);
                                            ana.tx.setBranch<int>  ("OS2jet_Nbjetsv1",              ana.tx.getBranchLazy<int>("Common_nb_loose"));
                                            ana.tx.setBranch<int>  ("OS2jet_Nbjetsmedv1",           ana.tx.getBranchLazy<int>("Common_nb_medium"));
                                            ana.tx.setBranch<int>  ("OS2jet_Nbjetsv2",              -999);
                                            //ana.tx.setBranch<int>  ("OS2jet_NfatjetsMinusNjets",    -999);
                                            ana.tx.setBranch<float>("OS2jet_fatjet_pt",                 -999);
                                            ana.tx.setBranch<float>("OS2jet_MET",                   ana.tx.getBranchLazy<LorentzVector>("Common_met_p4").Pt());
                                            ana.tx.setBranch<float>("OS2jet_MET_fatjet1_DPhi",      -999.);
                                            ana.tx.setBranch<float>("OS2jet_MET_ll_DPhi",           abs(RooUtil::Calc::DeltaPhi(ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[0]+ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[1],ana.tx.getBranchLazy<LorentzVector>("Common_met_p4"))));
                                            ana.tx.setBranch<float>("OS2jet_fatjet1_pt",            -999.);
                                            ana.tx.setBranch<float>("OS2jet_fatjet2_pt",            -999.);
                                            ana.tx.setBranch<float>("OS2jet_fatjet1_mass",          -999.);
                                            ana.tx.setBranch<float>("OS2jet_fatjet2_mass",          -999.);
                                            ana.tx.setBranch<float>("OS2jet_fatjet1_massSD",        -999.);
                                            ana.tx.setBranch<float>("OS2jet_fatjet2_massSD",        -999.);
                                            ana.tx.setBranch<float>("OS2jet_fatjet1_subjet0_pt",     -999.);
                                            ana.tx.setBranch<float>("OS2jet_fatjet1_subjet1_pt",     -999.);
                                            ana.tx.setBranch<float>("OS2jet_fatjet1_subjet0_eta",    -999.);
                                            ana.tx.setBranch<float>("OS2jet_fatjet1_subjet1_eta",    -999.);
                                            ana.tx.setBranch<float>("OS2jet_fatjet1_subjet0_mass",   -999.);
                                            ana.tx.setBranch<float>("OS2jet_fatjet1_subjet1_mass",   -999.);
                                            ana.tx.setBranch<float>("OS2jet_fatjet2_subjet0_pt",     -999.);
                                            ana.tx.setBranch<float>("OS2jet_fatjet2_subjet1_pt",     -999.);
                                            ana.tx.setBranch<float>("OS2jet_fatjet2_subjet0_eta",    -999.);
                                            ana.tx.setBranch<float>("OS2jet_fatjet2_subjet1_eta",   -999.);
                                            ana.tx.setBranch<float>("OS2jet_fatjet2_subjet0_mass",   -999.);
                                            ana.tx.setBranch<float>("OS2jet_fatjet2_subjet1_mass",   -999.);
                                            ana.tx.setBranch<float>("OS2jet_fatjet1_tau21",         -999.);
                                            ana.tx.setBranch<float>("OS2jet_fatjet2_tau21",         -999.);
                                            ana.tx.setBranch<float>("OS2jet_fatjet1_tau32",         -999.);
                                            ana.tx.setBranch<float>("OS2jet_fatjet2_tau32",         -999.);
                                            ana.tx.setBranch<float>("OS2jet_fatjet1_ll_DR",         -999.);
                                            ana.tx.setBranch<float>("OS2jet_fatjet2_ll_DR",         -999.);
                                            ana.tx.setBranch<float>("OS2jet_fatjet12_ll_DRmax",     -999.);
                                            ana.tx.setBranch<float>("OS2jet_fatjet12_ptvectorsum",  -999.);
                                            ana.tx.setBranch<float>("OS2jet_fatjet12_ptscalarsum",  -999.);
                                            ana.tx.setBranch<float>("OS2jet_fatjet12_ptscalarprod", -999.);
                                            ana.tx.setBranch<float>("OS2jet_fatjet12_mass",         -999.);
                                            ana.tx.setBranch<float>("OS2jet_fatjet12_masssum",      -999.);
                                            ana.tx.setBranch<float>("OS2jet_fatjet12_massproduct",  -999.);
                                            ana.tx.setBranch<float>("OS2jet_fatjet12_massSDsum",    -999.);
                                            ana.tx.setBranch<float>("OS2jet_fatjet12_massSDproduct",-999.);
                                            ana.tx.setBranch<float>("OS2jet_fatjet12_DR",           -999.);
                                            ana.tx.setBranch<float>("OS2jet_fatjet12_DPhi",         -999.);
                                            ana.tx.setBranch<float>("OS2jet_fatjet12_DEta",         -999.);
                                            ana.tx.setBranch<float>("OS2jet_fatjet1_toptag",        -999.);
                                            ana.tx.setBranch<float>("OS2jet_fatjet2_toptag",        -999.);
                                            ana.tx.setBranch<float>("OS2jet_fatjet1_Wtag",          -999.);
                                            ana.tx.setBranch<float>("OS2jet_fatjet2_Wtag",          -999.);
                                            ana.tx.setBranch<float>("OS2jet_fatjet1_Ztag",          -999.);
                                            ana.tx.setBranch<float>("OS2jet_fatjet2_Ztag",          -999.);
                                            ana.tx.setBranch<float>("OS2jet_fatjet1_Zbbtag",        -999.);
                                            ana.tx.setBranch<float>("OS2jet_fatjet2_Zbbtag",        -999.);
                                            ana.tx.setBranch<float>("OS2jet_fatjet12_WtWtag",       -999.);
                                            ana.tx.setBranch<float>("OS2jet_fatjet12_WpWtag",       -999.);
                                            ana.tx.setBranch<int>  ("OS2jet_jet1_idx",              -999.);
                                            ana.tx.setBranch<int>  ("OS2jet_jet2_idx",              -999.);
                                            ana.tx.setBranch<float>("OS2jet_jet1_pt",               -999.);
                                            ana.tx.setBranch<float>("OS2jet_jet2_pt",               -999.);
                                            ana.tx.setBranch<float>("OS2jet_jet12_ptvectorsum",     -999.);
                                            ana.tx.setBranch<float>("OS2jet_jet12_ptscalarsum",     -999.);
                                            ana.tx.setBranch<float>("OS2jet_jet12_ptscalarprod",    -999.);
                                            ana.tx.setBranch<float>("OS2jet_jet12_mass",            -999.);
                                            ana.tx.setBranch<float>("OS2jet_jet12_DR",              -999.);
                                            ana.tx.setBranch<float>("OS2jet_jet12_DPhi",            -999.);
                                            ana.tx.setBranch<float>("OS2jet_jet12_DEta",            -999.);
                                            ana.tx.setBranch<float>("OS2jet_fatjet1_Recojet_matchJet_DRmin",            -999.);
                                            //ana.tx.setBranch<float>("OS2jet_fatjet2_Recojet_matchJet_DRmin",            -999.);
                                            ana.tx.setBranch<int>  ("OS2jet_fatjet1_genmatching",   -999.);
                                            ana.tx.setBranch<int>  ("OS2jet_fatjet2_genmatching",   -999.);
                                            ana.tx.setBranch<int>  ("OS2jet_fatjet1_genmatchingv2", -999.);
                                            ana.tx.setBranch<int>  ("OS2jet_fatjet2_genmatchingv2", -999.);
                                            ana.tx.setBranch<int>  ("OS2jet_fatjet1_genmatchingv3", -999.);
                                            //ana.tx.setBranch<int>  ("OS2jet_fatjet2_genmatchingv3", -999.);
                                            ana.tx.setBranch<float>("OS2jet_genMVVV",               -999.);
                                            ana.tx.setBranch<float>("OS2jet_genpTVVV",              -999.);
                                            ana.tx.setBranch<float>("OS2jet_Mfatjetsleptons",       -999.);
                                            ana.tx.setBranch<float>("OS2jet_MfatjetsleptonsMET",    -999.);
                                            ana.tx.setBranch<float>("OS2jet_MTfatjetsleptonsMET",   -999.);
                                            ana.tx.setBranch<float>("OS2jet_Mfatjetleptonsjets",   -999.);
                                            ana.tx.setBranch<bool >("OS2jet_fatjet1_tau21cut",      false);
                                            ana.tx.setBranch<bool >("OS2jet_fatjet1_massSDcut",     false);
                                            /*ana.tx.setBranch<bool >("OS2jet_fatjet2_massSDcut",     false);
                                            ana.tx.setBranch<bool >("OS2jet_fatjet2_tau21cut",      false);
                                            ana.tx.setBranch<bool >("OS2jet_fatjet12_ANDmassSDcut", false);
                                            ana.tx.setBranch<bool >("OS2jet_fatjet12_ANDtau21cut",  false);
                                            ana.tx.setBranch<bool >("OS2jet_fatjet12_ORmassSDcut",  false);
                                            ana.tx.setBranch<bool >("OS2jet_fatjet12_ORtau21cut",   false);*/
                                            ana.tx.setBranch<int>  ("OS2jet_Nfatjets_vloose",       -999.);
                                            ana.tx.setBranch<int>  ("OS2jet_Nfatjets_loose",        -999.);
                                            ana.tx.setBranch<int>  ("OS2jet_Nfatjets_medium",       -999.);
                                            ana.tx.setBranch<float>("OS2jet_fatjetwgt_vloose",      -999.);
                                            ana.tx.setBranch<float>("OS2jet_fatjetwgt_loose",       -999.);
                                            ana.tx.setBranch<float>("OS2jet_fatjetwgt_medium",      -999.);

                                            //vvv decays//
                                            if(ana.tx.getBranchLazy<vector<LorentzVector>>("Common_gen_vvvdecay_p4s").size()>=6){
                                              LorentzVector genVVV = LorentzVector(0.,0.,0.,0.);
                                              for(unsigned int gi = 0; gi < ana.tx.getBranchLazy<vector<LorentzVector>>("Common_gen_vvvdecay_p4s").size(); ++gi){
                                                genVVV +=  ana.tx.getBranchLazy<vector<LorentzVector>>("Common_gen_vvvdecay_p4s")[gi];
                                              }
                                              ana.tx.setBranch<float>("OS2jet_genMVVV",  genVVV.M() );
                                              ana.tx.setBranch<float>("OS2jet_genpTVVV", genVVV.Pt());
                                            }


                                            //mass variables
                                            LorentzVector LVfjl = LorentzVector(0.,0.,0.,0.); //lorentz vector fatjet-lepton
                                            for(unsigned int ifj = 0; ifj<ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4").size(); ++ifj){
                                              LVfjl += ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[ifj];
                                            }
                                            for(unsigned int il = 0; il<ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4").size(); ++il){
                                              LVfjl += ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[il];
                                            }
                                            ana.tx.setBranch<float>("OS2jet_Mfatjetsleptons", LVfjl.M());
                                            ana.tx.setBranch<float>("OS2jet_MTfatjetsleptonsMET",RooUtil::Calc::mT(LVfjl,ana.tx.getBranchLazy<LorentzVector>("Common_met_p4")));

                                            LorentzVector LVfjlm = LorentzVector(0.,0.,0.,0.); //lorentz vector fatjet-lepton-met
                                            LVfjlm = ana.tx.getBranchLazy<LorentzVector>("Common_met_p4");
                                            for(unsigned int ifj = 0; ifj<ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4").size(); ++ifj){
                                              LVfjlm += ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[ifj];
                                            }
                                            for(unsigned int il = 0; il<ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4").size(); ++il){
                                              LVfjlm += ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[il];
                                            }


                                            ana.tx.setBranch<float>("OS2jet_MfatjetsleptonsMET", LVfjlm.M());




     													               //now fill branches already here

                                            //int nfat= ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4").size();
                                            //cout << "nfat: " << nfat <<endl;

                                            int nnonfat = 0; int nbnonfat = 0; int nfat=0;
                                            float ht=0;

                                            for(unsigned int fti = 0; fti<ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4").size(); ++fti){
                                              if(ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[fti].Pt()<200) return false;
                                              ana.tx.setBranch<float>("OS2jet_fatjet_pt",               ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[fti].Pt());
                                              //cout << "fatJet PT" << ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[fti].Pt() <<endl;
                                              if(ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[fti].Pt()<200) continue;
                                              ++nfat;
                                              ht+= ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[fti].Pt();

                                            }


                                            float evtwgtfjvl = 1; int nfjvl = 0;
                                            float evtwgtfjl  = 1; int nfjl  = 0;
                                            float evtwgtfjm  = 1; int nfjm  = 0;

                                          for(int ifj = 0; ifj<nfat; ++ifj){
                                            if(ana.tx.getBranchLazy<vector<int>>("Common_fatjet_WP")[ifj]>=0) { ++nfjvl; evtwgtfjvl *= ana.tx.getBranchLazy<vector<float>>("Common_fatjet_SFVLoose")[ifj]; }
                                            if(ana.tx.getBranchLazy<vector<int>>("Common_fatjet_WP")[ifj]>=1) {  ++nfjl; evtwgtfjl  *= ana.tx.getBranchLazy<vector<float>>("Common_fatjet_SFLoose" )[ifj]; }
                                            if(ana.tx.getBranchLazy<vector<int>>("Common_fatjet_WP")[ifj]>=2) {  ++nfjm; evtwgtfjm  *= ana.tx.getBranchLazy<vector<float>>("Common_fatjet_SFMedium")[ifj]; }
                                          }

                                        ana.tx.setBranch<int>  ("OS2jet_Nfatjets_vloose",       nfjvl);
                                        ana.tx.setBranch<int>  ("OS2jet_Nfatjets_loose",        nfjl );
                                        ana.tx.setBranch<int>  ("OS2jet_Nfatjets_medium",       nfjm );
                                        ana.tx.setBranch<float>("OS2jet_fatjetwgt_vloose",      evtwgtfjvl);
                                        ana.tx.setBranch<float>("OS2jet_fatjetwgt_loose",       evtwgtfjl );
                                        ana.tx.setBranch<float>("OS2jet_fatjetwgt_medium",      evtwgtfjm );


                                            //start with fat jets
                                            //int fatidx1 = -1; int fatidx2 = -1; - to be replaced XX
                                            //do normal jets
                                            int jetidx1 = -1; int jetidx2 = -1;
                                            float ht_ak4=0;
                                              for(unsigned int ti = 0; ti<ana.tx.getBranchLazy<vector<bool>>("Common_jet_p4").size(); ++ti){
                                          //  for(unsigned int ti = 0; ti<ana.tx.getBranchLazy<vector<bool>>("Common_jet_passBloose").size(); ++ti){ //keep also b jets
                                              if(ana.tx.getBranchLazy<vector<int>>("Common_jet_overlapfatjet")[ti]>=0) continue;
                                              ++nnonfat;

                                              ht_ak4+= ana.tx.getBranchLazy<vector<LorentzVector>>("Common_jet_p4")[ti].Pt();
                                              if(ana.tx.getBranchLazy<vector<bool>>("Common_jet_passBloose")[ti]) ++nbnonfat;
                                              if(jetidx1<0) { jetidx1 = ti; continue; }
                                              if(jetidx2<0) { jetidx2 = ti; continue; }
                                            }
                                            ana.tx.setBranch<int>  ("OS2jet_Nfatjets",              nfat);
                                            ana.tx.setBranch<int>  ("OS2jet_Njets",                 nnonfat);
                                            ana.tx.setBranch<int>  ("OS2jet_Nbjetsv2",              nbnonfat);
                                            //ana.tx.setBranch<int>  ("OS2jet_NfatjetsMinusNjets",    nfat-nnonfat);

                                            LorentzVector LVfjl2j = LorentzVector(0.,0.,0.,0.); //lorentz vector fatjet-lepton-2ak4 non-bjets


                                            for(unsigned int il = 0; il<ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4").size(); ++il){
                                              LVfjl2j += ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[il];
                                            }

                                             //find two highest pt ak4 no b tagged jets:
                                             int counter =0;
                                             int idx1=-1;
                                             int idx2=-1;

                                            for(unsigned int ij = 0; ij<ana.tx.getBranchLazy<vector<bool>>("Common_jet_p4").size(); ++ij){
                                              cout << "pass 0" << endl;
                                              if(ana.tx.getBranchLazy<vector<int>>("Common_jet_overlapfatjet")[ij]>=0) continue;
                                              if(ana.tx.getBranchLazy<vector<bool>>("Common_jet_passBloose")[ij]) continue;
                                               ++counter;
                                               if (counter==1) idx1=ij;
                                               if  (counter==2) idx2 =ij;

                                            }

                                            if( idx1>0 && idx2>0 && nfat>0){

                                              LVfjl2j = ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[0]; //only one fat jet
                                              LVfjl2j += ana.tx.getBranchLazy<vector<LorentzVector>>("Common_jet_p4")[idx1];
                                              LVfjl2j += ana.tx.getBranchLazy<vector<LorentzVector>>("Common_jet_p4")[idx2];
                                              ana.tx.setBranch<float>("OS2jet_Mfatjetleptonsjets", LVfjl2j.M());
                                              cout <<"true"<< endl;
                                            }



                                            float st = ht + ht_ak4 + ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[0].Pt() + ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[1].Pt();
                                            ana.tx.setBranch<float>("OS2jet_ST",   st);

                                            //cout << "st = " << st << " GeV" << endl;


                                            if(nfat>=2)     ana.tx.setBranch<int>("OS2jet_Jetcontent" ,2);
                                            else if(nfat==1)     ana.tx.setBranch<int>("OS2jet_Jetcontent" ,1);
                                            else if(nnonfat>=2)  ana.tx.setBranch<int>("OS2jet_Jetcontent" ,0);
                                            //do >=1fatjet
                                            if(nfat>=1){
                                              //if (ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[0].Pt()<200) cout << "fat0 jet Pt "<< ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[0].Pt()<<endl;
                                              ana.tx.setBranch<float>("OS2jet_MET_fatjet1_DPhi",      abs(RooUtil::Calc::DeltaPhi(ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[0],ana.tx.getBranchLazy<LorentzVector>("Common_met_p4"))));
                                              ana.tx.setBranch<float>("OS2jet_fatjet1_pt",            ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[0].Pt());
                                              ana.tx.setBranch<float>("OS2jet_fatjet1_mass",          ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[0].M());
                                              ana.tx.setBranch<float>("OS2jet_fatjet1_massSD",        ana.tx.getBranchLazy<vector<float>>("Common_fatjet_msoftdrop")[0]);
                                              //subjet info
                                              ana.tx.setBranch<float>("OS2jet_fatjet1_subjet0_pt",     ana.tx.getBranchLazy<vector<float>>("Common_fatjet_subjet0_pt")[0]);
                                              ana.tx.setBranch<float>("OS2jet_fatjet1_subjet1_pt",     ana.tx.getBranchLazy<vector<float>>("Common_fatjet_subjet1_pt")[0]);
                                              ana.tx.setBranch<float>("OS2jet_fatjet1_subjet0_eta",    ana.tx.getBranchLazy<vector<float>>("Common_fatjet_subjet0_eta")[0]);
                                              ana.tx.setBranch<float>("OS2jet_fatjet1_subjet1_eta",    ana.tx.getBranchLazy<vector<float>>("Common_fatjet_subjet1_eta")[0]);
                                              ana.tx.setBranch<float>("OS2jet_fatjet1_subjet0_mass",   ana.tx.getBranchLazy<vector<float>>("Common_fatjet_subjet0_mass")[0]);
                                              ana.tx.setBranch<float>("OS2jet_fatjet1_subjet1_mass",   ana.tx.getBranchLazy<vector<float>>("Common_fatjet_subjet1_mass")[0]);
                                              //Njettines info
                                              ana.tx.setBranch<float>("OS2jet_fatjet1_tau1",          ana.tx.getBranchLazy<vector<float>>("Common_fatjet_tau1")[0]);
                                              ana.tx.setBranch<float>("OS2jet_fatjet1_tau2",          ana.tx.getBranchLazy<vector<float>>("Common_fatjet_tau2")[0]);
                                              ana.tx.setBranch<float>("OS2jet_fatjet1_tau3",          ana.tx.getBranchLazy<vector<float>>("Common_fatjet_tau3")[0]);
                                              ana.tx.setBranch<float>("OS2jet_fatjet1_tau21",         ana.tx.getBranchLazy<vector<float>>("Common_fatjet_tau21")[0]);
                                              ana.tx.setBranch<float>("OS2jet_fatjet1_tau32",         ana.tx.getBranchLazy<vector<float>>("Common_fatjet_tau32")[0]);
                                              ana.tx.setBranch<float>("OS2jet_fatjet1_toptag",        ana.tx.getBranchLazy<vector<float>>("Common_fatjet_deepMD_T")[0]);
                                              ana.tx.setBranch<float>("OS2jet_fatjet1_Wtag",          ana.tx.getBranchLazy<vector<float>>("Common_fatjet_deepMD_W")[0]);
                                              ana.tx.setBranch<float>("OS2jet_fatjet1_Ztag",          ana.tx.getBranchLazy<vector<float>>("Common_fatjet_deepMD_Z")[0]);
                                              ana.tx.setBranch<float>("OS2jet_fatjet1_Zbbtag",        ana.tx.getBranchLazy<vector<float>>("Common_fatjet_deepMD_bb")[0]);
                                              ana.tx.setBranch<float>("OS2jet_fatjet1_ll_DR",         RooUtil::Calc::DeltaR(ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[0],ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[0]+ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[1]));
                                              ana.tx.setBranch<float>("OS2jet_fatjet12_ll_DRmax",     RooUtil::Calc::DeltaR(ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[0],ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[0]+ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[1]));
                                              if(!ana.tx.getBranch<int>("Common_isData")){
                                                //gen matching v2:
                                                //1: match to bqq from t + W/Z
                                                //2: match to qq from W/Z
                                                //3: match to bq from t
                                                //4: match to bl from t
                                                //5: match to bb from ttbar
                                                //6: match to bq+ from ttbar
                                                //7: match to bl from ttbar
                                                int idb1 (-1), idb2 (-1), idq1(-1), idqp1(-1), idq2(-1), idqp2(-1), idl1(-1), idl2(-1);
                                                bool dRb1 (false), dRb2 (false), dRq1(false), dRqp1(false), dRq2(false), dRqp2(false), dRl1(false), dRl2(false);
                                                for(unsigned int ig = 0; ig<=ana.tx.getBranchLazy<vector<int>>("Common_gen_idx").size(); ++ig){
                                                  bool tempDR = (RooUtil::Calc::DeltaR(ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[0],ana.tx.getBranchLazy<vector<LorentzVector>>("Common_gen_p4s")[ig])<0.8);
                                                  //if (ana.tx.getBranchLazy<vector<float>>("Common_fatjet_msoftdrop")[0]>65.&&ana.tx.getBranchLazy<vector<float>>("Common_fatjet_msoftdrop")[0]<105.) cout << "fatjet eta/phi " << ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[0].Eta() << "/" << ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[0].Phi() << " genpart eta/phi " << ana.tx.getBranchLazy<vector<LorentzVector>>("Common_gen_p4s")[ig].Eta() << "/" << ana.tx.getBranchLazy<vector<LorentzVector>>("Common_gen_p4s")[ig].Phi() << " dR " <<  RooUtil::Calc::DeltaR(ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[0],ana.tx.getBranchLazy<vector<LorentzVector>>("Common_gen_p4s")[ig]) << " bool " << tempDR << " --- ID " << ana.tx.getBranchLazy<vector<int>>("Common_gen_pdgid")[ig] << " motherID " << ana.tx.getBranchLazy<vector<int>>("Common_gen_mother_id")[ig] << endl;
                                                  if(abs(ana.tx.getBranchLazy<vector<int>>("Common_gen_pdgid")[ig])==5 && (ana.tx.getBranchLazy<vector<int>>("Common_gen_mother_id")[ig])==6) {
                                                    idb1 = ig; dRb1 = tempDR;
                                                  }
                                                  if(abs(ana.tx.getBranchLazy<vector<int>>("Common_gen_pdgid")[ig])<=4 && (ana.tx.getBranchLazy<vector<int>>("Common_gen_mother_id")[ig])==24) {
                                                    if(idq1<0) { idq1  = ig; dRq1  = tempDR; }
                                                    else       { idqp1 = ig; dRqp1 = tempDR; }
                                                  }
                                                  if((abs(ana.tx.getBranchLazy<vector<int>>("Common_gen_pdgid")[ig])==11 || abs(ana.tx.getBranchLazy<vector<int>>("Common_gen_pdgid")[ig])==13 || abs(ana.tx.getBranchLazy<vector<int>>("Common_gen_pdgid")[ig])==15)  && (ana.tx.getBranchLazy<vector<int>>("Common_gen_mother_id")[ig])==24){
                                                    idl1 = ig; dRl1 = tempDR;
                                                  }
                                                  if(abs(ana.tx.getBranchLazy<vector<int>>("Common_gen_pdgid")[ig])==5 && (ana.tx.getBranchLazy<vector<int>>("Common_gen_mother_id")[ig])==-6) {
                                                    idb2 = ig; dRb2 = tempDR;
                                                  }
                                                  if(abs(ana.tx.getBranchLazy<vector<int>>("Common_gen_pdgid")[ig])<=4 && (ana.tx.getBranchLazy<vector<int>>("Common_gen_mother_id")[ig])==-24) {
                                                    if(idq1<0) { idq2  = ig; dRq2  = tempDR; }
                                                    else       { idqp2 = ig; dRqp2 = tempDR; }
                                                  }
                                                  if((abs(ana.tx.getBranchLazy<vector<int>>("Common_gen_pdgid")[ig])==11 || abs(ana.tx.getBranchLazy<vector<int>>("Common_gen_pdgid")[ig])==13 || abs(ana.tx.getBranchLazy<vector<int>>("Common_gen_pdgid")[ig])==15)  && (ana.tx.getBranchLazy<vector<int>>("Common_gen_mother_id")[ig])==-24) {
                                                    idl2 = ig; dRl2 = tempDR;
                                                  }
                                                }
                                                if((dRb1&&dRq1&&dRqp1)||(dRb2&&dRq2&&dRqp2))                      ana.tx.setBranch<int>  ("OS2jet_fatjet1_genmatchingv2", 1);
                                                else if((dRq1&&dRqp1)||(dRq2&&dRqp2))                             ana.tx.setBranch<int>  ("OS2jet_fatjet1_genmatchingv2", 2);
                                                else if((dRb1&&dRq1)||(dRb1&&dRqp1)||(dRb2&&dRq2)||(dRb2&&dRqp2)) ana.tx.setBranch<int>  ("OS2jet_fatjet1_genmatchingv2", 3);
                                                else if((dRb1&&dRl1)||(dRb1&&dRl2))                               ana.tx.setBranch<int>  ("OS2jet_fatjet1_genmatchingv2", 4);
                                                else if((dRb1&&dRb2))                                             ana.tx.setBranch<int>  ("OS2jet_fatjet1_genmatchingv2", 5);
                                                else if((dRb1&&dRq2)||(dRb1&&dRqp2)||(dRb2&&dRq1)||(dRb2&&dRqp1)) ana.tx.setBranch<int>  ("OS2jet_fatjet1_genmatchingv2", 6);
                                                else if((dRb1&&dRl2)||(dRb1&&dRl1))                               ana.tx.setBranch<int>  ("OS2jet_fatjet1_genmatchingv2", 7);
                                                else if((dRb1||dRb2))                                             ana.tx.setBranch<int>  ("OS2jet_fatjet1_genmatchingv2", 8);
                                                else if((dRq1||dRqp1)||(dRq2||dRqp2))                             ana.tx.setBranch<int>  ("OS2jet_fatjet1_genmatchingv2", 9);
                                                else if((dRl1||dRl2))                                             ana.tx.setBranch<int>  ("OS2jet_fatjet1_genmatchingv2",10);
                                                else                                                              ana.tx.setBranch<int>  ("OS2jet_fatjet1_genmatchingv2", 0);
                                                //if (ana.tx.getBranchLazy<vector<float>>("Common_fatjet_msoftdrop")[0]>65.&&ana.tx.getBranchLazy<vector<float>>("Common_fatjet_msoftdrop")[0]<105.) cout << "bool map " << dRb1 << " " << dRq1 << " " << dRqp1 << " " << dRl1 << "  " << dRb2 << " " << dRq2 << " " << dRqp2 << " " << dRl2 <<  " -- " <<  ana.tx.getBranch<int>("OS2jet_fatjet1_genmatchingv2")  << endl;
                                                for(unsigned int ig = 0; ig<=ana.tx.getBranchLazy<vector<int>>("Common_gen_idx").size(); ++ig){
                                                  if(abs(ana.tx.getBranchLazy<vector<int>>("Common_gen_pdgid")[ig])!=23 && abs(ana.tx.getBranchLazy<vector<int>>("Common_gen_pdgid")[ig])!=24)
                                                    continue;
                                                  if(RooUtil::Calc::DeltaR(ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[0],ana.tx.getBranchLazy<vector<LorentzVector>>("Common_gen_p4s")[ig])<0.4){
                                                    ana.tx.setBranch<int>  ("OS2jet_fatjet1_genmatching",  ig);
                                                    break;
                                                  }
                                                }

                                              //find minDR
                                              //calculate minDR for reco jet and a W hadronic decay jet //
                                              float dRmin(1000);
                                              int imatch(-1);
                                              //loop over gen jets//
                                              for(unsigned int ig = 0; ig<=ana.tx.getBranchLazy<vector<int>>("Common_gen_idx").size(); ++ig){
                                                if(abs(ana.tx.getBranchLazy<vector<int>>("Common_gen_pdgid")[ig])!=23 && abs(ana.tx.getBranchLazy<vector<int>>("Common_gen_pdgid")[ig])!=24)
                                                  continue;
                                                float dR_W_Rec=	RooUtil::Calc::DeltaR(ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[0],ana.tx.getBranchLazy<vector<LorentzVector>>("Common_gen_p4s")[ig]);

                                                if (dR_W_Rec < dRmin) {
                                                		imatch = ig;
                                                		dRmin = dR_W_Rec;
                                                		//cout<< "imatch: "  << imatch << " and  dR_W_Rec: " << dR_W_Rec << endl;
                                                }
                                              }

                                              if(imatch>=0){
                                                //cout << "Min DR: " << dRmin <<endl;
                                                //cout << "====================== " << endl;
                                                ana.tx.setBranch<float>("OS2jet_fatjet1_Recojet_matchJet_DRmin", dRmin);

                                                for(unsigned int ig = 0; ig<=ana.tx.getBranchLazy<vector<int>>("Common_gen_idx").size(); ++ig){

                                                   if(dRmin<0.4){   ana.tx.setBranch<int>  ("OS2jet_fatjet1_genmatchingv3",  imatch);
                                                     //cout << "Min DR: " << dRmin << "and ig: "<< ig << " and imatch " << imatch <<endl;
                                                     //cout << "====================== " << endl;
                                                     break;
                                                   }
                                                 }
                                              }//imatch



                                              }//is data
                                              ana.tx.setBranch<bool >("OS2jet_fatjet1_massSDcut",     (ana.tx.getBranchLazy<vector<float>>("Common_fatjet_msoftdrop")[0]>65.&&ana.tx.getBranchLazy<vector<float>>("Common_fatjet_msoftdrop")[0]<105.));
                                              ana.tx.setBranch<bool >("OS2jet_fatjet1_tau21cut",      ana.tx.getBranchLazy<vector<float>>("Common_fatjet_tau21")[0]<0.45);



                                            }//at least one fat jet

                                            //do >=2 fatjet
                                            if(nfat>=2){
                                              ana.tx.setBranch<float>("OS2jet_fatjet2_pt",            ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[1].Pt());
                                              ana.tx.setBranch<float>("OS2jet_fatjet2_mass",          ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[1].M());
                                              ana.tx.setBranch<float>("OS2jet_fatjet2_massSD",        ana.tx.getBranchLazy<vector<float>>("Common_fatjet_msoftdrop")[1]);
                                              //subjet info
                                              ana.tx.setBranch<float>("OS2jet_fatjet2_subjet0_pt",     ana.tx.getBranchLazy<vector<float>>("Common_fatjet_subjet0_pt")[1]);
                                              ana.tx.setBranch<float>("OS2jet_fatjet2_subjet1_pt",     ana.tx.getBranchLazy<vector<float>>("Common_fatjet_subjet1_pt")[1]);
                                              ana.tx.setBranch<float>("OS2jet_fatjet2_subjet0_eta",    ana.tx.getBranchLazy<vector<float>>("Common_fatjet_subjet0_eta")[1]);
                                              ana.tx.setBranch<float>("OS2jet_fatjet2_subjet1_eta",    ana.tx.getBranchLazy<vector<float>>("Common_fatjet_subjet1_eta")[1]);
                                              ana.tx.setBranch<float>("OS2jet_fatjet2_subjet0_mass",   ana.tx.getBranchLazy<vector<float>>("Common_fatjet_subjet0_mass")[1]);
                                              ana.tx.setBranch<float>("OS2jet_fatjet2_subjet1_mass",   ana.tx.getBranchLazy<vector<float>>("Common_fatjet_subjet1_mass")[1]);



                                              ana.tx.setBranch<float>("OS2jet_fatjet2_tau1",          ana.tx.getBranchLazy<vector<float>>("Common_fatjet_tau1")[1]);
                                              ana.tx.setBranch<float>("OS2jet_fatjet2_tau2",          ana.tx.getBranchLazy<vector<float>>("Common_fatjet_tau2")[1]);
                                              ana.tx.setBranch<float>("OS2jet_fatjet2_tau3",          ana.tx.getBranchLazy<vector<float>>("Common_fatjet_tau3")[1]);
                                              ana.tx.setBranch<float>("OS2jet_fatjet2_tau21",         ana.tx.getBranchLazy<vector<float>>("Common_fatjet_tau21")[1]);
                                              ana.tx.setBranch<float>("OS2jet_fatjet2_tau32",         ana.tx.getBranchLazy<vector<float>>("Common_fatjet_tau32")[1]);
                                              ana.tx.setBranch<float>("OS2jet_fatjet2_toptag",        ana.tx.getBranchLazy<vector<float>>("Common_fatjet_deepMD_T")[1]);
                                              ana.tx.setBranch<float>("OS2jet_fatjet2_Wtag",          ana.tx.getBranchLazy<vector<float>>("Common_fatjet_deepMD_W")[1]);
                                              ana.tx.setBranch<float>("OS2jet_fatjet2_Ztag",          ana.tx.getBranchLazy<vector<float>>("Common_fatjet_deepMD_Z")[1]);
                                              ana.tx.setBranch<float>("OS2jet_fatjet2_Zbbtag",        ana.tx.getBranchLazy<vector<float>>("Common_fatjet_deepMD_bb")[1]);
                                              ana.tx.setBranch<float>("OS2jet_fatjet2_ll_DR",         RooUtil::Calc::DeltaR(ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[1],ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[0]+ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[1]));
                                              ana.tx.setBranch<float>("OS2jet_fatjet12_ll_DRmax",     std::max(RooUtil::Calc::DeltaR(ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[1],ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[0]+ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[1]),RooUtil::Calc::DeltaR(ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[0],ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[0]+ana.tx.getBranchLazy<vector<LorentzVector>>("Common_lep_p4")[1])));
                                              ana.tx.setBranch<float>("OS2jet_fatjet12_ptvectorsum",  (ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[0]+ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[1]).Pt());
                                              ana.tx.setBranch<float>("OS2jet_fatjet12_ptscalarsum",   ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[0].Pt()+ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[1].Pt());
                                              ana.tx.setBranch<float>("OS2jet_fatjet12_ptscalarprod",  ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[0].Pt()*ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[1].Pt());
                                              ana.tx.setBranch<float>("OS2jet_fatjet12_mass",         (ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[0]+ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[1]).M());
                                              ana.tx.setBranch<float>("OS2jet_fatjet12_masssum",       ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[0].M()+ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[1].M());
                                              ana.tx.setBranch<float>("OS2jet_fatjet12_massproduct",   ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[0].M()*ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[1].M());
                                              ana.tx.setBranch<float>("OS2jet_fatjet12_massSDsum",     ana.tx.getBranchLazy<vector<float>>("Common_fatjet_msoftdrop")[0]+ana.tx.getBranchLazy<vector<float>>("Common_fatjet_msoftdrop")[1]);
                                              ana.tx.setBranch<float>("OS2jet_fatjet12_massSDproduct", ana.tx.getBranchLazy<vector<float>>("Common_fatjet_msoftdrop")[0]*ana.tx.getBranchLazy<vector<float>>("Common_fatjet_msoftdrop")[1]);
                                              ana.tx.setBranch<float>("OS2jet_fatjet12_DR",                RooUtil::Calc::DeltaR(  ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[0],ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[1]));
                                              ana.tx.setBranch<float>("OS2jet_fatjet12_DPhi",          abs(RooUtil::Calc::DeltaPhi(ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[0],ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[1])));
                                              ana.tx.setBranch<float>("OS2jet_fatjet12_DEta",          abs(RooUtil::Calc::DeltaEta(ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[0],ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[1])));
                                              ana.tx.setBranch<float>("OS2jet_fatjet12_WtWtag",        ana.tx.getBranchLazy<vector<float>>("Common_fatjet_deepMD_W")[0]*ana.tx.getBranchLazy<vector<float>>("Common_fatjet_deepMD_W")[1]);
                                              ana.tx.setBranch<float>("OS2jet_fatjet12_WpWtag",        ana.tx.getBranchLazy<vector<float>>("Common_fatjet_deepMD_W")[0]+ana.tx.getBranchLazy<vector<float>>("Common_fatjet_deepMD_W")[1]);
                                              if(!ana.tx.getBranch<int>("Common_isData")){
                                                for(unsigned int ig = 0; ig<=ana.tx.getBranchLazy<vector<int>>("Common_gen_idx").size(); ++ig){
                                                  if(abs(ana.tx.getBranchLazy<vector<int>>("Common_gen_pdgid")[ig])!=23 && abs(ana.tx.getBranchLazy<vector<int>>("Common_gen_pdgid")[ig])!=24)
                                                    continue;
                                                  if(RooUtil::Calc::DeltaR(ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[1],ana.tx.getBranchLazy<vector<LorentzVector>>("Common_gen_p4s")[ig])<0.4){
                                                    ana.tx.setBranch<int>  ("OS2jet_fatjet2_genmatching",  ig);
                                                    break;
                                                  }
                                                }



                                              }//data
                                              /*ana.tx.setBranch<bool >("OS2jet_fatjet2_massSDcut",     (ana.tx.getBranchLazy<vector<float>>("Common_fatjet_msoftdrop")[1]>65.&&ana.tx.getBranchLazy<vector<float>>("Common_fatjet_msoftdrop")[1]<105.));
                                              ana.tx.setBranch<bool >("OS2jet_fatjet2_tau21cut",      ana.tx.getBranchLazy<vector<float>>("Common_fatjet_tau21")[1]<0.45);
                                              ana.tx.setBranch<bool >("OS2jet_fatjet12_ANDmassSDcut", ((ana.tx.getBranchLazy<vector<float>>("Common_fatjet_msoftdrop")[0]>65.&&ana.tx.getBranchLazy<vector<float>>("Common_fatjet_msoftdrop")[0]<105.)&&(ana.tx.getBranchLazy<vector<float>>("Common_fatjet_msoftdrop")[1]>65.&&ana.tx.getBranchLazy<vector<float>>("Common_fatjet_msoftdrop")[1]<105.)));
                                              ana.tx.setBranch<bool >("OS2jet_fatjet12_ANDtau21cut",  ((ana.tx.getBranchLazy<vector<float>>("Common_fatjet_tau21")[1]<0.45)&&(ana.tx.getBranchLazy<vector<float>>("Common_fatjet_tau21")[1]<0.45)));
                                              ana.tx.setBranch<bool >("OS2jet_fatjet12_ORmassSDcut",  ((ana.tx.getBranchLazy<vector<float>>("Common_fatjet_msoftdrop")[0]>65.&&ana.tx.getBranchLazy<vector<float>>("Common_fatjet_msoftdrop")[0]<105.)||(ana.tx.getBranchLazy<vector<float>>("Common_fatjet_msoftdrop")[1]>65.&&ana.tx.getBranchLazy<vector<float>>("Common_fatjet_msoftdrop")[1]<105.)));
                                              ana.tx.setBranch<bool >("OS2jet_fatjet12_ORtau21cut",   ((ana.tx.getBranchLazy<vector<float>>("Common_fatjet_tau21")[1]<0.45)||(ana.tx.getBranchLazy<vector<float>>("Common_fatjet_tau21")[1]<0.45)));*/
                                            }

                                            //do >=2 jets - do jets orthogonal to fatjets
                                            if(jetidx2>=0){
                                              ana.tx.setBranch<int>  ("OS2jet_jet1_idx",              jetidx1);
                                              ana.tx.setBranch<int>  ("OS2jet_jet2_idx",              jetidx2);
                                              ana.tx.setBranch<float>("OS2jet_jet1_pt",               ana.tx.getBranchLazy<vector<LorentzVector>>("Common_jet_p4")[jetidx1].Pt());
                                              ana.tx.setBranch<float>("OS2jet_jet2_pt",               ana.tx.getBranchLazy<vector<LorentzVector>>("Common_jet_p4")[jetidx2].Pt());
                                              ana.tx.setBranch<float>("OS2jet_jet12_ptvectorsum",    (ana.tx.getBranchLazy<vector<LorentzVector>>("Common_jet_p4")[jetidx1]+ana.tx.getBranchLazy<vector<LorentzVector>>("Common_jet_p4")[jetidx1]).Pt());
                                              ana.tx.setBranch<float>("OS2jet_jet12_ptscalarsum",     ana.tx.getBranchLazy<vector<LorentzVector>>("Common_jet_p4")[jetidx1].Pt()+ana.tx.getBranchLazy<vector<LorentzVector>>("Common_jet_p4")[jetidx2].Pt());
                                              ana.tx.setBranch<float>("OS2jet_jet12_ptscalarprod",    ana.tx.getBranchLazy<vector<LorentzVector>>("Common_jet_p4")[jetidx1].Pt()*ana.tx.getBranchLazy<vector<LorentzVector>>("Common_jet_p4")[jetidx2].Pt());
                                              ana.tx.setBranch<float>("OS2jet_jet12_mass",           (ana.tx.getBranchLazy<vector<LorentzVector>>("Common_jet_p4")[jetidx1]+ana.tx.getBranchLazy<vector<LorentzVector>>("Common_jet_p4")[jetidx2]).M());
                                              ana.tx.setBranch<float>("OS2jet_jet12_DR",                  RooUtil::Calc::DeltaR(  ana.tx.getBranchLazy<vector<LorentzVector>>("Common_jet_p4")[jetidx1],ana.tx.getBranchLazy<vector<LorentzVector>>("Common_jet_p4")[jetidx2]));
                                              ana.tx.setBranch<float>("OS2jet_jet12_DPhi",            abs(RooUtil::Calc::DeltaPhi(ana.tx.getBranchLazy<vector<LorentzVector>>("Common_jet_p4")[jetidx1],ana.tx.getBranchLazy<vector<LorentzVector>>("Common_jet_p4")[jetidx2])));
                                              ana.tx.setBranch<float>("OS2jet_jet12_DEta",            abs(RooUtil::Calc::DeltaEta(ana.tx.getBranchLazy<vector<LorentzVector>>("Common_jet_p4")[jetidx1],ana.tx.getBranchLazy<vector<LorentzVector>>("Common_jet_p4")[jetidx2])));
                                            }


                                       ana.tx.setBranch<bool>("Cut_OS2Fatjet_Preselection", true);
                                       return true;
                                      }, UNITY);// trigger SF would go in here instead of UNITY, in principle also btag weight

  }




  void Begin_OS2Fatjet_VVVTree(){

    //testing VVVTree
    //___________________________________________________________________________________________________________________________________________________
    TFile* inputfile = TFile::Open(ana.input_file_list_tstring);
    TH1F* h_nevents = (TH1F*) inputfile->Get("Wgt__h_nevents"); // Should be "Wgt" to be accurate but the tree does not save event weight (i.e. the sign)
    float n_total_events = h_nevents->GetBinContent(1);


    //___________________________________________________________________________________________________________________________________________________
    int year = -1;
    if (ana.input_file_list_tstring.Contains("2016")) year = 2016;
    if (ana.input_file_list_tstring.Contains("2017")) year = 2017;
    if (ana.input_file_list_tstring.Contains("2018")) year = 2018;

    //___________________________________________________________________________________________________________________________________________________
    float lumi = 0;
    if (year == 2016) lumi = 35.9;
    if (year == 2017) lumi = 41.3;
    if (year == 2018) lumi = 59.74;

    //___________________________________________________________________________________________________________________________________________________
    // For samples that don't exist in other years
    if (year == 2018 and ana.input_file_list_tstring.Contains("/EFT_ZZZ_2l.root"))
        lumi = 136.94;

    //___________________________________________________________________________________________________________________________________________________
    float xsecbr = 0;
    if (ana.input_file_list_tstring.Contains("/DY_high.root"         )) xsecbr = 6197.9;
    if (ana.input_file_list_tstring.Contains("/DY_low.root"          )) xsecbr = 20657.0;
    if (ana.input_file_list_tstring.Contains("/DYzpt150.root"        )) xsecbr = 202.9;
    if (ana.input_file_list_tstring.Contains("/GGHtoZZto4L.root"     )) xsecbr = 0.011814 * 1.1287633316; // Difference between scale1fb and HXSWG twiki
    if (ana.input_file_list_tstring.Contains("/TTDL.root"            )) xsecbr = 72.1;
    if (ana.input_file_list_tstring.Contains("/TTHtoNonBB.root"      )) xsecbr = 0.215;
    if (ana.input_file_list_tstring.Contains("/TTSL.root"            )) xsecbr = 365.34;
    if (ana.input_file_list_tstring.Contains("/TTSLtop.root"         )) xsecbr = 182.96;
    if (ana.input_file_list_tstring.Contains("/TTSLtopbar.root"      )) xsecbr = 182.96;
    if (ana.input_file_list_tstring.Contains("/TTWH.root"            )) xsecbr = 0.001582;
    if (ana.input_file_list_tstring.Contains("/TTWW.root"            )) xsecbr = 0.0115;
    if (ana.input_file_list_tstring.Contains("/TTWZ.root"            )) xsecbr = 0.003884;
    if (ana.input_file_list_tstring.Contains("/TTWnlo.root"          )) xsecbr = 0.2043;
    if (ana.input_file_list_tstring.Contains("/TTZH.root"            )) xsecbr = 0.001535;
    if (ana.input_file_list_tstring.Contains("/TTZLOW.root"          )) xsecbr = 0.0493;
    if (ana.input_file_list_tstring.Contains("/TTZZ.root"            )) xsecbr = 0.001982;
    if (ana.input_file_list_tstring.Contains("/TTZnlo.root"          )) xsecbr = 0.2529 * 0.2728/0.2529; // cross section based on AN2018-025
    if (ana.input_file_list_tstring.Contains("/TWZ.root"             )) xsecbr = 0.01123;
    if (ana.input_file_list_tstring.Contains("/VHtoNonBB.root"       )) xsecbr = 0.952;
    if (ana.input_file_list_tstring.Contains("/WZ.root"              )) xsecbr = 4.4297;
    if (ana.input_file_list_tstring.Contains("/WZG.root"             )) xsecbr = 0.04123;
    if (ana.input_file_list_tstring.Contains("/ZZ.root"              )) xsecbr = 1.256 * 1.1; // missing K-factor
    if (ana.input_file_list_tstring.Contains("/ZZcontTo2e2mu.root"   )) xsecbr = 0.005423;
    if (ana.input_file_list_tstring.Contains("/ZZcontTo2e2tau.root"  )) xsecbr = 0.005423;
    if (ana.input_file_list_tstring.Contains("/ZZcontTo2mu2tau.root" )) xsecbr = 0.005423;
    if (ana.input_file_list_tstring.Contains("/ZZcontTo4e.root"      )) xsecbr = 0.002703;
    if (ana.input_file_list_tstring.Contains("/ZZcontTo4mu.root"     )) xsecbr = 0.002703;
    if (ana.input_file_list_tstring.Contains("/ZZcontTo4tau.root"    )) xsecbr = 0.002703;
    if (ana.input_file_list_tstring.Contains("/WWW_incl.root"        )) xsecbr = 0.2086;
    if (ana.input_file_list_tstring.Contains("/WWZ_incl.root"        )) xsecbr = 0.1651;
    if (ana.input_file_list_tstring.Contains("/WZZ_incl.root"        )) xsecbr = 0.05565;
    if (ana.input_file_list_tstring.Contains("/ZZZ_incl.root"        )) xsecbr = 0.01398;
    if (ana.input_file_list_tstring.Contains("/WWW_2l.root"          )) xsecbr = 0.051998;
    if (ana.input_file_list_tstring.Contains("/WWZ_4l.root"          )) xsecbr = 5.972e-04;
    if (ana.input_file_list_tstring.Contains("/WZZ_4l.root"          )) xsecbr = 0.0002692;
    if (ana.input_file_list_tstring.Contains("/ZZZ_4l.root"          )) xsecbr = 0.0001907;
    if (ana.input_file_list_tstring.Contains("/EFT_WWZ_4l.root"      )) xsecbr = 0.001785056782; // ((0.1071+0.1063+0.1138)^2*(0.03363+0.03366+0.03370))*0.1651
    if (ana.input_file_list_tstring.Contains("/ZHtoWW.root"          )) xsecbr = 0.0018639;
    if (ana.input_file_list_tstring.Contains("/GGZHtoWW.root"        )) xsecbr = 0.00029975;
    if (ana.input_file_list_tstring.Contains("/ZHtoWW.root"          ) and year == 2016) xsecbr = 0.0018639 * 9.9601593625; // Fixing BR due to what seems like McM config error. BR of Z->ll / Z->all (calculated from zh_ww_4l_powheg sample itself (is this the correct thing to do? maybe?))
    if (ana.input_file_list_tstring.Contains("/GGZHtoWW.root"        ) and year == 2016) xsecbr = 0.00029975 * 2.9735355337; // Fixing BR due to what seems like McM config error. BR of Z->ll / Z->ll/vv (calculated from ggzh_ww_4l_powheg sample itself (is this the correct thing to do? maybe?))
    if (ana.input_file_list_tstring.Contains("/EFT_ZZZ_2l.root"      )) xsecbr = 0.0103663118433 * 0.273160562; // 1 - (all had)
    if (ana.input_file_list_tstring.Contains("EFT_WZZ_incl_2018.root"    )) xsecbr = 0.05565; // Took same as WZZ_incl from other samples

    //___________________________________________________________________________________________________________________________________________________
    float wgt = xsecbr > 0 ? xsecbr / n_total_events * lumi * 1000.: 1;

    std::cout <<  " xsecbr: " << xsecbr <<  " n_total_events: " << n_total_events <<  " lumi: " << lumi <<  " year: " << year <<  std::endl;
    std::cout <<  "weight: "  << wgt <<endl;

    //___________________________________________________________________________________________________________________________________________________
    bool isEFT = (ana.input_file_list_tstring.Contains("EFT_"));

    cout << "is EFT " << isEFT << endl;





     //___________________________________________________________________________________________________________________________________________________
    TH1F* h_mg_reweight;
    if (isEFT)
    {
        h_mg_reweight = (TH1F*) inputfile->Get("Root__h_Common_LHEWeight_mg_reweighting");
    }

    //  ana.cutflow.getCut("CommonCut");
    ana.cutflow.getCut("CommonCut");

    // const int eft_reweighting_idx = result["modifier"].as<int>();
     // const int eft_parameter_multiplication_factor = result["eftmultfac"].as<int>();
     const int eft_reweighting_idx = ana.eft_reweighting_idx;
     const int eft_parameter_multiplication_factor = 1;

     // WWZ:
     // WZZ:
     // ZZZ: SM index
   int eft_sm_idx = 0;

   if (ana.input_file_list_tstring.Contains("/EFT_WWZ"))
       eft_sm_idx = 50;

   ana.cutflow.addCutToLastActiveCut("CutEFTWeights", UNITY, [&, isEFT, eft_reweighting_idx, eft_parameter_multiplication_factor, n_total_events, h_mg_reweight, eft_sm_idx]()
           {
               if (isEFT)
               {
                   if (eft_reweighting_idx == 9999)
                   {
                       float SM_wgt = vvv.Common_LHEWeight_mg_reweighting()[eft_sm_idx];
                       float EFT_wgt_FT0 = vvv.Common_LHEWeight_mg_reweighting()[20];
                       float EFT_wgt_FT1 = vvv.Common_LHEWeight_mg_reweighting()[32];
                       float parameter = 5;
                       float growth_FT0 = EFT_wgt_FT0 / SM_wgt;
                       float growth_FT1 = EFT_wgt_FT1 / SM_wgt;
                       float change_FT0 = (growth_FT0 - 1);
                       float change_FT1 = (growth_FT1 - 1);
                       float newchange_FT0 = change_FT0 * parameter * parameter; // a * x^2;
                       float newchange_FT1 = change_FT1 * parameter * parameter; // a * x^2;
                       float new_EFT_wgt = (newchange_FT0 + newchange_FT1 + 1) * SM_wgt;
                       return (float) (new_EFT_wgt * n_total_events / h_mg_reweight->GetBinContent(eft_sm_idx + 1));
                   }
                   else
                   {
                       float SM_wgt = vvv.Common_LHEWeight_mg_reweighting()[eft_sm_idx];
                       float EFT_wgt = vvv.Common_LHEWeight_mg_reweighting()[eft_reweighting_idx];
                       float parameter = eft_parameter_multiplication_factor;
                       float growth = EFT_wgt / SM_wgt;
                       float change = (growth - 1);
                       float newchange = change * parameter * parameter; // a * x^2;
                       float new_EFT_wgt = (newchange + 1) * SM_wgt;
                       float final_weight = new_EFT_wgt * n_total_events / h_mg_reweight->GetBinContent(eft_sm_idx + 1);
                       //cout << "final EFT weight: " << final_weight << endl;
                       return (float) (new_EFT_wgt * n_total_events / h_mg_reweight->GetBinContent(eft_sm_idx + 1));
                   }
               }
               else
               {
                   return 1.f;
               }
           } );



//make sure lepton SFs are applied
  ana.cutflow.addCutToLastActiveCut("Cut_OS2Fatjet_OSleps",[&]()  {return  vvv.Cut_OS2Fatjet_OSleps();}, [&]() { return ana.tx.getBranchLazy<float>("Common_event_lepSF"); });




    // Create a middle point of preselection--- then the preselection will have the eft weights applied and also weights from the cross section!!!

 //  ana.cutflow.addCutToLastActiveCut("Cut_OS2Fatjet_Preselection",[&]() { return ana.tx.getBranch<bool>("Cut_OS2Fatjet_Preselection"); }, [&, wgt]() { return (vvv.Common_isData() ? 1. : wgt); } );
    ana.cutflow.addCutToLastActiveCut("Cut_OS2Fatjet_Preselection",[&]() { return vvv.Cut_OS2Fatjet_Preselection(); }, [&, wgt]() { return (vvv.Common_isData() ? 1. : wgt); } );
    //ana.cutflow.addCutToLastActiveCut("Cut_OS2Fatjet_Preselection",[&]() { return vvv.Cut_OS2Fatjet_Preselection();}, UNITY);



  }





  void Begin_OS2Fatjet_Create_Branches()
  {
    // Create variables used in this category.
    // Please follow the convention of <category>_<varname> structure.
    ana.tx.createBranch<bool>         ("Cut_OS2Fatjet_OSleps");
    ana.tx.createBranch<bool>         ("Cut_OS2Fatjet_Preselection");
    ana.tx.createBranch<bool>         ("Cut_OS2Fatjet_Preselection_genmatched");
    ana.tx.createBranch<bool>         ("Cut_OS2Fatjet_OFPreselection");
    ana.tx.createBranch<bool>         ("Cut_OS2Fatjet_OF2jets");
    ana.tx.createBranch<bool>         ("Cut_OS2Fatjet_OF1fatjet");


    ana.tx.createBranch<int>  ("OS2jet_SFcontent"             );
    ana.tx.createBranch<int>  ("OS2jet_Jetcontent"            );
    ana.tx.createBranch<int>  ("OS2jet_Nfatjets"              );
    ana.tx.createBranch<int>  ("OS2jet_Njets"                 );
    ana.tx.createBranch<int>  ("OS2jet_Nbjetsv1"              );
    ana.tx.createBranch<int>  ("OS2jet_Nbjetsv2"              );
    ana.tx.createBranch<float>("OS2jet_ST"                    );

    ana.tx.createBranch<int>  ("OS2jet_Nbjetsmedv1"           );
    //ana.tx.createBranch<int>  ("OS2jet_NfatjetsMinusNjets"    );
    ana.tx.createBranch<float>("OS2jet_fatjet_pt"             );
    ana.tx.createBranch<float>("OS2jet_lep1_pt"               );
    ana.tx.createBranch<float>("OS2jet_lep2_pt"               );
    ana.tx.createBranch<float>("OS2jet_lep12_ptvectorsum"     );
    ana.tx.createBranch<float>("OS2jet_lep12_ptscalarsum"     );
    ana.tx.createBranch<float>("OS2jet_lep12_ptscalarprod"    );
    ana.tx.createBranch<float>("OS2jet_lep12_mass"            );
    ana.tx.createBranch<float>("OS2jet_lep12_DR"              );
    ana.tx.createBranch<float>("OS2jet_lep12_DPhi"            );
    ana.tx.createBranch<float>("OS2jet_lep12_Deta"            );
    ana.tx.createBranch<float>("OS2jet_fatjet1_pt"            );
    ana.tx.createBranch<float>("OS2jet_fatjet2_pt"            );
    ana.tx.createBranch<float>("OS2jet_fatjet1_mass"          );
    ana.tx.createBranch<float>("OS2jet_fatjet2_mass"          );
    ana.tx.createBranch<float>("OS2jet_fatjet1_massSD"        );
    ana.tx.createBranch<float>("OS2jet_fatjet2_massSD"        );
    ana.tx.createBranch<float>("OS2jet_fatjet1_subjet0_pt"    );
    ana.tx.createBranch<float>("OS2jet_fatjet1_subjet1_pt"    );
    ana.tx.createBranch<float>("OS2jet_fatjet1_subjet0_eta"   );
    ana.tx.createBranch<float>("OS2jet_fatjet1_subjet1_eta"   );
    ana.tx.createBranch<float>("OS2jet_fatjet1_subjet0_mass"  );
    ana.tx.createBranch<float>("OS2jet_fatjet1_subjet1_mass"  );
    ana.tx.createBranch<float>("OS2jet_fatjet2_subjet0_pt"    );
    ana.tx.createBranch<float>("OS2jet_fatjet2_subjet1_pt"    );
    ana.tx.createBranch<float>("OS2jet_fatjet2_subjet0_eta"   );
    ana.tx.createBranch<float>("OS2jet_fatjet2_subjet1_eta"   );
    ana.tx.createBranch<float>("OS2jet_fatjet2_subjet0_mass"  );
    ana.tx.createBranch<float>("OS2jet_fatjet2_subjet1_mass"  );
    ana.tx.createBranch<float>("OS2jet_fatjet1_tau1"          );
    ana.tx.createBranch<float>("OS2jet_fatjet1_tau2"          );
    ana.tx.createBranch<float>("OS2jet_fatjet1_tau3"          );
    ana.tx.createBranch<float>("OS2jet_fatjet1_tau21"         );
    ana.tx.createBranch<float>("OS2jet_fatjet2_tau21"         );
    ana.tx.createBranch<float>("OS2jet_fatjet1_tau32"         );
    ana.tx.createBranch<float>("OS2jet_fatjet2_tau32"         );
    ana.tx.createBranch<float>("OS2jet_fatjet2_tau1"          );
    ana.tx.createBranch<float>("OS2jet_fatjet2_tau2"          );
    ana.tx.createBranch<float>("OS2jet_fatjet2_tau3"          );
    ana.tx.createBranch<float>("OS2jet_fatjet1_ll_DR"         );
    ana.tx.createBranch<float>("OS2jet_fatjet2_ll_DR"         );
    ana.tx.createBranch<float>("OS2jet_fatjet12_ll_DRmax"     );
    ana.tx.createBranch<float>("OS2jet_fatjet12_ptvectorsum"  );
    ana.tx.createBranch<float>("OS2jet_fatjet12_ptscalarsum"  );
    ana.tx.createBranch<float>("OS2jet_fatjet12_ptscalarprod" );
    ana.tx.createBranch<float>("OS2jet_fatjet12_mass"         );
    ana.tx.createBranch<float>("OS2jet_fatjet12_masssum"      );
    ana.tx.createBranch<float>("OS2jet_fatjet12_massproduct"  );
    ana.tx.createBranch<float>("OS2jet_fatjet12_massSDsum"    );
    ana.tx.createBranch<float>("OS2jet_fatjet12_massSDproduct");
    ana.tx.createBranch<float>("OS2jet_fatjet12_DR"           );
    ana.tx.createBranch<float>("OS2jet_fatjet12_DPhi"         );
    ana.tx.createBranch<float>("OS2jet_fatjet12_DEta"         );
    ana.tx.createBranch<float>("OS2jet_fatjet1_toptag"        );
    ana.tx.createBranch<float>("OS2jet_fatjet2_toptag"        );
    ana.tx.createBranch<float>("OS2jet_fatjet1_Wtag"          );
    ana.tx.createBranch<float>("OS2jet_fatjet2_Wtag"          );
    ana.tx.createBranch<float>("OS2jet_fatjet1_Ztag"          );
    ana.tx.createBranch<float>("OS2jet_fatjet2_Ztag"          );
    ana.tx.createBranch<float>("OS2jet_fatjet1_Zbbtag"        );
    ana.tx.createBranch<float>("OS2jet_fatjet2_Zbbtag"        );
    //ana.tx.createBranch<float>("OS2jet_fatjet1_WpZtag"        );
    //ana.tx.createBranch<float>("OS2jet_fatjet1_WtZtag"        );
    //ana.tx.createBranch<float>("OS2jet_fatjet2_WpZtag"        );
    //ana.tx.createBranch<float>("OS2jet_fatjet2_WtZtag"        );
    ana.tx.createBranch<float>("OS2jet_fatjet12_WtWtag"       );
    //ana.tx.createBranch<float>("OS2jet_fatjet12_WtZtag"       );
    //ana.tx.createBranch<float>("OS2jet_fatjet12_ZtWtag"       );
    //ana.tx.createBranch<float>("OS2jet_fatjet12_ZtZtag"       );
    ana.tx.createBranch<float>("OS2jet_fatjet12_WpWtag"       );
    //ana.tx.createBranch<float>("OS2jet_fatjet12_WpZtag"       );
    //ana.tx.createBranch<float>("OS2jet_fatjet12_ZpWtag"       );
    //ana.tx.createBranch<float>("OS2jet_fatjet12_ZpZtag"       );
    ana.tx.createBranch<int>  ("OS2jet_jet1_idx"              );
    ana.tx.createBranch<int>  ("OS2jet_jet2_idx"              );
    ana.tx.createBranch<float>("OS2jet_jet1_pt"               );
    ana.tx.createBranch<float>("OS2jet_jet2_pt"               );
    ana.tx.createBranch<float>("OS2jet_jet12_ptvectorsum"     );
    ana.tx.createBranch<float>("OS2jet_jet12_ptscalarsum"     );
    ana.tx.createBranch<float>("OS2jet_jet12_ptscalarprod"    );
    ana.tx.createBranch<float>("OS2jet_jet12_mass"            );
    ana.tx.createBranch<float>("OS2jet_jet12_DR"              );
    ana.tx.createBranch<float>("OS2jet_jet12_DPhi"            );
    ana.tx.createBranch<float>("OS2jet_jet12_DEta"            );
    ana.tx.createBranch<float>("OS2jet_MET"                   );
    ana.tx.createBranch<float>("OS2jet_MET_fatjet1_DPhi"      );
    ana.tx.createBranch<float>("OS2jet_MET_ll_DPhi"           );
    ana.tx.createBranch<float>("OS2jet_fatjet1_Recojet_matchJet_DRmin");
    //ana.tx.createBranch<float>("OS2jet_fatjet2_Recojet_matchJet_DRmin");
    //ana.tx.createBranch<float>("OS2jet_fatjet1_Recojet_Whadr_match_DRmin");
    ana.tx.createBranch<int>  ("OS2jet_fatjet1_genmatching"   );
    ana.tx.createBranch<int>  ("OS2jet_fatjet2_genmatching"   );
    ana.tx.createBranch<int>  ("OS2jet_fatjet1_genmatchingv2" );
    ana.tx.createBranch<int>  ("OS2jet_fatjet2_genmatchingv2" );
    ana.tx.createBranch<int>  ("OS2jet_fatjet1_genmatchingv3" );
    //ana.tx.createBranch<int>  ("OS2jet_fatjet2_genmatchingv3" );
    ana.tx.createBranch<float>("OS2jet_genMVVV"               );
    ana.tx.createBranch<float>("OS2jet_genpTVVV"              );
    ana.tx.createBranch<float>("OS2jet_Mfatjetsleptons"       );
    ana.tx.createBranch<float>("OS2jet_MfatjetsleptonsMET"       );
    ana.tx.createBranch<float>("OS2jet_Mfatjetleptonsjets"       );


    ana.tx.createBranch<float>("OS2jet_MTfatjetsleptonsMET"   );
    ana.tx.createBranch<bool >("OS2jet_fatjet1_tau21cut"      );
    ana.tx.createBranch<bool >("OS2jet_fatjet1_massSDcut"     );
    /*ana.tx.createBranch<bool >("OS2jet_fatjet2_massSDcut"     );
    ana.tx.createBranch<bool >("OS2jet_fatjet1_WtagMcut"      );
    ana.tx.createBranch<bool >("OS2jet_fatjet1_WtagLcut"      );

    ana.tx.createBranch<bool >("OS2jet_fatjet2_WtagMcut"      );
    ana.tx.createBranch<bool >("OS2jet_fatjet2_WtagLcut"      );
    ana.tx.createBranch<bool >("OS2jet_fatjet2_tau21cut"      );
    //ana.tx.createBranch<float>("OS2jet_fatjet2_Recojet_Whadr_match_DRmin");
    ana.tx.createBranch<bool >("OS2jet_fatjet12_ANDmassSDcut" );
    ana.tx.createBranch<bool >("OS2jet_fatjet12_ANDWtagMcut"  );
    ana.tx.createBranch<bool >("OS2jet_fatjet12_ANDWtagLcut"  );
    ana.tx.createBranch<bool >("OS2jet_fatjet12_ANDtau21cut"  );
    ana.tx.createBranch<bool >("OS2jet_fatjet12_ORmassSDcut"  );
    ana.tx.createBranch<bool >("OS2jet_fatjet12_ORWtagMcut"   );
    ana.tx.createBranch<bool >("OS2jet_fatjet12_ORWtagLcut"   );
    ana.tx.createBranch<bool >("OS2jet_fatjet12_ORtau21cut"   );*/
    ana.tx.createBranch<int  >("OS2jet_Nfatjets_vloose"       );
    ana.tx.createBranch<int  >("OS2jet_Nfatjets_loose"        );
    ana.tx.createBranch<int  >("OS2jet_Nfatjets_medium"       );
    ana.tx.createBranch<float>("OS2jet_fatjetwgt_vloose"      );
    ana.tx.createBranch<float>("OS2jet_fatjetwgt_loose"       );
    ana.tx.createBranch<float>("OS2jet_fatjetwgt_medium"      );



   }
>>>>>>> common_ntup_cache
