#include "Begin_OS2Fatjet.h"

void Begin_OS2Fatjet()
{


	//==============================================
	//// Begin_OS2Fatjet:
	//// This function gets called prior to the event looping.
	//// This is where one declares variables, histograms, event selections for the category OS2jet.
	////==============================================
	//

//test
        // Create variables used in this category.
 	//// Please follow the convention of <category>_<varname> structure.


	 	ana.tx.createBranch<int>  ("OS2jet_SFcontent"             );
    ana.tx.createBranch<int>  ("OS2jet_Jetcontent"            );
   	ana.tx.createBranch<int>  ("OS2jet_Nfatjets"              );
    ana.tx.createBranch<int>  ("OS2jet_Njets"                 );
		ana.tx.createBranch<float>("OS2jet_lep1_pt"               );
    ana.tx.createBranch<float>("OS2jet_lep2_pt"               );
		ana.tx.createBranch<float>("OS2jet_fatjet1_pt"            );
    ana.tx.createBranch<float>("OS2jet_fatjet2_pt"            );
    ana.tx.createBranch<float>("OS2jet_fatjet1_mass"          );
    ana.tx.createBranch<float>("OS2jet_fatjet2_mass"          );
    ana.tx.createBranch<float>("OS2jet_fatjet1_massSD"        );
    ana.tx.createBranch<float>("OS2jet_fatjet2_massSD"        );
    ana.tx.createBranch<float>("OS2jet_fatjet1_tau21"         );
    ana.tx.createBranch<float>("OS2jet_fatjet2_tau21"         );
    ana.tx.createBranch<float>("OS2jet_fatjet1_tau32"         );
    ana.tx.createBranch<float>("OS2jet_fatjet2_tau32"         );
    ana.tx.createBranch<float>("OS2jet_fatjet1_ll_DR"         );
    ana.tx.createBranch<float>("OS2jet_fatjet2_ll_DR"         );
    ana.tx.createBranch<float>("OS2jet_fatjet12_ll_DRmax"     );



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


																		//ana.cutflow.addCutToLastActiveCut("Cut_OS2Fatjet_JetSelection",
																    //                                  [&]()
																    //                                  {
																    //                                    //test if there are at least two jets, or one fat jet
																    //                                    if(ana.tx.getBranchLazy<vector<int>>("Common_jet_idxs").size()<2 && ana.tx.getBranchLazy<vector<int>>("Common_fatjet_idxs").size() < 1)
																    //                                      return false;
																    //                                    return true;
																    //                                  }, UNITY);
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
																																				if(     isSFOSZ==true )  ana.tx.setBranch<int>("OS2jet_SFcontent"  ,2);
                                        																else if(isSFOS ==true )  ana.tx.setBranch<int>("OS2jet_SFcontent"  ,1);
                                        																else                     ana.tx.setBranch<int>("OS2jet_SFcontent"  ,0);
																													//now fill branches already here
																													ana.tx.setBranch<int>  ("OS2jet_Jetcontent",            -999);
                                        									ana.tx.setBranch<int>  ("OS2jet_Nfatjets",              -999);
                                        									int nfat= ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4").size();
																													ana.tx.setBranch<int>  ("OS2jet_Nfatjets",              nfat);

																													if(     nfat>=2)     ana.tx.setBranch<int>("OS2jet_Jetcontent" ,2);
                                        									else if(nfat==1)     ana.tx.setBranch<int>("OS2jet_Jetcontent" ,1);

																													//make some default setting - overwrite later

																													ana.tx.setBranch<float>("OS2jet_fatjet1_pt",            -999.);
																													ana.tx.setBranch<float>("OS2jet_fatjet1_mass",          -999.);
																													ana.tx.setBranch<float>("OS2jet_fatjet1_massSD",        -999.);
																													ana.tx.setBranch<float>("OS2jet_fatjet1_tau21",         -999.);
																													ana.tx.setBranch<float>("OS2jet_fatjet1_tau32",         -999.);


																													if(nfat>=1){

																				 										ana.tx.setBranch<float>("OS2jet_fatjet1_pt",            ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[0].Pt());
																				 										ana.tx.setBranch<float>("OS2jet_fatjet1_mass",          ana.tx.getBranchLazy<vector<LorentzVector>>("Common_fatjet_p4")[0].M());
																				 										ana.tx.setBranch<float>("OS2jet_fatjet1_massSD",        ana.tx.getBranchLazy<vector<float>>("Common_fatjet_msoftdrop")[0]);
																				 										ana.tx.setBranch<float>("OS2jet_fatjet1_tau21",         ana.tx.getBranchLazy<vector<float>>("Common_fatjet_tau21")[0]);
																				 										ana.tx.setBranch<float>("OS2jet_fatjet1_tau32",         ana.tx.getBranchLazy<vector<float>>("Common_fatjet_tau32")[0]);

																			 									}


																													return true;
																		 										}, UNITY);// trigger SF would go in here instead of UNITY, in principle also btag weight


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
