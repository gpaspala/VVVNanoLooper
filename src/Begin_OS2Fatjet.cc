#include "Begin_OS2Fatjet.h"

void Begin_OS2Fatjet()
{


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
	//ana.tx.createBranch<float>("OS2jet_fatjet1_Recojet_Whadr_match_DRmin");
	ana.tx.createBranch<int>  ("OS2jet_fatjet1_genmatching"   );
	ana.tx.createBranch<int>  ("OS2jet_fatjet2_genmatching"   );
	ana.tx.createBranch<int>  ("OS2jet_fatjet1_genmatchingv2" );
	ana.tx.createBranch<int>  ("OS2jet_fatjet2_genmatchingv2" );
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
                                        ana.tx.setBranch<float>("OS2jet_MET_ll_DPhi",           -999);
                                        ana.tx.setBranch<float>("OS2jet_fatjet1_pt",            -999.);
                                        ana.tx.setBranch<float>("OS2jet_fatjet2_pt",            -999.);
                                        ana.tx.setBranch<float>("OS2jet_fatjet1_mass",          -999.);
                                        ana.tx.setBranch<float>("OS2jet_fatjet2_mass",          -999.);
                                        ana.tx.setBranch<float>("OS2jet_fatjet1_massSD",        -999.);
                                        ana.tx.setBranch<float>("OS2jet_fatjet2_massSD",        -999.);
                                        ana.tx.setBranch<float>("OS2jet_fatjet1_tau1",          -999.);
                                        ana.tx.setBranch<float>("OS2jet_fatjet1_tau2",          -999.);
                                        ana.tx.setBranch<float>("OS2jet_fatjet1_tau3",          -999.);
                                        ana.tx.setBranch<float>("OS2jet_fatjet2_tau1",          -999.);
                                        ana.tx.setBranch<float>("OS2jet_fatjet2_tau2",          -999.);
                                        ana.tx.setBranch<float>("OS2jet_fatjet2_tau3",          -999.);
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
                                        ana.tx.setBranch<int>  ("OS2jet_fatjet1_genmatching",   -999.);
                                        ana.tx.setBranch<int>  ("OS2jet_fatjet2_genmatching",   -999.);
                                        ana.tx.setBranch<int>  ("OS2jet_fatjet1_genmatchingv2", -999.);
                                        ana.tx.setBranch<int>  ("OS2jet_fatjet2_genmatchingv2", -999.);
                                        ana.tx.setBranch<float>("OS2jet_genMVVV",               -999.);
                                        ana.tx.setBranch<float>("OS2jet_genpTVVV",              -999.);
                                        ana.tx.setBranch<float>("OS2jet_Mfatjetsleptons",       -999.);
                                        ana.tx.setBranch<float>("OS2jet_MTfatjetsleptonsMET",   -999.);
                                        /*ana.tx.setBranch<bool >("OS2jet_fatjet1_massSDcut",     false);
                                        //ana.tx.setBranch<bool >("OS2jet_fatjet1_tau21cut",      false);
                                        //ana.tx.setBranch<bool >("OS2jet_fatjet2_massSDcut",     false);
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
                                        ana.tx.setBranch<float>("OS2jet_fatjetwgt_medium",      -999.);
                                        ana.tx.setBranch<float>("OS2jet_LHEWeightSM",           nt.LHEWeight_mg_reweighting()[0]);*/


                               //       now fill branches already here
                                        int nfat= ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4").size();
                                        if(nfat>=2)     ana.tx.setBranch<int>("OS2jet_Jetcontent" ,2);
                                        if(nfat>=1){
                                                        ana.tx.setBranch<float>("OS2jet_fatjet1_pt",            ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[0].Pt());
                                                        ana.tx.setBranch<float>("OS2jet_fatjet1_mass",          ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[0].M());
	                                                      ana.tx.setBranch<float>("OS2jet_fatjet1_massSD",        ana.tx.getBranchLazy<vector<float>>("Common_fatjet_msoftdrop")[0]);
                                                        ana.tx.setBranch<float>("OS2jet_fatjet1_tau21",         ana.tx.getBranchLazy<vector<float>>("Common_fatjet_tau21")[0]);
                                                        ana.tx.setBranch<float>("OS2jet_fatjet1_tau32",         ana.tx.getBranchLazy<vector<float>>("Common_fatjet_tau32")[0]);

                                                   }

                                   return true;
                                  }, UNITY);// trigger SF would go in here instead of UNITY, in principle also btag weight

/////////



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






		// Create histograms used in this category.
		// Please follow the convention of h_<category>_<varname> structure.
		// N.B. Using nbins of size 180 or 360 can provide flexibility as it can be rebinned easily, as 180, 360 are highly composite numbers.

    ana.histograms.addHistogram("NFatjets"        ,  10,   0,    10, [&]() { return      ana.tx.getBranch<int>  ("OS2jet_Nfatjets"                   )   ; } );
		ana.histograms.addHistogram("Fat1_mass"    , 300,   0,   300, [&]() { return      ana.tx.getBranch<float>("OS2jet_fatjet1_mass"            )   ; } );
    ana.histograms.addHistogram("Fat1_massSD"  , 300,   0,   300, [&]() { return      ana.tx.getBranch<float>("OS2jet_fatjet1_massSD"          )   ; } );

		RooUtil::Histograms hists_OSFat2jet;



// Now book cutflow histogram (could be commented out if user does not want.)
//     // N.B. Cutflow histogramming can be CPU consuming.
         ana.cutflow.bookCutflows();
//

// Book histograms to cuts that user wants for this category.
    ana.cutflow.bookHistogramsForCutAndBelow(ana.histograms, "Cut_OS2Fatjet_Preselection");



}
