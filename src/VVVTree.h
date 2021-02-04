// -*- C++ -*-
// This is a header file generated with the command:
// makeCMS3ClassFiles("/home/users/gpaspala/myTries/VVVNanoLooper/www_eft_newPtcut.root", "t", "VVVTree", "tas", "vvv")

#ifndef VVVTree_H
#define VVVTree_H

#include "Math/GenVector/PtEtaPhiM4D.h"
#include "Math/LorentzVector.h"
#include "Math/Point3D.h"
#include "TMath.h"
#include "TBranch.h"
#include "TTree.h"
#include "TH1F.h"
#include "TFile.h"
#include "TBits.h"
#include <vector> 
#include <unistd.h> 
typedef ROOT::Math::LorentzVector< ROOT::Math::PtEtaPhiM4D<float> > LorentzVector;

using namespace std; 
class VVVTree {
 private: 
 protected: 
  unsigned int index;
//---------------------------------------------------------------------------------
/*                           Common_isData*/  int      Common_isData_;
/*                           Common_isData*/  TBranch *Common_isData_branch;
/*                           Common_isData*/  bool     Common_isData_isLoaded;
//---------------------------------------------------------------------------------
/*                              Common_run*/  int      Common_run_;
/*                              Common_run*/  TBranch *Common_run_branch;
/*                              Common_run*/  bool     Common_run_isLoaded;
//---------------------------------------------------------------------------------
/*                             Common_lumi*/  int      Common_lumi_;
/*                             Common_lumi*/  TBranch *Common_lumi_branch;
/*                             Common_lumi*/  bool     Common_lumi_isLoaded;
//---------------------------------------------------------------------------------
/*                              Common_evt*/  unsigned long long Common_evt_;
/*                              Common_evt*/  TBranch *Common_evt_branch;
/*                              Common_evt*/  bool     Common_evt_isLoaded;
//---------------------------------------------------------------------------------
/*                        Common_genWeight*/  float    Common_genWeight_;
/*                        Common_genWeight*/  TBranch *Common_genWeight_branch;
/*                        Common_genWeight*/  bool     Common_genWeight_isLoaded;
//---------------------------------------------------------------------------------
/*              Common_btagWeight_DeepCSVB*/  float    Common_btagWeight_DeepCSVB_;
/*              Common_btagWeight_DeepCSVB*/  TBranch *Common_btagWeight_DeepCSVB_branch;
/*              Common_btagWeight_DeepCSVB*/  bool     Common_btagWeight_DeepCSVB_isLoaded;
//---------------------------------------------------------------------------------
/*         Common_LHEWeight_mg_reweighting*/  vector<float> *Common_LHEWeight_mg_reweighting_;
/*         Common_LHEWeight_mg_reweighting*/  TBranch *Common_LHEWeight_mg_reweighting_branch;
/*         Common_LHEWeight_mg_reweighting*/  bool     Common_LHEWeight_mg_reweighting_isLoaded;
//---------------------------------------------------------------------------------
/*Common_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ*/  bool     Common_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_;
/*Common_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ*/  TBranch *Common_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_branch;
/*Common_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ*/  bool     Common_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_isLoaded;
//---------------------------------------------------------------------------------
/* Common_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL*/  bool     Common_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_;
/* Common_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL*/  TBranch *Common_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_branch;
/* Common_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL*/  bool     Common_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_isLoaded;
//---------------------------------------------------------------------------------
/*Common_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8*/  bool     Common_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8_;
/*Common_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8*/  TBranch *Common_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8_branch;
/*Common_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8*/  bool     Common_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8_isLoaded;
//---------------------------------------------------------------------------------
/*Common_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ*/  bool     Common_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_;
/*Common_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ*/  TBranch *Common_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_branch;
/*Common_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ*/  bool     Common_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_isLoaded;
//---------------------------------------------------------------------------------
/*Common_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL*/  bool     Common_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_;
/*Common_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL*/  TBranch *Common_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_branch;
/*Common_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL*/  bool     Common_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_isLoaded;
//---------------------------------------------------------------------------------
/*Common_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ*/  bool     Common_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_;
/*Common_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ*/  TBranch *Common_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_branch;
/*Common_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ*/  bool     Common_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_isLoaded;
//---------------------------------------------------------------------------------
/*Common_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL*/  bool     Common_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_;
/*Common_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL*/  TBranch *Common_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_branch;
/*Common_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL*/  bool     Common_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_isLoaded;
//---------------------------------------------------------------------------------
/*Common_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ*/  bool     Common_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_;
/*Common_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ*/  TBranch *Common_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_branch;
/*Common_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ*/  bool     Common_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_isLoaded;
//---------------------------------------------------------------------------------
/*Common_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL*/  bool     Common_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_;
/*Common_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL*/  TBranch *Common_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_branch;
/*Common_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL*/  bool     Common_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_isLoaded;
//---------------------------------------------------------------------------------
/*                     Common_HLT_DoubleEl*/  bool     Common_HLT_DoubleEl_;
/*                     Common_HLT_DoubleEl*/  TBranch *Common_HLT_DoubleEl_branch;
/*                     Common_HLT_DoubleEl*/  bool     Common_HLT_DoubleEl_isLoaded;
//---------------------------------------------------------------------------------
/*                         Common_HLT_MuEG*/  bool     Common_HLT_MuEG_;
/*                         Common_HLT_MuEG*/  TBranch *Common_HLT_MuEG_branch;
/*                         Common_HLT_MuEG*/  bool     Common_HLT_MuEG_isLoaded;
//---------------------------------------------------------------------------------
/*                     Common_HLT_DoubleMu*/  bool     Common_HLT_DoubleMu_;
/*                     Common_HLT_DoubleMu*/  TBranch *Common_HLT_DoubleMu_branch;
/*                     Common_HLT_DoubleMu*/  bool     Common_HLT_DoubleMu_isLoaded;
//---------------------------------------------------------------------------------
/*  Common_pass_duplicate_removal_ee_em_mm*/  bool     Common_pass_duplicate_removal_ee_em_mm_;
/*  Common_pass_duplicate_removal_ee_em_mm*/  TBranch *Common_pass_duplicate_removal_ee_em_mm_branch;
/*  Common_pass_duplicate_removal_ee_em_mm*/  bool     Common_pass_duplicate_removal_ee_em_mm_isLoaded;
//---------------------------------------------------------------------------------
/*  Common_pass_duplicate_removal_mm_em_ee*/  bool     Common_pass_duplicate_removal_mm_em_ee_;
/*  Common_pass_duplicate_removal_mm_em_ee*/  TBranch *Common_pass_duplicate_removal_mm_em_ee_branch;
/*  Common_pass_duplicate_removal_mm_em_ee*/  bool     Common_pass_duplicate_removal_mm_em_ee_isLoaded;
//---------------------------------------------------------------------------------
/*                        Common_noiseFlag*/  bool     Common_noiseFlag_;
/*                        Common_noiseFlag*/  TBranch *Common_noiseFlag_branch;
/*                        Common_noiseFlag*/  bool     Common_noiseFlag_isLoaded;
//---------------------------------------------------------------------------------
/*                      Common_noiseFlagMC*/  bool     Common_noiseFlagMC_;
/*                      Common_noiseFlagMC*/  TBranch *Common_noiseFlagMC_branch;
/*                      Common_noiseFlagMC*/  bool     Common_noiseFlagMC_isLoaded;
//---------------------------------------------------------------------------------
/*                           Common_met_p4*/  ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > *Common_met_p4_;
/*                           Common_met_p4*/  TBranch *Common_met_p4_branch;
/*                           Common_met_p4*/  bool     Common_met_p4_isLoaded;
//---------------------------------------------------------------------------------
/*                      Common_event_lepSF*/  float    Common_event_lepSF_;
/*                      Common_event_lepSF*/  TBranch *Common_event_lepSF_branch;
/*                      Common_event_lepSF*/  bool     Common_event_lepSF_isLoaded;
//---------------------------------------------------------------------------------
/*                  Common_event_lepSFelup*/  float    Common_event_lepSFelup_;
/*                  Common_event_lepSFelup*/  TBranch *Common_event_lepSFelup_branch;
/*                  Common_event_lepSFelup*/  bool     Common_event_lepSFelup_isLoaded;
//---------------------------------------------------------------------------------
/*                  Common_event_lepSFeldn*/  float    Common_event_lepSFeldn_;
/*                  Common_event_lepSFeldn*/  TBranch *Common_event_lepSFeldn_branch;
/*                  Common_event_lepSFeldn*/  bool     Common_event_lepSFeldn_isLoaded;
//---------------------------------------------------------------------------------
/*                  Common_event_lepSFmuup*/  float    Common_event_lepSFmuup_;
/*                  Common_event_lepSFmuup*/  TBranch *Common_event_lepSFmuup_branch;
/*                  Common_event_lepSFmuup*/  bool     Common_event_lepSFmuup_isLoaded;
//---------------------------------------------------------------------------------
/*                  Common_event_lepSFmudn*/  float    Common_event_lepSFmudn_;
/*                  Common_event_lepSFmudn*/  TBranch *Common_event_lepSFmudn_branch;
/*                  Common_event_lepSFmudn*/  bool     Common_event_lepSFmudn_isLoaded;
//---------------------------------------------------------------------------------
/*                           Common_lep_p4*/  vector<ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > > *Common_lep_p4_;
/*                           Common_lep_p4*/  TBranch *Common_lep_p4_branch;
/*                           Common_lep_p4*/  bool     Common_lep_p4_isLoaded;
//---------------------------------------------------------------------------------
/*                         Common_lep_idxs*/  vector<int> *Common_lep_idxs_;
/*                         Common_lep_idxs*/  TBranch *Common_lep_idxs_branch;
/*                         Common_lep_idxs*/  bool     Common_lep_idxs_isLoaded;
//---------------------------------------------------------------------------------
/*                        Common_lep_pdgid*/  vector<int> *Common_lep_pdgid_;
/*                        Common_lep_pdgid*/  TBranch *Common_lep_pdgid_branch;
/*                        Common_lep_pdgid*/  bool     Common_lep_pdgid_isLoaded;
//---------------------------------------------------------------------------------
/*                        Common_lep_tight*/  vector<int> *Common_lep_tight_;
/*                        Common_lep_tight*/  TBranch *Common_lep_tight_branch;
/*                        Common_lep_tight*/  bool     Common_lep_tight_isLoaded;
//---------------------------------------------------------------------------------
/*                          Common_lep_dxy*/  vector<float> *Common_lep_dxy_;
/*                          Common_lep_dxy*/  TBranch *Common_lep_dxy_branch;
/*                          Common_lep_dxy*/  bool     Common_lep_dxy_isLoaded;
//---------------------------------------------------------------------------------
/*                           Common_lep_dz*/  vector<float> *Common_lep_dz_;
/*                           Common_lep_dz*/  TBranch *Common_lep_dz_branch;
/*                           Common_lep_dz*/  bool     Common_lep_dz_isLoaded;
//---------------------------------------------------------------------------------
/*                         Common_lep_ip3d*/  vector<float> *Common_lep_ip3d_;
/*                         Common_lep_ip3d*/  TBranch *Common_lep_ip3d_branch;
/*                         Common_lep_ip3d*/  bool     Common_lep_ip3d_isLoaded;
//---------------------------------------------------------------------------------
/*                        Common_lep_sip3d*/  vector<float> *Common_lep_sip3d_;
/*                        Common_lep_sip3d*/  TBranch *Common_lep_sip3d_branch;
/*                        Common_lep_sip3d*/  bool     Common_lep_sip3d_isLoaded;
//---------------------------------------------------------------------------------
/*                           Common_lep_SF*/  vector<float> *Common_lep_SF_;
/*                           Common_lep_SF*/  TBranch *Common_lep_SF_branch;
/*                           Common_lep_SF*/  bool     Common_lep_SF_isLoaded;
//---------------------------------------------------------------------------------
/*                      Common_lep_SFTight*/  vector<float> *Common_lep_SFTight_;
/*                      Common_lep_SFTight*/  TBranch *Common_lep_SFTight_branch;
/*                      Common_lep_SFTight*/  bool     Common_lep_SFTight_isLoaded;
//---------------------------------------------------------------------------------
/*                         Common_lep_SFdn*/  vector<float> *Common_lep_SFdn_;
/*                         Common_lep_SFdn*/  TBranch *Common_lep_SFdn_branch;
/*                         Common_lep_SFdn*/  bool     Common_lep_SFdn_isLoaded;
//---------------------------------------------------------------------------------
/*                    Common_lep_SFdnTight*/  vector<float> *Common_lep_SFdnTight_;
/*                    Common_lep_SFdnTight*/  TBranch *Common_lep_SFdnTight_branch;
/*                    Common_lep_SFdnTight*/  bool     Common_lep_SFdnTight_isLoaded;
//---------------------------------------------------------------------------------
/*                         Common_lep_SFup*/  vector<float> *Common_lep_SFup_;
/*                         Common_lep_SFup*/  TBranch *Common_lep_SFup_branch;
/*                         Common_lep_SFup*/  bool     Common_lep_SFup_isLoaded;
//---------------------------------------------------------------------------------
/*                    Common_lep_SFupTight*/  vector<float> *Common_lep_SFupTight_;
/*                    Common_lep_SFupTight*/  TBranch *Common_lep_SFupTight_branch;
/*                    Common_lep_SFupTight*/  bool     Common_lep_SFupTight_isLoaded;
//---------------------------------------------------------------------------------
/*                           Common_jet_p4*/  vector<ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > > *Common_jet_p4_;
/*                           Common_jet_p4*/  TBranch *Common_jet_p4_branch;
/*                           Common_jet_p4*/  bool     Common_jet_p4_isLoaded;
//---------------------------------------------------------------------------------
/*                         Common_jet_idxs*/  vector<int> *Common_jet_idxs_;
/*                         Common_jet_idxs*/  TBranch *Common_jet_idxs_branch;
/*                         Common_jet_idxs*/  bool     Common_jet_idxs_isLoaded;
//---------------------------------------------------------------------------------
/*                   Common_jet_passBloose*/  vector<bool> *Common_jet_passBloose_;
/*                   Common_jet_passBloose*/  TBranch *Common_jet_passBloose_branch;
/*                   Common_jet_passBloose*/  bool     Common_jet_passBloose_isLoaded;
//---------------------------------------------------------------------------------
/*                  Common_jet_passBmedium*/  vector<bool> *Common_jet_passBmedium_;
/*                  Common_jet_passBmedium*/  TBranch *Common_jet_passBmedium_branch;
/*                  Common_jet_passBmedium*/  bool     Common_jet_passBmedium_isLoaded;
//---------------------------------------------------------------------------------
/*                   Common_jet_passBtight*/  vector<bool> *Common_jet_passBtight_;
/*                   Common_jet_passBtight*/  TBranch *Common_jet_passBtight_branch;
/*                   Common_jet_passBtight*/  bool     Common_jet_passBtight_isLoaded;
//---------------------------------------------------------------------------------
/*                Common_jet_overlapfatjet*/  vector<int> *Common_jet_overlapfatjet_;
/*                Common_jet_overlapfatjet*/  TBranch *Common_jet_overlapfatjet_branch;
/*                Common_jet_overlapfatjet*/  bool     Common_jet_overlapfatjet_isLoaded;
//---------------------------------------------------------------------------------
/*                        Common_fatjet_p4*/  vector<ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > > *Common_fatjet_p4_;
/*                        Common_fatjet_p4*/  TBranch *Common_fatjet_p4_branch;
/*                        Common_fatjet_p4*/  bool     Common_fatjet_p4_isLoaded;
//---------------------------------------------------------------------------------
/*                      Common_fatjet_idxs*/  vector<int> *Common_fatjet_idxs_;
/*                      Common_fatjet_idxs*/  TBranch *Common_fatjet_idxs_branch;
/*                      Common_fatjet_idxs*/  bool     Common_fatjet_idxs_isLoaded;
//---------------------------------------------------------------------------------
/*                 Common_fatjet_msoftdrop*/  vector<float> *Common_fatjet_msoftdrop_;
/*                 Common_fatjet_msoftdrop*/  TBranch *Common_fatjet_msoftdrop_branch;
/*                 Common_fatjet_msoftdrop*/  bool     Common_fatjet_msoftdrop_isLoaded;
//---------------------------------------------------------------------------------
/*                  Common_fatjet_deepMD_W*/  vector<float> *Common_fatjet_deepMD_W_;
/*                  Common_fatjet_deepMD_W*/  TBranch *Common_fatjet_deepMD_W_branch;
/*                  Common_fatjet_deepMD_W*/  bool     Common_fatjet_deepMD_W_isLoaded;
//---------------------------------------------------------------------------------
/*                    Common_fatjet_deep_W*/  vector<float> *Common_fatjet_deep_W_;
/*                    Common_fatjet_deep_W*/  TBranch *Common_fatjet_deep_W_branch;
/*                    Common_fatjet_deep_W*/  bool     Common_fatjet_deep_W_isLoaded;
//---------------------------------------------------------------------------------
/*                  Common_fatjet_deepMD_Z*/  vector<float> *Common_fatjet_deepMD_Z_;
/*                  Common_fatjet_deepMD_Z*/  TBranch *Common_fatjet_deepMD_Z_branch;
/*                  Common_fatjet_deepMD_Z*/  bool     Common_fatjet_deepMD_Z_isLoaded;
//---------------------------------------------------------------------------------
/*                    Common_fatjet_deep_Z*/  vector<float> *Common_fatjet_deep_Z_;
/*                    Common_fatjet_deep_Z*/  TBranch *Common_fatjet_deep_Z_branch;
/*                    Common_fatjet_deep_Z*/  bool     Common_fatjet_deep_Z_isLoaded;
//---------------------------------------------------------------------------------
/*                  Common_fatjet_deepMD_T*/  vector<float> *Common_fatjet_deepMD_T_;
/*                  Common_fatjet_deepMD_T*/  TBranch *Common_fatjet_deepMD_T_branch;
/*                  Common_fatjet_deepMD_T*/  bool     Common_fatjet_deepMD_T_isLoaded;
//---------------------------------------------------------------------------------
/*                    Common_fatjet_deep_T*/  vector<float> *Common_fatjet_deep_T_;
/*                    Common_fatjet_deep_T*/  TBranch *Common_fatjet_deep_T_branch;
/*                    Common_fatjet_deep_T*/  bool     Common_fatjet_deep_T_isLoaded;
//---------------------------------------------------------------------------------
/*                 Common_fatjet_deepMD_bb*/  vector<float> *Common_fatjet_deepMD_bb_;
/*                 Common_fatjet_deepMD_bb*/  TBranch *Common_fatjet_deepMD_bb_branch;
/*                 Common_fatjet_deepMD_bb*/  bool     Common_fatjet_deepMD_bb_isLoaded;
//---------------------------------------------------------------------------------
/*                      Common_fatjet_tau3*/  vector<float> *Common_fatjet_tau3_;
/*                      Common_fatjet_tau3*/  TBranch *Common_fatjet_tau3_branch;
/*                      Common_fatjet_tau3*/  bool     Common_fatjet_tau3_isLoaded;
//---------------------------------------------------------------------------------
/*                      Common_fatjet_tau2*/  vector<float> *Common_fatjet_tau2_;
/*                      Common_fatjet_tau2*/  TBranch *Common_fatjet_tau2_branch;
/*                      Common_fatjet_tau2*/  bool     Common_fatjet_tau2_isLoaded;
//---------------------------------------------------------------------------------
/*                      Common_fatjet_tau1*/  vector<float> *Common_fatjet_tau1_;
/*                      Common_fatjet_tau1*/  TBranch *Common_fatjet_tau1_branch;
/*                      Common_fatjet_tau1*/  bool     Common_fatjet_tau1_isLoaded;
//---------------------------------------------------------------------------------
/*                     Common_fatjet_tau32*/  vector<float> *Common_fatjet_tau32_;
/*                     Common_fatjet_tau32*/  TBranch *Common_fatjet_tau32_branch;
/*                     Common_fatjet_tau32*/  bool     Common_fatjet_tau32_isLoaded;
//---------------------------------------------------------------------------------
/*                     Common_fatjet_tau21*/  vector<float> *Common_fatjet_tau21_;
/*                     Common_fatjet_tau21*/  TBranch *Common_fatjet_tau21_branch;
/*                     Common_fatjet_tau21*/  bool     Common_fatjet_tau21_isLoaded;
//---------------------------------------------------------------------------------
/*                Common_fatjet_subjet0_pt*/  vector<float> *Common_fatjet_subjet0_pt_;
/*                Common_fatjet_subjet0_pt*/  TBranch *Common_fatjet_subjet0_pt_branch;
/*                Common_fatjet_subjet0_pt*/  bool     Common_fatjet_subjet0_pt_isLoaded;
//---------------------------------------------------------------------------------
/*               Common_fatjet_subjet0_eta*/  vector<float> *Common_fatjet_subjet0_eta_;
/*               Common_fatjet_subjet0_eta*/  TBranch *Common_fatjet_subjet0_eta_branch;
/*               Common_fatjet_subjet0_eta*/  bool     Common_fatjet_subjet0_eta_isLoaded;
//---------------------------------------------------------------------------------
/*               Common_fatjet_subjet0_phi*/  vector<float> *Common_fatjet_subjet0_phi_;
/*               Common_fatjet_subjet0_phi*/  TBranch *Common_fatjet_subjet0_phi_branch;
/*               Common_fatjet_subjet0_phi*/  bool     Common_fatjet_subjet0_phi_isLoaded;
//---------------------------------------------------------------------------------
/*              Common_fatjet_subjet0_mass*/  vector<float> *Common_fatjet_subjet0_mass_;
/*              Common_fatjet_subjet0_mass*/  TBranch *Common_fatjet_subjet0_mass_branch;
/*              Common_fatjet_subjet0_mass*/  bool     Common_fatjet_subjet0_mass_isLoaded;
//---------------------------------------------------------------------------------
/*                Common_fatjet_subjet1_pt*/  vector<float> *Common_fatjet_subjet1_pt_;
/*                Common_fatjet_subjet1_pt*/  TBranch *Common_fatjet_subjet1_pt_branch;
/*                Common_fatjet_subjet1_pt*/  bool     Common_fatjet_subjet1_pt_isLoaded;
//---------------------------------------------------------------------------------
/*               Common_fatjet_subjet1_eta*/  vector<float> *Common_fatjet_subjet1_eta_;
/*               Common_fatjet_subjet1_eta*/  TBranch *Common_fatjet_subjet1_eta_branch;
/*               Common_fatjet_subjet1_eta*/  bool     Common_fatjet_subjet1_eta_isLoaded;
//---------------------------------------------------------------------------------
/*               Common_fatjet_subjet1_phi*/  vector<float> *Common_fatjet_subjet1_phi_;
/*               Common_fatjet_subjet1_phi*/  TBranch *Common_fatjet_subjet1_phi_branch;
/*               Common_fatjet_subjet1_phi*/  bool     Common_fatjet_subjet1_phi_isLoaded;
//---------------------------------------------------------------------------------
/*              Common_fatjet_subjet1_mass*/  vector<float> *Common_fatjet_subjet1_mass_;
/*              Common_fatjet_subjet1_mass*/  TBranch *Common_fatjet_subjet1_mass_branch;
/*              Common_fatjet_subjet1_mass*/  bool     Common_fatjet_subjet1_mass_isLoaded;
//---------------------------------------------------------------------------------
/*                Common_fatjet_subjet0_p4*/  vector<ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > > *Common_fatjet_subjet0_p4_;
/*                Common_fatjet_subjet0_p4*/  TBranch *Common_fatjet_subjet0_p4_branch;
/*                Common_fatjet_subjet0_p4*/  bool     Common_fatjet_subjet0_p4_isLoaded;
//---------------------------------------------------------------------------------
/*                Common_fatjet_subjet1_p4*/  vector<ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > > *Common_fatjet_subjet1_p4_;
/*                Common_fatjet_subjet1_p4*/  TBranch *Common_fatjet_subjet1_p4_branch;
/*                Common_fatjet_subjet1_p4*/  bool     Common_fatjet_subjet1_p4_isLoaded;
//---------------------------------------------------------------------------------
/*                        Common_fatjet_WP*/  vector<int> *Common_fatjet_WP_;
/*                        Common_fatjet_WP*/  TBranch *Common_fatjet_WP_branch;
/*                        Common_fatjet_WP*/  bool     Common_fatjet_WP_isLoaded;
//---------------------------------------------------------------------------------
/*            Common_fatjet_WP_antimasscut*/  vector<int> *Common_fatjet_WP_antimasscut_;
/*            Common_fatjet_WP_antimasscut*/  TBranch *Common_fatjet_WP_antimasscut_branch;
/*            Common_fatjet_WP_antimasscut*/  bool     Common_fatjet_WP_antimasscut_isLoaded;
//---------------------------------------------------------------------------------
/*                  Common_fatjet_SFVLoose*/  vector<float> *Common_fatjet_SFVLoose_;
/*                  Common_fatjet_SFVLoose*/  TBranch *Common_fatjet_SFVLoose_branch;
/*                  Common_fatjet_SFVLoose*/  bool     Common_fatjet_SFVLoose_isLoaded;
//---------------------------------------------------------------------------------
/*                   Common_fatjet_SFLoose*/  vector<float> *Common_fatjet_SFLoose_;
/*                   Common_fatjet_SFLoose*/  TBranch *Common_fatjet_SFLoose_branch;
/*                   Common_fatjet_SFLoose*/  bool     Common_fatjet_SFLoose_isLoaded;
//---------------------------------------------------------------------------------
/*                  Common_fatjet_SFMedium*/  vector<float> *Common_fatjet_SFMedium_;
/*                  Common_fatjet_SFMedium*/  TBranch *Common_fatjet_SFMedium_branch;
/*                  Common_fatjet_SFMedium*/  bool     Common_fatjet_SFMedium_isLoaded;
//---------------------------------------------------------------------------------
/*                   Common_fatjet_SFTight*/  vector<float> *Common_fatjet_SFTight_;
/*                   Common_fatjet_SFTight*/  TBranch *Common_fatjet_SFTight_branch;
/*                   Common_fatjet_SFTight*/  bool     Common_fatjet_SFTight_isLoaded;
//---------------------------------------------------------------------------------
/*                Common_fatjet_SFdnVLoose*/  vector<float> *Common_fatjet_SFdnVLoose_;
/*                Common_fatjet_SFdnVLoose*/  TBranch *Common_fatjet_SFdnVLoose_branch;
/*                Common_fatjet_SFdnVLoose*/  bool     Common_fatjet_SFdnVLoose_isLoaded;
//---------------------------------------------------------------------------------
/*                 Common_fatjet_SFdnLoose*/  vector<float> *Common_fatjet_SFdnLoose_;
/*                 Common_fatjet_SFdnLoose*/  TBranch *Common_fatjet_SFdnLoose_branch;
/*                 Common_fatjet_SFdnLoose*/  bool     Common_fatjet_SFdnLoose_isLoaded;
//---------------------------------------------------------------------------------
/*                Common_fatjet_SFdnMedium*/  vector<float> *Common_fatjet_SFdnMedium_;
/*                Common_fatjet_SFdnMedium*/  TBranch *Common_fatjet_SFdnMedium_branch;
/*                Common_fatjet_SFdnMedium*/  bool     Common_fatjet_SFdnMedium_isLoaded;
//---------------------------------------------------------------------------------
/*                 Common_fatjet_SFdnTight*/  vector<float> *Common_fatjet_SFdnTight_;
/*                 Common_fatjet_SFdnTight*/  TBranch *Common_fatjet_SFdnTight_branch;
/*                 Common_fatjet_SFdnTight*/  bool     Common_fatjet_SFdnTight_isLoaded;
//---------------------------------------------------------------------------------
/*                Common_fatjet_SFupVLoose*/  vector<float> *Common_fatjet_SFupVLoose_;
/*                Common_fatjet_SFupVLoose*/  TBranch *Common_fatjet_SFupVLoose_branch;
/*                Common_fatjet_SFupVLoose*/  bool     Common_fatjet_SFupVLoose_isLoaded;
//---------------------------------------------------------------------------------
/*                 Common_fatjet_SFupLoose*/  vector<float> *Common_fatjet_SFupLoose_;
/*                 Common_fatjet_SFupLoose*/  TBranch *Common_fatjet_SFupLoose_branch;
/*                 Common_fatjet_SFupLoose*/  bool     Common_fatjet_SFupLoose_isLoaded;
//---------------------------------------------------------------------------------
/*                Common_fatjet_SFupMedium*/  vector<float> *Common_fatjet_SFupMedium_;
/*                Common_fatjet_SFupMedium*/  TBranch *Common_fatjet_SFupMedium_branch;
/*                Common_fatjet_SFupMedium*/  bool     Common_fatjet_SFupMedium_isLoaded;
//---------------------------------------------------------------------------------
/*                 Common_fatjet_SFupTight*/  vector<float> *Common_fatjet_SFupTight_;
/*                 Common_fatjet_SFupTight*/  TBranch *Common_fatjet_SFupTight_branch;
/*                 Common_fatjet_SFupTight*/  bool     Common_fatjet_SFupTight_isLoaded;
//---------------------------------------------------------------------------------
/*      Common_eventweight_fatjet_SFVLoose*/  float    Common_eventweight_fatjet_SFVLoose_;
/*      Common_eventweight_fatjet_SFVLoose*/  TBranch *Common_eventweight_fatjet_SFVLoose_branch;
/*      Common_eventweight_fatjet_SFVLoose*/  bool     Common_eventweight_fatjet_SFVLoose_isLoaded;
//---------------------------------------------------------------------------------
/*       Common_eventweight_fatjet_SFLoose*/  float    Common_eventweight_fatjet_SFLoose_;
/*       Common_eventweight_fatjet_SFLoose*/  TBranch *Common_eventweight_fatjet_SFLoose_branch;
/*       Common_eventweight_fatjet_SFLoose*/  bool     Common_eventweight_fatjet_SFLoose_isLoaded;
//---------------------------------------------------------------------------------
/*      Common_eventweight_fatjet_SFMedium*/  float    Common_eventweight_fatjet_SFMedium_;
/*      Common_eventweight_fatjet_SFMedium*/  TBranch *Common_eventweight_fatjet_SFMedium_branch;
/*      Common_eventweight_fatjet_SFMedium*/  bool     Common_eventweight_fatjet_SFMedium_isLoaded;
//---------------------------------------------------------------------------------
/*       Common_eventweight_fatjet_SFTight*/  float    Common_eventweight_fatjet_SFTight_;
/*       Common_eventweight_fatjet_SFTight*/  TBranch *Common_eventweight_fatjet_SFTight_branch;
/*       Common_eventweight_fatjet_SFTight*/  bool     Common_eventweight_fatjet_SFTight_isLoaded;
//---------------------------------------------------------------------------------
/*    Common_eventweight_fatjet_SFdnVLoose*/  float    Common_eventweight_fatjet_SFdnVLoose_;
/*    Common_eventweight_fatjet_SFdnVLoose*/  TBranch *Common_eventweight_fatjet_SFdnVLoose_branch;
/*    Common_eventweight_fatjet_SFdnVLoose*/  bool     Common_eventweight_fatjet_SFdnVLoose_isLoaded;
//---------------------------------------------------------------------------------
/*     Common_eventweight_fatjet_SFdnLoose*/  float    Common_eventweight_fatjet_SFdnLoose_;
/*     Common_eventweight_fatjet_SFdnLoose*/  TBranch *Common_eventweight_fatjet_SFdnLoose_branch;
/*     Common_eventweight_fatjet_SFdnLoose*/  bool     Common_eventweight_fatjet_SFdnLoose_isLoaded;
//---------------------------------------------------------------------------------
/*    Common_eventweight_fatjet_SFdnMedium*/  float    Common_eventweight_fatjet_SFdnMedium_;
/*    Common_eventweight_fatjet_SFdnMedium*/  TBranch *Common_eventweight_fatjet_SFdnMedium_branch;
/*    Common_eventweight_fatjet_SFdnMedium*/  bool     Common_eventweight_fatjet_SFdnMedium_isLoaded;
//---------------------------------------------------------------------------------
/*     Common_eventweight_fatjet_SFdnTight*/  float    Common_eventweight_fatjet_SFdnTight_;
/*     Common_eventweight_fatjet_SFdnTight*/  TBranch *Common_eventweight_fatjet_SFdnTight_branch;
/*     Common_eventweight_fatjet_SFdnTight*/  bool     Common_eventweight_fatjet_SFdnTight_isLoaded;
//---------------------------------------------------------------------------------
/*    Common_eventweight_fatjet_SFupVLoose*/  float    Common_eventweight_fatjet_SFupVLoose_;
/*    Common_eventweight_fatjet_SFupVLoose*/  TBranch *Common_eventweight_fatjet_SFupVLoose_branch;
/*    Common_eventweight_fatjet_SFupVLoose*/  bool     Common_eventweight_fatjet_SFupVLoose_isLoaded;
//---------------------------------------------------------------------------------
/*     Common_eventweight_fatjet_SFupLoose*/  float    Common_eventweight_fatjet_SFupLoose_;
/*     Common_eventweight_fatjet_SFupLoose*/  TBranch *Common_eventweight_fatjet_SFupLoose_branch;
/*     Common_eventweight_fatjet_SFupLoose*/  bool     Common_eventweight_fatjet_SFupLoose_isLoaded;
//---------------------------------------------------------------------------------
/*    Common_eventweight_fatjet_SFupMedium*/  float    Common_eventweight_fatjet_SFupMedium_;
/*    Common_eventweight_fatjet_SFupMedium*/  TBranch *Common_eventweight_fatjet_SFupMedium_branch;
/*    Common_eventweight_fatjet_SFupMedium*/  bool     Common_eventweight_fatjet_SFupMedium_isLoaded;
//---------------------------------------------------------------------------------
/*     Common_eventweight_fatjet_SFupTight*/  float    Common_eventweight_fatjet_SFupTight_;
/*     Common_eventweight_fatjet_SFupTight*/  TBranch *Common_eventweight_fatjet_SFupTight_branch;
/*     Common_eventweight_fatjet_SFupTight*/  bool     Common_eventweight_fatjet_SFupTight_isLoaded;
//---------------------------------------------------------------------------------
/*                         Common_nb_loose*/  int      Common_nb_loose_;
/*                         Common_nb_loose*/  TBranch *Common_nb_loose_branch;
/*                         Common_nb_loose*/  bool     Common_nb_loose_isLoaded;
//---------------------------------------------------------------------------------
/*                        Common_nb_medium*/  int      Common_nb_medium_;
/*                        Common_nb_medium*/  TBranch *Common_nb_medium_branch;
/*                        Common_nb_medium*/  bool     Common_nb_medium_isLoaded;
//---------------------------------------------------------------------------------
/*                         Common_nb_tight*/  int      Common_nb_tight_;
/*                         Common_nb_tight*/  TBranch *Common_nb_tight_branch;
/*                         Common_nb_tight*/  bool     Common_nb_tight_isLoaded;
//---------------------------------------------------------------------------------
/*                          Common_gen_idx*/  vector<int> *Common_gen_idx_;
/*                          Common_gen_idx*/  TBranch *Common_gen_idx_branch;
/*                          Common_gen_idx*/  bool     Common_gen_idx_isLoaded;
//---------------------------------------------------------------------------------
/*                   Common_gen_mother_idx*/  vector<int> *Common_gen_mother_idx_;
/*                   Common_gen_mother_idx*/  TBranch *Common_gen_mother_idx_branch;
/*                   Common_gen_mother_idx*/  bool     Common_gen_mother_idx_isLoaded;
//---------------------------------------------------------------------------------
/*                    Common_gen_mother_id*/  vector<int> *Common_gen_mother_id_;
/*                    Common_gen_mother_id*/  TBranch *Common_gen_mother_id_branch;
/*                    Common_gen_mother_id*/  bool     Common_gen_mother_id_isLoaded;
//---------------------------------------------------------------------------------
/*                        Common_gen_pdgid*/  vector<int> *Common_gen_pdgid_;
/*                        Common_gen_pdgid*/  TBranch *Common_gen_pdgid_branch;
/*                        Common_gen_pdgid*/  bool     Common_gen_pdgid_isLoaded;
//---------------------------------------------------------------------------------
/*                          Common_gen_p4s*/  vector<ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > > *Common_gen_p4s_;
/*                          Common_gen_p4s*/  TBranch *Common_gen_p4s_branch;
/*                          Common_gen_p4s*/  bool     Common_gen_p4s_isLoaded;
//---------------------------------------------------------------------------------
/*                 Common_gen_vvvdecay_idx*/  vector<int> *Common_gen_vvvdecay_idx_;
/*                 Common_gen_vvvdecay_idx*/  TBranch *Common_gen_vvvdecay_idx_branch;
/*                 Common_gen_vvvdecay_idx*/  bool     Common_gen_vvvdecay_idx_isLoaded;
//---------------------------------------------------------------------------------
/*          Common_gen_vvvdecay_mother_idx*/  vector<int> *Common_gen_vvvdecay_mother_idx_;
/*          Common_gen_vvvdecay_mother_idx*/  TBranch *Common_gen_vvvdecay_mother_idx_branch;
/*          Common_gen_vvvdecay_mother_idx*/  bool     Common_gen_vvvdecay_mother_idx_isLoaded;
//---------------------------------------------------------------------------------
/*           Common_gen_vvvdecay_mother_id*/  vector<int> *Common_gen_vvvdecay_mother_id_;
/*           Common_gen_vvvdecay_mother_id*/  TBranch *Common_gen_vvvdecay_mother_id_branch;
/*           Common_gen_vvvdecay_mother_id*/  bool     Common_gen_vvvdecay_mother_id_isLoaded;
//---------------------------------------------------------------------------------
/*               Common_gen_vvvdecay_pdgid*/  vector<int> *Common_gen_vvvdecay_pdgid_;
/*               Common_gen_vvvdecay_pdgid*/  TBranch *Common_gen_vvvdecay_pdgid_branch;
/*               Common_gen_vvvdecay_pdgid*/  bool     Common_gen_vvvdecay_pdgid_isLoaded;
//---------------------------------------------------------------------------------
/*                 Common_gen_vvvdecay_p4s*/  vector<ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > > *Common_gen_vvvdecay_p4s_;
/*                 Common_gen_vvvdecay_p4s*/  TBranch *Common_gen_vvvdecay_p4s_branch;
/*                 Common_gen_vvvdecay_p4s*/  bool     Common_gen_vvvdecay_p4s_isLoaded;
//---------------------------------------------------------------------------------
/*          Common_gen_vvvdecay_taudecayid*/  vector<int> *Common_gen_vvvdecay_taudecayid_;
/*          Common_gen_vvvdecay_taudecayid*/  TBranch *Common_gen_vvvdecay_taudecayid_branch;
/*          Common_gen_vvvdecay_taudecayid*/  bool     Common_gen_vvvdecay_taudecayid_isLoaded;
//---------------------------------------------------------------------------------
/*                              Common_n_W*/  int      Common_n_W_;
/*                              Common_n_W*/  TBranch *Common_n_W_branch;
/*                              Common_n_W*/  bool     Common_n_W_isLoaded;
//---------------------------------------------------------------------------------
/*                              Common_n_Z*/  int      Common_n_Z_;
/*                              Common_n_Z*/  TBranch *Common_n_Z_branch;
/*                              Common_n_Z*/  bool     Common_n_Z_isLoaded;
//---------------------------------------------------------------------------------
/*                          Common_n_lep_Z*/  int      Common_n_lep_Z_;
/*                          Common_n_lep_Z*/  TBranch *Common_n_lep_Z_branch;
/*                          Common_n_lep_Z*/  bool     Common_n_lep_Z_isLoaded;
//---------------------------------------------------------------------------------
/*                       Common_n_leptau_Z*/  int      Common_n_leptau_Z_;
/*                       Common_n_leptau_Z*/  TBranch *Common_n_leptau_Z_branch;
/*                       Common_n_leptau_Z*/  bool     Common_n_leptau_Z_isLoaded;
//---------------------------------------------------------------------------------
/*                       Common_n_hadtau_Z*/  int      Common_n_hadtau_Z_;
/*                       Common_n_hadtau_Z*/  TBranch *Common_n_hadtau_Z_branch;
/*                       Common_n_hadtau_Z*/  bool     Common_n_hadtau_Z_isLoaded;
//---------------------------------------------------------------------------------
/*                           Common_n_nu_Z*/  int      Common_n_nu_Z_;
/*                           Common_n_nu_Z*/  TBranch *Common_n_nu_Z_branch;
/*                           Common_n_nu_Z*/  bool     Common_n_nu_Z_isLoaded;
//---------------------------------------------------------------------------------
/*                            Common_n_b_Z*/  int      Common_n_b_Z_;
/*                            Common_n_b_Z*/  TBranch *Common_n_b_Z_branch;
/*                            Common_n_b_Z*/  bool     Common_n_b_Z_isLoaded;
//---------------------------------------------------------------------------------
/*                          Common_n_lep_W*/  int      Common_n_lep_W_;
/*                          Common_n_lep_W*/  TBranch *Common_n_lep_W_branch;
/*                          Common_n_lep_W*/  bool     Common_n_lep_W_isLoaded;
//---------------------------------------------------------------------------------
/*                       Common_n_leptau_W*/  int      Common_n_leptau_W_;
/*                       Common_n_leptau_W*/  TBranch *Common_n_leptau_W_branch;
/*                       Common_n_leptau_W*/  bool     Common_n_leptau_W_isLoaded;
//---------------------------------------------------------------------------------
/*                       Common_n_hadtau_W*/  int      Common_n_hadtau_W_;
/*                       Common_n_hadtau_W*/  TBranch *Common_n_hadtau_W_branch;
/*                       Common_n_hadtau_W*/  bool     Common_n_hadtau_W_isLoaded;
//---------------------------------------------------------------------------------
/*                        Common_haslepWSS*/  bool     Common_haslepWSS_;
/*                        Common_haslepWSS*/  TBranch *Common_haslepWSS_branch;
/*                        Common_haslepWSS*/  bool     Common_haslepWSS_isLoaded;
//---------------------------------------------------------------------------------
/*                            Common_genHT*/  float    Common_genHT_;
/*                            Common_genHT*/  TBranch *Common_genHT_branch;
/*                            Common_genHT*/  bool     Common_genHT_isLoaded;
//---------------------------------------------------------------------------------
/*                  Common_gen_n_light_lep*/  int      Common_gen_n_light_lep_;
/*                  Common_gen_n_light_lep*/  TBranch *Common_gen_n_light_lep_branch;
/*                  Common_gen_n_light_lep*/  bool     Common_gen_n_light_lep_isLoaded;
//---------------------------------------------------------------------------------
/*                   Common_gen_VH_channel*/  int      Common_gen_VH_channel_;
/*                   Common_gen_VH_channel*/  TBranch *Common_gen_VH_channel_branch;
/*                   Common_gen_VH_channel*/  bool     Common_gen_VH_channel_isLoaded;
//---------------------------------------------------------------------------------
/*                Cut_4LepMET_Preselection*/  bool     Cut_4LepMET_Preselection_;
/*                Cut_4LepMET_Preselection*/  TBranch *Cut_4LepMET_Preselection_branch;
/*                Cut_4LepMET_Preselection*/  bool     Cut_4LepMET_Preselection_isLoaded;
//---------------------------------------------------------------------------------
/*              Cut_OS2Fatjet_Preselection*/  bool     Cut_OS2Fatjet_Preselection_;
/*              Cut_OS2Fatjet_Preselection*/  TBranch *Cut_OS2Fatjet_Preselection_branch;
/*              Cut_OS2Fatjet_Preselection*/  bool     Cut_OS2Fatjet_Preselection_isLoaded;
//---------------------------------------------------------------------------------
/*   Cut_OS2Fatjet_Preselection_genmatched*/  bool     Cut_OS2Fatjet_Preselection_genmatched_;
/*   Cut_OS2Fatjet_Preselection_genmatched*/  TBranch *Cut_OS2Fatjet_Preselection_genmatched_branch;
/*   Cut_OS2Fatjet_Preselection_genmatched*/  bool     Cut_OS2Fatjet_Preselection_genmatched_isLoaded;
//---------------------------------------------------------------------------------
/*            Cut_OS2Fatjet_OFPreselection*/  bool     Cut_OS2Fatjet_OFPreselection_;
/*            Cut_OS2Fatjet_OFPreselection*/  TBranch *Cut_OS2Fatjet_OFPreselection_branch;
/*            Cut_OS2Fatjet_OFPreselection*/  bool     Cut_OS2Fatjet_OFPreselection_isLoaded;
//---------------------------------------------------------------------------------
/*                   Cut_OS2Fatjet_OF2jets*/  bool     Cut_OS2Fatjet_OF2jets_;
/*                   Cut_OS2Fatjet_OF2jets*/  TBranch *Cut_OS2Fatjet_OF2jets_branch;
/*                   Cut_OS2Fatjet_OF2jets*/  bool     Cut_OS2Fatjet_OF2jets_isLoaded;
//---------------------------------------------------------------------------------
/*                 Cut_OS2Fatjet_OF1fatjet*/  bool     Cut_OS2Fatjet_OF1fatjet_;
/*                 Cut_OS2Fatjet_OF1fatjet*/  TBranch *Cut_OS2Fatjet_OF1fatjet_branch;
/*                 Cut_OS2Fatjet_OF1fatjet*/  bool     Cut_OS2Fatjet_OF1fatjet_isLoaded;
//---------------------------------------------------------------------------------
/*                        OS2jet_SFcontent*/  int      OS2jet_SFcontent_;
/*                        OS2jet_SFcontent*/  TBranch *OS2jet_SFcontent_branch;
/*                        OS2jet_SFcontent*/  bool     OS2jet_SFcontent_isLoaded;
//---------------------------------------------------------------------------------
/*                  Cut_4LepMET_emuChannel*/  bool     Cut_4LepMET_emuChannel_;
/*                  Cut_4LepMET_emuChannel*/  TBranch *Cut_4LepMET_emuChannel_branch;
/*                  Cut_4LepMET_emuChannel*/  bool     Cut_4LepMET_emuChannel_isLoaded;
//---------------------------------------------------------------------------------
/*                       OS2jet_Jetcontent*/  int      OS2jet_Jetcontent_;
/*                       OS2jet_Jetcontent*/  TBranch *OS2jet_Jetcontent_branch;
/*                       OS2jet_Jetcontent*/  bool     OS2jet_Jetcontent_isLoaded;
//---------------------------------------------------------------------------------
/*                 Cut_4LepMET_offzChannel*/  bool     Cut_4LepMET_offzChannel_;
/*                 Cut_4LepMET_offzChannel*/  TBranch *Cut_4LepMET_offzChannel_branch;
/*                 Cut_4LepMET_offzChannel*/  bool     Cut_4LepMET_offzChannel_isLoaded;
//---------------------------------------------------------------------------------
/*                         OS2jet_Nfatjets*/  int      OS2jet_Nfatjets_;
/*                         OS2jet_Nfatjets*/  TBranch *OS2jet_Nfatjets_branch;
/*                         OS2jet_Nfatjets*/  bool     OS2jet_Nfatjets_isLoaded;
//---------------------------------------------------------------------------------
/*                  Cut_4LepMET_onzChannel*/  bool     Cut_4LepMET_onzChannel_;
/*                  Cut_4LepMET_onzChannel*/  TBranch *Cut_4LepMET_onzChannel_branch;
/*                  Cut_4LepMET_onzChannel*/  bool     Cut_4LepMET_onzChannel_isLoaded;
//---------------------------------------------------------------------------------
/*                            OS2jet_Njets*/  int      OS2jet_Njets_;
/*                            OS2jet_Njets*/  TBranch *OS2jet_Njets_branch;
/*                            OS2jet_Njets*/  bool     OS2jet_Njets_isLoaded;
//---------------------------------------------------------------------------------
/*          Cut_4LepMET_onzChannel_HighMET*/  bool     Cut_4LepMET_onzChannel_HighMET_;
/*          Cut_4LepMET_onzChannel_HighMET*/  TBranch *Cut_4LepMET_onzChannel_HighMET_branch;
/*          Cut_4LepMET_onzChannel_HighMET*/  bool     Cut_4LepMET_onzChannel_HighMET_isLoaded;
//---------------------------------------------------------------------------------
/*                         OS2jet_Nbjetsv1*/  int      OS2jet_Nbjetsv1_;
/*                         OS2jet_Nbjetsv1*/  TBranch *OS2jet_Nbjetsv1_branch;
/*                         OS2jet_Nbjetsv1*/  bool     OS2jet_Nbjetsv1_isLoaded;
//---------------------------------------------------------------------------------
/*             Var_4LepMET_Zcand_lep_idx_0*/  int      Var_4LepMET_Zcand_lep_idx_0_;
/*             Var_4LepMET_Zcand_lep_idx_0*/  TBranch *Var_4LepMET_Zcand_lep_idx_0_branch;
/*             Var_4LepMET_Zcand_lep_idx_0*/  bool     Var_4LepMET_Zcand_lep_idx_0_isLoaded;
//---------------------------------------------------------------------------------
/*                         OS2jet_Nbjetsv2*/  int      OS2jet_Nbjetsv2_;
/*                         OS2jet_Nbjetsv2*/  TBranch *OS2jet_Nbjetsv2_branch;
/*                         OS2jet_Nbjetsv2*/  bool     OS2jet_Nbjetsv2_isLoaded;
//---------------------------------------------------------------------------------
/*           Var_4LepMET_Zcand_lep_pdgid_0*/  int      Var_4LepMET_Zcand_lep_pdgid_0_;
/*           Var_4LepMET_Zcand_lep_pdgid_0*/  TBranch *Var_4LepMET_Zcand_lep_pdgid_0_branch;
/*           Var_4LepMET_Zcand_lep_pdgid_0*/  bool     Var_4LepMET_Zcand_lep_pdgid_0_isLoaded;
//---------------------------------------------------------------------------------
/*                        OS2jet_fatjet_pt*/  float    OS2jet_fatjet_pt_;
/*                        OS2jet_fatjet_pt*/  TBranch *OS2jet_fatjet_pt_branch;
/*                        OS2jet_fatjet_pt*/  bool     OS2jet_fatjet_pt_isLoaded;
//---------------------------------------------------------------------------------
/*              Var_4LepMET_Zcand_lep_p4_0*/  ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > *Var_4LepMET_Zcand_lep_p4_0_;
/*              Var_4LepMET_Zcand_lep_p4_0*/  TBranch *Var_4LepMET_Zcand_lep_p4_0_branch;
/*              Var_4LepMET_Zcand_lep_p4_0*/  bool     Var_4LepMET_Zcand_lep_p4_0_isLoaded;
//---------------------------------------------------------------------------------
/*                          OS2jet_lep1_pt*/  float    OS2jet_lep1_pt_;
/*                          OS2jet_lep1_pt*/  TBranch *OS2jet_lep1_pt_branch;
/*                          OS2jet_lep1_pt*/  bool     OS2jet_lep1_pt_isLoaded;
//---------------------------------------------------------------------------------
/*             Var_4LepMET_Zcand_lep_idx_1*/  int      Var_4LepMET_Zcand_lep_idx_1_;
/*             Var_4LepMET_Zcand_lep_idx_1*/  TBranch *Var_4LepMET_Zcand_lep_idx_1_branch;
/*             Var_4LepMET_Zcand_lep_idx_1*/  bool     Var_4LepMET_Zcand_lep_idx_1_isLoaded;
//---------------------------------------------------------------------------------
/*                          OS2jet_lep2_pt*/  float    OS2jet_lep2_pt_;
/*                          OS2jet_lep2_pt*/  TBranch *OS2jet_lep2_pt_branch;
/*                          OS2jet_lep2_pt*/  bool     OS2jet_lep2_pt_isLoaded;
//---------------------------------------------------------------------------------
/*           Var_4LepMET_Zcand_lep_pdgid_1*/  int      Var_4LepMET_Zcand_lep_pdgid_1_;
/*           Var_4LepMET_Zcand_lep_pdgid_1*/  TBranch *Var_4LepMET_Zcand_lep_pdgid_1_branch;
/*           Var_4LepMET_Zcand_lep_pdgid_1*/  bool     Var_4LepMET_Zcand_lep_pdgid_1_isLoaded;
//---------------------------------------------------------------------------------
/*                OS2jet_lep12_ptvectorsum*/  float    OS2jet_lep12_ptvectorsum_;
/*                OS2jet_lep12_ptvectorsum*/  TBranch *OS2jet_lep12_ptvectorsum_branch;
/*                OS2jet_lep12_ptvectorsum*/  bool     OS2jet_lep12_ptvectorsum_isLoaded;
//---------------------------------------------------------------------------------
/*              Var_4LepMET_Zcand_lep_p4_1*/  ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > *Var_4LepMET_Zcand_lep_p4_1_;
/*              Var_4LepMET_Zcand_lep_p4_1*/  TBranch *Var_4LepMET_Zcand_lep_p4_1_branch;
/*              Var_4LepMET_Zcand_lep_p4_1*/  bool     Var_4LepMET_Zcand_lep_p4_1_isLoaded;
//---------------------------------------------------------------------------------
/*                OS2jet_lep12_ptscalarsum*/  float    OS2jet_lep12_ptscalarsum_;
/*                OS2jet_lep12_ptscalarsum*/  TBranch *OS2jet_lep12_ptscalarsum_branch;
/*                OS2jet_lep12_ptscalarsum*/  bool     OS2jet_lep12_ptscalarsum_isLoaded;
//---------------------------------------------------------------------------------
/*                   Var_4LepMET_Zcand_mll*/  float    Var_4LepMET_Zcand_mll_;
/*                   Var_4LepMET_Zcand_mll*/  TBranch *Var_4LepMET_Zcand_mll_branch;
/*                   Var_4LepMET_Zcand_mll*/  bool     Var_4LepMET_Zcand_mll_isLoaded;
//---------------------------------------------------------------------------------
/*               OS2jet_lep12_ptscalarprod*/  float    OS2jet_lep12_ptscalarprod_;
/*               OS2jet_lep12_ptscalarprod*/  TBranch *OS2jet_lep12_ptscalarprod_branch;
/*               OS2jet_lep12_ptscalarprod*/  bool     OS2jet_lep12_ptscalarprod_isLoaded;
//---------------------------------------------------------------------------------
/*             Var_4LepMET_other_lep_idx_0*/  int      Var_4LepMET_other_lep_idx_0_;
/*             Var_4LepMET_other_lep_idx_0*/  TBranch *Var_4LepMET_other_lep_idx_0_branch;
/*             Var_4LepMET_other_lep_idx_0*/  bool     Var_4LepMET_other_lep_idx_0_isLoaded;
//---------------------------------------------------------------------------------
/*                       OS2jet_lep12_mass*/  float    OS2jet_lep12_mass_;
/*                       OS2jet_lep12_mass*/  TBranch *OS2jet_lep12_mass_branch;
/*                       OS2jet_lep12_mass*/  bool     OS2jet_lep12_mass_isLoaded;
//---------------------------------------------------------------------------------
/*           Var_4LepMET_other_lep_pdgid_0*/  int      Var_4LepMET_other_lep_pdgid_0_;
/*           Var_4LepMET_other_lep_pdgid_0*/  TBranch *Var_4LepMET_other_lep_pdgid_0_branch;
/*           Var_4LepMET_other_lep_pdgid_0*/  bool     Var_4LepMET_other_lep_pdgid_0_isLoaded;
//---------------------------------------------------------------------------------
/*                         OS2jet_lep12_DR*/  float    OS2jet_lep12_DR_;
/*                         OS2jet_lep12_DR*/  TBranch *OS2jet_lep12_DR_branch;
/*                         OS2jet_lep12_DR*/  bool     OS2jet_lep12_DR_isLoaded;
//---------------------------------------------------------------------------------
/*              Var_4LepMET_other_lep_p4_0*/  ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > *Var_4LepMET_other_lep_p4_0_;
/*              Var_4LepMET_other_lep_p4_0*/  TBranch *Var_4LepMET_other_lep_p4_0_branch;
/*              Var_4LepMET_other_lep_p4_0*/  bool     Var_4LepMET_other_lep_p4_0_isLoaded;
//---------------------------------------------------------------------------------
/*                       OS2jet_lep12_DPhi*/  float    OS2jet_lep12_DPhi_;
/*                       OS2jet_lep12_DPhi*/  TBranch *OS2jet_lep12_DPhi_branch;
/*                       OS2jet_lep12_DPhi*/  bool     OS2jet_lep12_DPhi_isLoaded;
//---------------------------------------------------------------------------------
/*             Var_4LepMET_other_lep_idx_1*/  int      Var_4LepMET_other_lep_idx_1_;
/*             Var_4LepMET_other_lep_idx_1*/  TBranch *Var_4LepMET_other_lep_idx_1_branch;
/*             Var_4LepMET_other_lep_idx_1*/  bool     Var_4LepMET_other_lep_idx_1_isLoaded;
//---------------------------------------------------------------------------------
/*                       OS2jet_lep12_Deta*/  float    OS2jet_lep12_Deta_;
/*                       OS2jet_lep12_Deta*/  TBranch *OS2jet_lep12_Deta_branch;
/*                       OS2jet_lep12_Deta*/  bool     OS2jet_lep12_Deta_isLoaded;
//---------------------------------------------------------------------------------
/*           Var_4LepMET_other_lep_pdgid_1*/  int      Var_4LepMET_other_lep_pdgid_1_;
/*           Var_4LepMET_other_lep_pdgid_1*/  TBranch *Var_4LepMET_other_lep_pdgid_1_branch;
/*           Var_4LepMET_other_lep_pdgid_1*/  bool     Var_4LepMET_other_lep_pdgid_1_isLoaded;
//---------------------------------------------------------------------------------
/*                       OS2jet_fatjet1_pt*/  float    OS2jet_fatjet1_pt_;
/*                       OS2jet_fatjet1_pt*/  TBranch *OS2jet_fatjet1_pt_branch;
/*                       OS2jet_fatjet1_pt*/  bool     OS2jet_fatjet1_pt_isLoaded;
//---------------------------------------------------------------------------------
/*              Var_4LepMET_other_lep_p4_1*/  ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > *Var_4LepMET_other_lep_p4_1_;
/*              Var_4LepMET_other_lep_p4_1*/  TBranch *Var_4LepMET_other_lep_p4_1_branch;
/*              Var_4LepMET_other_lep_p4_1*/  bool     Var_4LepMET_other_lep_p4_1_isLoaded;
//---------------------------------------------------------------------------------
/*                       OS2jet_fatjet2_pt*/  float    OS2jet_fatjet2_pt_;
/*                       OS2jet_fatjet2_pt*/  TBranch *OS2jet_fatjet2_pt_branch;
/*                       OS2jet_fatjet2_pt*/  bool     OS2jet_fatjet2_pt_isLoaded;
//---------------------------------------------------------------------------------
/*                   Var_4LepMET_other_mll*/  float    Var_4LepMET_other_mll_;
/*                   Var_4LepMET_other_mll*/  TBranch *Var_4LepMET_other_mll_branch;
/*                   Var_4LepMET_other_mll*/  bool     Var_4LepMET_other_mll_isLoaded;
//---------------------------------------------------------------------------------
/*                     OS2jet_fatjet1_mass*/  float    OS2jet_fatjet1_mass_;
/*                     OS2jet_fatjet1_mass*/  TBranch *OS2jet_fatjet1_mass_branch;
/*                     OS2jet_fatjet1_mass*/  bool     OS2jet_fatjet1_mass_isLoaded;
//---------------------------------------------------------------------------------
/*                         Var_4LepMET_mt2*/  float    Var_4LepMET_mt2_;
/*                         Var_4LepMET_mt2*/  TBranch *Var_4LepMET_mt2_branch;
/*                         Var_4LepMET_mt2*/  bool     Var_4LepMET_mt2_isLoaded;
//---------------------------------------------------------------------------------
/*                     OS2jet_fatjet2_mass*/  float    OS2jet_fatjet2_mass_;
/*                     OS2jet_fatjet2_mass*/  TBranch *OS2jet_fatjet2_mass_branch;
/*                     OS2jet_fatjet2_mass*/  bool     OS2jet_fatjet2_mass_isLoaded;
//---------------------------------------------------------------------------------
/*                   OS2jet_fatjet1_massSD*/  float    OS2jet_fatjet1_massSD_;
/*                   OS2jet_fatjet1_massSD*/  TBranch *OS2jet_fatjet1_massSD_branch;
/*                   OS2jet_fatjet1_massSD*/  bool     OS2jet_fatjet1_massSD_isLoaded;
//---------------------------------------------------------------------------------
/*                   OS2jet_fatjet2_massSD*/  float    OS2jet_fatjet2_massSD_;
/*                   OS2jet_fatjet2_massSD*/  TBranch *OS2jet_fatjet2_massSD_branch;
/*                   OS2jet_fatjet2_massSD*/  bool     OS2jet_fatjet2_massSD_isLoaded;
//---------------------------------------------------------------------------------
/*               OS2jet_fatjet1_subjet0_pt*/  float    OS2jet_fatjet1_subjet0_pt_;
/*               OS2jet_fatjet1_subjet0_pt*/  TBranch *OS2jet_fatjet1_subjet0_pt_branch;
/*               OS2jet_fatjet1_subjet0_pt*/  bool     OS2jet_fatjet1_subjet0_pt_isLoaded;
//---------------------------------------------------------------------------------
/*               OS2jet_fatjet1_subjet1_pt*/  float    OS2jet_fatjet1_subjet1_pt_;
/*               OS2jet_fatjet1_subjet1_pt*/  TBranch *OS2jet_fatjet1_subjet1_pt_branch;
/*               OS2jet_fatjet1_subjet1_pt*/  bool     OS2jet_fatjet1_subjet1_pt_isLoaded;
//---------------------------------------------------------------------------------
/*              OS2jet_fatjet1_subjet0_eta*/  float    OS2jet_fatjet1_subjet0_eta_;
/*              OS2jet_fatjet1_subjet0_eta*/  TBranch *OS2jet_fatjet1_subjet0_eta_branch;
/*              OS2jet_fatjet1_subjet0_eta*/  bool     OS2jet_fatjet1_subjet0_eta_isLoaded;
//---------------------------------------------------------------------------------
/*              OS2jet_fatjet1_subjet1_eta*/  float    OS2jet_fatjet1_subjet1_eta_;
/*              OS2jet_fatjet1_subjet1_eta*/  TBranch *OS2jet_fatjet1_subjet1_eta_branch;
/*              OS2jet_fatjet1_subjet1_eta*/  bool     OS2jet_fatjet1_subjet1_eta_isLoaded;
//---------------------------------------------------------------------------------
/*             OS2jet_fatjet1_subjet0_mass*/  float    OS2jet_fatjet1_subjet0_mass_;
/*             OS2jet_fatjet1_subjet0_mass*/  TBranch *OS2jet_fatjet1_subjet0_mass_branch;
/*             OS2jet_fatjet1_subjet0_mass*/  bool     OS2jet_fatjet1_subjet0_mass_isLoaded;
//---------------------------------------------------------------------------------
/*             OS2jet_fatjet1_subjet1_mass*/  float    OS2jet_fatjet1_subjet1_mass_;
/*             OS2jet_fatjet1_subjet1_mass*/  TBranch *OS2jet_fatjet1_subjet1_mass_branch;
/*             OS2jet_fatjet1_subjet1_mass*/  bool     OS2jet_fatjet1_subjet1_mass_isLoaded;
//---------------------------------------------------------------------------------
/*               OS2jet_fatjet2_subjet0_pt*/  float    OS2jet_fatjet2_subjet0_pt_;
/*               OS2jet_fatjet2_subjet0_pt*/  TBranch *OS2jet_fatjet2_subjet0_pt_branch;
/*               OS2jet_fatjet2_subjet0_pt*/  bool     OS2jet_fatjet2_subjet0_pt_isLoaded;
//---------------------------------------------------------------------------------
/*               OS2jet_fatjet2_subjet1_pt*/  float    OS2jet_fatjet2_subjet1_pt_;
/*               OS2jet_fatjet2_subjet1_pt*/  TBranch *OS2jet_fatjet2_subjet1_pt_branch;
/*               OS2jet_fatjet2_subjet1_pt*/  bool     OS2jet_fatjet2_subjet1_pt_isLoaded;
//---------------------------------------------------------------------------------
/*              OS2jet_fatjet2_subjet0_eta*/  float    OS2jet_fatjet2_subjet0_eta_;
/*              OS2jet_fatjet2_subjet0_eta*/  TBranch *OS2jet_fatjet2_subjet0_eta_branch;
/*              OS2jet_fatjet2_subjet0_eta*/  bool     OS2jet_fatjet2_subjet0_eta_isLoaded;
//---------------------------------------------------------------------------------
/*              OS2jet_fatjet2_subjet1_eta*/  float    OS2jet_fatjet2_subjet1_eta_;
/*              OS2jet_fatjet2_subjet1_eta*/  TBranch *OS2jet_fatjet2_subjet1_eta_branch;
/*              OS2jet_fatjet2_subjet1_eta*/  bool     OS2jet_fatjet2_subjet1_eta_isLoaded;
//---------------------------------------------------------------------------------
/*             OS2jet_fatjet2_subjet0_mass*/  float    OS2jet_fatjet2_subjet0_mass_;
/*             OS2jet_fatjet2_subjet0_mass*/  TBranch *OS2jet_fatjet2_subjet0_mass_branch;
/*             OS2jet_fatjet2_subjet0_mass*/  bool     OS2jet_fatjet2_subjet0_mass_isLoaded;
//---------------------------------------------------------------------------------
/*             OS2jet_fatjet2_subjet1_mass*/  float    OS2jet_fatjet2_subjet1_mass_;
/*             OS2jet_fatjet2_subjet1_mass*/  TBranch *OS2jet_fatjet2_subjet1_mass_branch;
/*             OS2jet_fatjet2_subjet1_mass*/  bool     OS2jet_fatjet2_subjet1_mass_isLoaded;
//---------------------------------------------------------------------------------
/*                     OS2jet_fatjet1_tau1*/  float    OS2jet_fatjet1_tau1_;
/*                     OS2jet_fatjet1_tau1*/  TBranch *OS2jet_fatjet1_tau1_branch;
/*                     OS2jet_fatjet1_tau1*/  bool     OS2jet_fatjet1_tau1_isLoaded;
//---------------------------------------------------------------------------------
/*                     OS2jet_fatjet1_tau2*/  float    OS2jet_fatjet1_tau2_;
/*                     OS2jet_fatjet1_tau2*/  TBranch *OS2jet_fatjet1_tau2_branch;
/*                     OS2jet_fatjet1_tau2*/  bool     OS2jet_fatjet1_tau2_isLoaded;
//---------------------------------------------------------------------------------
/*                     OS2jet_fatjet1_tau3*/  float    OS2jet_fatjet1_tau3_;
/*                     OS2jet_fatjet1_tau3*/  TBranch *OS2jet_fatjet1_tau3_branch;
/*                     OS2jet_fatjet1_tau3*/  bool     OS2jet_fatjet1_tau3_isLoaded;
//---------------------------------------------------------------------------------
/*                    OS2jet_fatjet1_tau21*/  float    OS2jet_fatjet1_tau21_;
/*                    OS2jet_fatjet1_tau21*/  TBranch *OS2jet_fatjet1_tau21_branch;
/*                    OS2jet_fatjet1_tau21*/  bool     OS2jet_fatjet1_tau21_isLoaded;
//---------------------------------------------------------------------------------
/*                    OS2jet_fatjet2_tau21*/  float    OS2jet_fatjet2_tau21_;
/*                    OS2jet_fatjet2_tau21*/  TBranch *OS2jet_fatjet2_tau21_branch;
/*                    OS2jet_fatjet2_tau21*/  bool     OS2jet_fatjet2_tau21_isLoaded;
//---------------------------------------------------------------------------------
/*                    OS2jet_fatjet1_tau32*/  float    OS2jet_fatjet1_tau32_;
/*                    OS2jet_fatjet1_tau32*/  TBranch *OS2jet_fatjet1_tau32_branch;
/*                    OS2jet_fatjet1_tau32*/  bool     OS2jet_fatjet1_tau32_isLoaded;
//---------------------------------------------------------------------------------
/*                    OS2jet_fatjet2_tau32*/  float    OS2jet_fatjet2_tau32_;
/*                    OS2jet_fatjet2_tau32*/  TBranch *OS2jet_fatjet2_tau32_branch;
/*                    OS2jet_fatjet2_tau32*/  bool     OS2jet_fatjet2_tau32_isLoaded;
//---------------------------------------------------------------------------------
/*                     OS2jet_fatjet2_tau1*/  float    OS2jet_fatjet2_tau1_;
/*                     OS2jet_fatjet2_tau1*/  TBranch *OS2jet_fatjet2_tau1_branch;
/*                     OS2jet_fatjet2_tau1*/  bool     OS2jet_fatjet2_tau1_isLoaded;
//---------------------------------------------------------------------------------
/*                     OS2jet_fatjet2_tau2*/  float    OS2jet_fatjet2_tau2_;
/*                     OS2jet_fatjet2_tau2*/  TBranch *OS2jet_fatjet2_tau2_branch;
/*                     OS2jet_fatjet2_tau2*/  bool     OS2jet_fatjet2_tau2_isLoaded;
//---------------------------------------------------------------------------------
/*                     OS2jet_fatjet2_tau3*/  float    OS2jet_fatjet2_tau3_;
/*                     OS2jet_fatjet2_tau3*/  TBranch *OS2jet_fatjet2_tau3_branch;
/*                     OS2jet_fatjet2_tau3*/  bool     OS2jet_fatjet2_tau3_isLoaded;
//---------------------------------------------------------------------------------
/*                    OS2jet_fatjet1_ll_DR*/  float    OS2jet_fatjet1_ll_DR_;
/*                    OS2jet_fatjet1_ll_DR*/  TBranch *OS2jet_fatjet1_ll_DR_branch;
/*                    OS2jet_fatjet1_ll_DR*/  bool     OS2jet_fatjet1_ll_DR_isLoaded;
//---------------------------------------------------------------------------------
/*                    OS2jet_fatjet2_ll_DR*/  float    OS2jet_fatjet2_ll_DR_;
/*                    OS2jet_fatjet2_ll_DR*/  TBranch *OS2jet_fatjet2_ll_DR_branch;
/*                    OS2jet_fatjet2_ll_DR*/  bool     OS2jet_fatjet2_ll_DR_isLoaded;
//---------------------------------------------------------------------------------
/*                OS2jet_fatjet12_ll_DRmax*/  float    OS2jet_fatjet12_ll_DRmax_;
/*                OS2jet_fatjet12_ll_DRmax*/  TBranch *OS2jet_fatjet12_ll_DRmax_branch;
/*                OS2jet_fatjet12_ll_DRmax*/  bool     OS2jet_fatjet12_ll_DRmax_isLoaded;
//---------------------------------------------------------------------------------
/*             OS2jet_fatjet12_ptvectorsum*/  float    OS2jet_fatjet12_ptvectorsum_;
/*             OS2jet_fatjet12_ptvectorsum*/  TBranch *OS2jet_fatjet12_ptvectorsum_branch;
/*             OS2jet_fatjet12_ptvectorsum*/  bool     OS2jet_fatjet12_ptvectorsum_isLoaded;
//---------------------------------------------------------------------------------
/*             OS2jet_fatjet12_ptscalarsum*/  float    OS2jet_fatjet12_ptscalarsum_;
/*             OS2jet_fatjet12_ptscalarsum*/  TBranch *OS2jet_fatjet12_ptscalarsum_branch;
/*             OS2jet_fatjet12_ptscalarsum*/  bool     OS2jet_fatjet12_ptscalarsum_isLoaded;
//---------------------------------------------------------------------------------
/*            OS2jet_fatjet12_ptscalarprod*/  float    OS2jet_fatjet12_ptscalarprod_;
/*            OS2jet_fatjet12_ptscalarprod*/  TBranch *OS2jet_fatjet12_ptscalarprod_branch;
/*            OS2jet_fatjet12_ptscalarprod*/  bool     OS2jet_fatjet12_ptscalarprod_isLoaded;
//---------------------------------------------------------------------------------
/*                    OS2jet_fatjet12_mass*/  float    OS2jet_fatjet12_mass_;
/*                    OS2jet_fatjet12_mass*/  TBranch *OS2jet_fatjet12_mass_branch;
/*                    OS2jet_fatjet12_mass*/  bool     OS2jet_fatjet12_mass_isLoaded;
//---------------------------------------------------------------------------------
/*                 OS2jet_fatjet12_masssum*/  float    OS2jet_fatjet12_masssum_;
/*                 OS2jet_fatjet12_masssum*/  TBranch *OS2jet_fatjet12_masssum_branch;
/*                 OS2jet_fatjet12_masssum*/  bool     OS2jet_fatjet12_masssum_isLoaded;
//---------------------------------------------------------------------------------
/*             OS2jet_fatjet12_massproduct*/  float    OS2jet_fatjet12_massproduct_;
/*             OS2jet_fatjet12_massproduct*/  TBranch *OS2jet_fatjet12_massproduct_branch;
/*             OS2jet_fatjet12_massproduct*/  bool     OS2jet_fatjet12_massproduct_isLoaded;
//---------------------------------------------------------------------------------
/*               OS2jet_fatjet12_massSDsum*/  float    OS2jet_fatjet12_massSDsum_;
/*               OS2jet_fatjet12_massSDsum*/  TBranch *OS2jet_fatjet12_massSDsum_branch;
/*               OS2jet_fatjet12_massSDsum*/  bool     OS2jet_fatjet12_massSDsum_isLoaded;
//---------------------------------------------------------------------------------
/*           OS2jet_fatjet12_massSDproduct*/  float    OS2jet_fatjet12_massSDproduct_;
/*           OS2jet_fatjet12_massSDproduct*/  TBranch *OS2jet_fatjet12_massSDproduct_branch;
/*           OS2jet_fatjet12_massSDproduct*/  bool     OS2jet_fatjet12_massSDproduct_isLoaded;
//---------------------------------------------------------------------------------
/*                      OS2jet_fatjet12_DR*/  float    OS2jet_fatjet12_DR_;
/*                      OS2jet_fatjet12_DR*/  TBranch *OS2jet_fatjet12_DR_branch;
/*                      OS2jet_fatjet12_DR*/  bool     OS2jet_fatjet12_DR_isLoaded;
//---------------------------------------------------------------------------------
/*                    OS2jet_fatjet12_DPhi*/  float    OS2jet_fatjet12_DPhi_;
/*                    OS2jet_fatjet12_DPhi*/  TBranch *OS2jet_fatjet12_DPhi_branch;
/*                    OS2jet_fatjet12_DPhi*/  bool     OS2jet_fatjet12_DPhi_isLoaded;
//---------------------------------------------------------------------------------
/*                    OS2jet_fatjet12_DEta*/  float    OS2jet_fatjet12_DEta_;
/*                    OS2jet_fatjet12_DEta*/  TBranch *OS2jet_fatjet12_DEta_branch;
/*                    OS2jet_fatjet12_DEta*/  bool     OS2jet_fatjet12_DEta_isLoaded;
//---------------------------------------------------------------------------------
/*                   OS2jet_fatjet1_toptag*/  float    OS2jet_fatjet1_toptag_;
/*                   OS2jet_fatjet1_toptag*/  TBranch *OS2jet_fatjet1_toptag_branch;
/*                   OS2jet_fatjet1_toptag*/  bool     OS2jet_fatjet1_toptag_isLoaded;
//---------------------------------------------------------------------------------
/*                   OS2jet_fatjet2_toptag*/  float    OS2jet_fatjet2_toptag_;
/*                   OS2jet_fatjet2_toptag*/  TBranch *OS2jet_fatjet2_toptag_branch;
/*                   OS2jet_fatjet2_toptag*/  bool     OS2jet_fatjet2_toptag_isLoaded;
//---------------------------------------------------------------------------------
/*                     OS2jet_fatjet1_Wtag*/  float    OS2jet_fatjet1_Wtag_;
/*                     OS2jet_fatjet1_Wtag*/  TBranch *OS2jet_fatjet1_Wtag_branch;
/*                     OS2jet_fatjet1_Wtag*/  bool     OS2jet_fatjet1_Wtag_isLoaded;
//---------------------------------------------------------------------------------
/*                     OS2jet_fatjet2_Wtag*/  float    OS2jet_fatjet2_Wtag_;
/*                     OS2jet_fatjet2_Wtag*/  TBranch *OS2jet_fatjet2_Wtag_branch;
/*                     OS2jet_fatjet2_Wtag*/  bool     OS2jet_fatjet2_Wtag_isLoaded;
//---------------------------------------------------------------------------------
/*                     OS2jet_fatjet1_Ztag*/  float    OS2jet_fatjet1_Ztag_;
/*                     OS2jet_fatjet1_Ztag*/  TBranch *OS2jet_fatjet1_Ztag_branch;
/*                     OS2jet_fatjet1_Ztag*/  bool     OS2jet_fatjet1_Ztag_isLoaded;
//---------------------------------------------------------------------------------
/*                     OS2jet_fatjet2_Ztag*/  float    OS2jet_fatjet2_Ztag_;
/*                     OS2jet_fatjet2_Ztag*/  TBranch *OS2jet_fatjet2_Ztag_branch;
/*                     OS2jet_fatjet2_Ztag*/  bool     OS2jet_fatjet2_Ztag_isLoaded;
//---------------------------------------------------------------------------------
/*                   OS2jet_fatjet1_Zbbtag*/  float    OS2jet_fatjet1_Zbbtag_;
/*                   OS2jet_fatjet1_Zbbtag*/  TBranch *OS2jet_fatjet1_Zbbtag_branch;
/*                   OS2jet_fatjet1_Zbbtag*/  bool     OS2jet_fatjet1_Zbbtag_isLoaded;
//---------------------------------------------------------------------------------
/*                   OS2jet_fatjet2_Zbbtag*/  float    OS2jet_fatjet2_Zbbtag_;
/*                   OS2jet_fatjet2_Zbbtag*/  TBranch *OS2jet_fatjet2_Zbbtag_branch;
/*                   OS2jet_fatjet2_Zbbtag*/  bool     OS2jet_fatjet2_Zbbtag_isLoaded;
//---------------------------------------------------------------------------------
/*                  OS2jet_fatjet12_WtWtag*/  float    OS2jet_fatjet12_WtWtag_;
/*                  OS2jet_fatjet12_WtWtag*/  TBranch *OS2jet_fatjet12_WtWtag_branch;
/*                  OS2jet_fatjet12_WtWtag*/  bool     OS2jet_fatjet12_WtWtag_isLoaded;
//---------------------------------------------------------------------------------
/*                  OS2jet_fatjet12_WpWtag*/  float    OS2jet_fatjet12_WpWtag_;
/*                  OS2jet_fatjet12_WpWtag*/  TBranch *OS2jet_fatjet12_WpWtag_branch;
/*                  OS2jet_fatjet12_WpWtag*/  bool     OS2jet_fatjet12_WpWtag_isLoaded;
//---------------------------------------------------------------------------------
/*                         OS2jet_jet1_idx*/  int      OS2jet_jet1_idx_;
/*                         OS2jet_jet1_idx*/  TBranch *OS2jet_jet1_idx_branch;
/*                         OS2jet_jet1_idx*/  bool     OS2jet_jet1_idx_isLoaded;
//---------------------------------------------------------------------------------
/*                         OS2jet_jet2_idx*/  int      OS2jet_jet2_idx_;
/*                         OS2jet_jet2_idx*/  TBranch *OS2jet_jet2_idx_branch;
/*                         OS2jet_jet2_idx*/  bool     OS2jet_jet2_idx_isLoaded;
//---------------------------------------------------------------------------------
/*                          OS2jet_jet1_pt*/  float    OS2jet_jet1_pt_;
/*                          OS2jet_jet1_pt*/  TBranch *OS2jet_jet1_pt_branch;
/*                          OS2jet_jet1_pt*/  bool     OS2jet_jet1_pt_isLoaded;
//---------------------------------------------------------------------------------
/*                          OS2jet_jet2_pt*/  float    OS2jet_jet2_pt_;
/*                          OS2jet_jet2_pt*/  TBranch *OS2jet_jet2_pt_branch;
/*                          OS2jet_jet2_pt*/  bool     OS2jet_jet2_pt_isLoaded;
//---------------------------------------------------------------------------------
/*                OS2jet_jet12_ptvectorsum*/  float    OS2jet_jet12_ptvectorsum_;
/*                OS2jet_jet12_ptvectorsum*/  TBranch *OS2jet_jet12_ptvectorsum_branch;
/*                OS2jet_jet12_ptvectorsum*/  bool     OS2jet_jet12_ptvectorsum_isLoaded;
//---------------------------------------------------------------------------------
/*                OS2jet_jet12_ptscalarsum*/  float    OS2jet_jet12_ptscalarsum_;
/*                OS2jet_jet12_ptscalarsum*/  TBranch *OS2jet_jet12_ptscalarsum_branch;
/*                OS2jet_jet12_ptscalarsum*/  bool     OS2jet_jet12_ptscalarsum_isLoaded;
//---------------------------------------------------------------------------------
/*               OS2jet_jet12_ptscalarprod*/  float    OS2jet_jet12_ptscalarprod_;
/*               OS2jet_jet12_ptscalarprod*/  TBranch *OS2jet_jet12_ptscalarprod_branch;
/*               OS2jet_jet12_ptscalarprod*/  bool     OS2jet_jet12_ptscalarprod_isLoaded;
//---------------------------------------------------------------------------------
/*                       OS2jet_jet12_mass*/  float    OS2jet_jet12_mass_;
/*                       OS2jet_jet12_mass*/  TBranch *OS2jet_jet12_mass_branch;
/*                       OS2jet_jet12_mass*/  bool     OS2jet_jet12_mass_isLoaded;
//---------------------------------------------------------------------------------
/*                         OS2jet_jet12_DR*/  float    OS2jet_jet12_DR_;
/*                         OS2jet_jet12_DR*/  TBranch *OS2jet_jet12_DR_branch;
/*                         OS2jet_jet12_DR*/  bool     OS2jet_jet12_DR_isLoaded;
//---------------------------------------------------------------------------------
/*                       OS2jet_jet12_DPhi*/  float    OS2jet_jet12_DPhi_;
/*                       OS2jet_jet12_DPhi*/  TBranch *OS2jet_jet12_DPhi_branch;
/*                       OS2jet_jet12_DPhi*/  bool     OS2jet_jet12_DPhi_isLoaded;
//---------------------------------------------------------------------------------
/*                       OS2jet_jet12_DEta*/  float    OS2jet_jet12_DEta_;
/*                       OS2jet_jet12_DEta*/  TBranch *OS2jet_jet12_DEta_branch;
/*                       OS2jet_jet12_DEta*/  bool     OS2jet_jet12_DEta_isLoaded;
//---------------------------------------------------------------------------------
/*                              OS2jet_MET*/  float    OS2jet_MET_;
/*                              OS2jet_MET*/  TBranch *OS2jet_MET_branch;
/*                              OS2jet_MET*/  bool     OS2jet_MET_isLoaded;
//---------------------------------------------------------------------------------
/*                 OS2jet_MET_fatjet1_DPhi*/  float    OS2jet_MET_fatjet1_DPhi_;
/*                 OS2jet_MET_fatjet1_DPhi*/  TBranch *OS2jet_MET_fatjet1_DPhi_branch;
/*                 OS2jet_MET_fatjet1_DPhi*/  bool     OS2jet_MET_fatjet1_DPhi_isLoaded;
//---------------------------------------------------------------------------------
/*                      OS2jet_MET_ll_DPhi*/  float    OS2jet_MET_ll_DPhi_;
/*                      OS2jet_MET_ll_DPhi*/  TBranch *OS2jet_MET_ll_DPhi_branch;
/*                      OS2jet_MET_ll_DPhi*/  bool     OS2jet_MET_ll_DPhi_isLoaded;
//---------------------------------------------------------------------------------
/*   OS2jet_fatjet1_Recojet_matchJet_DRmin*/  float    OS2jet_fatjet1_Recojet_matchJet_DRmin_;
/*   OS2jet_fatjet1_Recojet_matchJet_DRmin*/  TBranch *OS2jet_fatjet1_Recojet_matchJet_DRmin_branch;
/*   OS2jet_fatjet1_Recojet_matchJet_DRmin*/  bool     OS2jet_fatjet1_Recojet_matchJet_DRmin_isLoaded;
//---------------------------------------------------------------------------------
/*              OS2jet_fatjet1_genmatching*/  int      OS2jet_fatjet1_genmatching_;
/*              OS2jet_fatjet1_genmatching*/  TBranch *OS2jet_fatjet1_genmatching_branch;
/*              OS2jet_fatjet1_genmatching*/  bool     OS2jet_fatjet1_genmatching_isLoaded;
//---------------------------------------------------------------------------------
/*              OS2jet_fatjet2_genmatching*/  int      OS2jet_fatjet2_genmatching_;
/*              OS2jet_fatjet2_genmatching*/  TBranch *OS2jet_fatjet2_genmatching_branch;
/*              OS2jet_fatjet2_genmatching*/  bool     OS2jet_fatjet2_genmatching_isLoaded;
//---------------------------------------------------------------------------------
/*            OS2jet_fatjet1_genmatchingv2*/  int      OS2jet_fatjet1_genmatchingv2_;
/*            OS2jet_fatjet1_genmatchingv2*/  TBranch *OS2jet_fatjet1_genmatchingv2_branch;
/*            OS2jet_fatjet1_genmatchingv2*/  bool     OS2jet_fatjet1_genmatchingv2_isLoaded;
//---------------------------------------------------------------------------------
/*            OS2jet_fatjet2_genmatchingv2*/  int      OS2jet_fatjet2_genmatchingv2_;
/*            OS2jet_fatjet2_genmatchingv2*/  TBranch *OS2jet_fatjet2_genmatchingv2_branch;
/*            OS2jet_fatjet2_genmatchingv2*/  bool     OS2jet_fatjet2_genmatchingv2_isLoaded;
//---------------------------------------------------------------------------------
/*            OS2jet_fatjet1_genmatchingv3*/  int      OS2jet_fatjet1_genmatchingv3_;
/*            OS2jet_fatjet1_genmatchingv3*/  TBranch *OS2jet_fatjet1_genmatchingv3_branch;
/*            OS2jet_fatjet1_genmatchingv3*/  bool     OS2jet_fatjet1_genmatchingv3_isLoaded;
//---------------------------------------------------------------------------------
/*                          OS2jet_genMVVV*/  float    OS2jet_genMVVV_;
/*                          OS2jet_genMVVV*/  TBranch *OS2jet_genMVVV_branch;
/*                          OS2jet_genMVVV*/  bool     OS2jet_genMVVV_isLoaded;
//---------------------------------------------------------------------------------
/*                         OS2jet_genpTVVV*/  float    OS2jet_genpTVVV_;
/*                         OS2jet_genpTVVV*/  TBranch *OS2jet_genpTVVV_branch;
/*                         OS2jet_genpTVVV*/  bool     OS2jet_genpTVVV_isLoaded;
//---------------------------------------------------------------------------------
/*                  OS2jet_Mfatjetsleptons*/  float    OS2jet_Mfatjetsleptons_;
/*                  OS2jet_Mfatjetsleptons*/  TBranch *OS2jet_Mfatjetsleptons_branch;
/*                  OS2jet_Mfatjetsleptons*/  bool     OS2jet_Mfatjetsleptons_isLoaded;
//---------------------------------------------------------------------------------
/*              OS2jet_MTfatjetsleptonsMET*/  float    OS2jet_MTfatjetsleptonsMET_;
/*              OS2jet_MTfatjetsleptonsMET*/  TBranch *OS2jet_MTfatjetsleptonsMET_branch;
/*              OS2jet_MTfatjetsleptonsMET*/  bool     OS2jet_MTfatjetsleptonsMET_isLoaded;
//---------------------------------------------------------------------------------
/*                 OS2jet_fatjet1_tau21cut*/  bool     OS2jet_fatjet1_tau21cut_;
/*                 OS2jet_fatjet1_tau21cut*/  TBranch *OS2jet_fatjet1_tau21cut_branch;
/*                 OS2jet_fatjet1_tau21cut*/  bool     OS2jet_fatjet1_tau21cut_isLoaded;
//---------------------------------------------------------------------------------
/*                OS2jet_fatjet1_massSDcut*/  bool     OS2jet_fatjet1_massSDcut_;
/*                OS2jet_fatjet1_massSDcut*/  TBranch *OS2jet_fatjet1_massSDcut_branch;
/*                OS2jet_fatjet1_massSDcut*/  bool     OS2jet_fatjet1_massSDcut_isLoaded;
//---------------------------------------------------------------------------------
/*                  OS2jet_Nfatjets_vloose*/  int      OS2jet_Nfatjets_vloose_;
/*                  OS2jet_Nfatjets_vloose*/  TBranch *OS2jet_Nfatjets_vloose_branch;
/*                  OS2jet_Nfatjets_vloose*/  bool     OS2jet_Nfatjets_vloose_isLoaded;
//---------------------------------------------------------------------------------
/*                   OS2jet_Nfatjets_loose*/  int      OS2jet_Nfatjets_loose_;
/*                   OS2jet_Nfatjets_loose*/  TBranch *OS2jet_Nfatjets_loose_branch;
/*                   OS2jet_Nfatjets_loose*/  bool     OS2jet_Nfatjets_loose_isLoaded;
//---------------------------------------------------------------------------------
/*                  OS2jet_Nfatjets_medium*/  int      OS2jet_Nfatjets_medium_;
/*                  OS2jet_Nfatjets_medium*/  TBranch *OS2jet_Nfatjets_medium_branch;
/*                  OS2jet_Nfatjets_medium*/  bool     OS2jet_Nfatjets_medium_isLoaded;
//---------------------------------------------------------------------------------
/*                 OS2jet_fatjetwgt_vloose*/  float    OS2jet_fatjetwgt_vloose_;
/*                 OS2jet_fatjetwgt_vloose*/  TBranch *OS2jet_fatjetwgt_vloose_branch;
/*                 OS2jet_fatjetwgt_vloose*/  bool     OS2jet_fatjetwgt_vloose_isLoaded;
//---------------------------------------------------------------------------------
/*                  OS2jet_fatjetwgt_loose*/  float    OS2jet_fatjetwgt_loose_;
/*                  OS2jet_fatjetwgt_loose*/  TBranch *OS2jet_fatjetwgt_loose_branch;
/*                  OS2jet_fatjetwgt_loose*/  bool     OS2jet_fatjetwgt_loose_isLoaded;
//---------------------------------------------------------------------------------
/*                 OS2jet_fatjetwgt_medium*/  float    OS2jet_fatjetwgt_medium_;
/*                 OS2jet_fatjetwgt_medium*/  TBranch *OS2jet_fatjetwgt_medium_branch;
/*                 OS2jet_fatjetwgt_medium*/  bool     OS2jet_fatjetwgt_medium_isLoaded;
//---------------------------------------------------------------------------------
public: 
void Init(TTree *tree);
void GetEntry(unsigned int idx); 
void LoadAllBranches(); 
//---------------------------------------------------------------------------------
/*                           Common_isData*/  const int &Common_isData();
//---------------------------------------------------------------------------------
/*                              Common_run*/  const int &Common_run();
//---------------------------------------------------------------------------------
/*                             Common_lumi*/  const int &Common_lumi();
//---------------------------------------------------------------------------------
/*                              Common_evt*/  const unsigned long long &Common_evt();
//---------------------------------------------------------------------------------
/*                        Common_genWeight*/  const float &Common_genWeight();
//---------------------------------------------------------------------------------
/*              Common_btagWeight_DeepCSVB*/  const float &Common_btagWeight_DeepCSVB();
//---------------------------------------------------------------------------------
/*         Common_LHEWeight_mg_reweighting*/  const vector<float> &Common_LHEWeight_mg_reweighting();
//---------------------------------------------------------------------------------
/*Common_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ*/  const bool &Common_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ();
//---------------------------------------------------------------------------------
/* Common_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL*/  const bool &Common_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL();
//---------------------------------------------------------------------------------
/*Common_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8*/  const bool &Common_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8();
//---------------------------------------------------------------------------------
/*Common_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ*/  const bool &Common_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ();
//---------------------------------------------------------------------------------
/*Common_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL*/  const bool &Common_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL();
//---------------------------------------------------------------------------------
/*Common_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ*/  const bool &Common_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ();
//---------------------------------------------------------------------------------
/*Common_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL*/  const bool &Common_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL();
//---------------------------------------------------------------------------------
/*Common_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ*/  const bool &Common_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ();
//---------------------------------------------------------------------------------
/*Common_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL*/  const bool &Common_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL();
//---------------------------------------------------------------------------------
/*                     Common_HLT_DoubleEl*/  const bool &Common_HLT_DoubleEl();
//---------------------------------------------------------------------------------
/*                         Common_HLT_MuEG*/  const bool &Common_HLT_MuEG();
//---------------------------------------------------------------------------------
/*                     Common_HLT_DoubleMu*/  const bool &Common_HLT_DoubleMu();
//---------------------------------------------------------------------------------
/*  Common_pass_duplicate_removal_ee_em_mm*/  const bool &Common_pass_duplicate_removal_ee_em_mm();
//---------------------------------------------------------------------------------
/*  Common_pass_duplicate_removal_mm_em_ee*/  const bool &Common_pass_duplicate_removal_mm_em_ee();
//---------------------------------------------------------------------------------
/*                        Common_noiseFlag*/  const bool &Common_noiseFlag();
//---------------------------------------------------------------------------------
/*                      Common_noiseFlagMC*/  const bool &Common_noiseFlagMC();
//---------------------------------------------------------------------------------
/*                           Common_met_p4*/  const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &Common_met_p4();
//---------------------------------------------------------------------------------
/*                      Common_event_lepSF*/  const float &Common_event_lepSF();
//---------------------------------------------------------------------------------
/*                  Common_event_lepSFelup*/  const float &Common_event_lepSFelup();
//---------------------------------------------------------------------------------
/*                  Common_event_lepSFeldn*/  const float &Common_event_lepSFeldn();
//---------------------------------------------------------------------------------
/*                  Common_event_lepSFmuup*/  const float &Common_event_lepSFmuup();
//---------------------------------------------------------------------------------
/*                  Common_event_lepSFmudn*/  const float &Common_event_lepSFmudn();
//---------------------------------------------------------------------------------
/*                           Common_lep_p4*/  const vector<ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > > &Common_lep_p4();
//---------------------------------------------------------------------------------
/*                         Common_lep_idxs*/  const vector<int> &Common_lep_idxs();
//---------------------------------------------------------------------------------
/*                        Common_lep_pdgid*/  const vector<int> &Common_lep_pdgid();
//---------------------------------------------------------------------------------
/*                        Common_lep_tight*/  const vector<int> &Common_lep_tight();
//---------------------------------------------------------------------------------
/*                          Common_lep_dxy*/  const vector<float> &Common_lep_dxy();
//---------------------------------------------------------------------------------
/*                           Common_lep_dz*/  const vector<float> &Common_lep_dz();
//---------------------------------------------------------------------------------
/*                         Common_lep_ip3d*/  const vector<float> &Common_lep_ip3d();
//---------------------------------------------------------------------------------
/*                        Common_lep_sip3d*/  const vector<float> &Common_lep_sip3d();
//---------------------------------------------------------------------------------
/*                           Common_lep_SF*/  const vector<float> &Common_lep_SF();
//---------------------------------------------------------------------------------
/*                      Common_lep_SFTight*/  const vector<float> &Common_lep_SFTight();
//---------------------------------------------------------------------------------
/*                         Common_lep_SFdn*/  const vector<float> &Common_lep_SFdn();
//---------------------------------------------------------------------------------
/*                    Common_lep_SFdnTight*/  const vector<float> &Common_lep_SFdnTight();
//---------------------------------------------------------------------------------
/*                         Common_lep_SFup*/  const vector<float> &Common_lep_SFup();
//---------------------------------------------------------------------------------
/*                    Common_lep_SFupTight*/  const vector<float> &Common_lep_SFupTight();
//---------------------------------------------------------------------------------
/*                           Common_jet_p4*/  const vector<ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > > &Common_jet_p4();
//---------------------------------------------------------------------------------
/*                         Common_jet_idxs*/  const vector<int> &Common_jet_idxs();
//---------------------------------------------------------------------------------
/*                   Common_jet_passBloose*/  const vector<bool> &Common_jet_passBloose();
//---------------------------------------------------------------------------------
/*                  Common_jet_passBmedium*/  const vector<bool> &Common_jet_passBmedium();
//---------------------------------------------------------------------------------
/*                   Common_jet_passBtight*/  const vector<bool> &Common_jet_passBtight();
//---------------------------------------------------------------------------------
/*                Common_jet_overlapfatjet*/  const vector<int> &Common_jet_overlapfatjet();
//---------------------------------------------------------------------------------
/*                        Common_fatjet_p4*/  const vector<ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > > &Common_fatjet_p4();
//---------------------------------------------------------------------------------
/*                      Common_fatjet_idxs*/  const vector<int> &Common_fatjet_idxs();
//---------------------------------------------------------------------------------
/*                 Common_fatjet_msoftdrop*/  const vector<float> &Common_fatjet_msoftdrop();
//---------------------------------------------------------------------------------
/*                  Common_fatjet_deepMD_W*/  const vector<float> &Common_fatjet_deepMD_W();
//---------------------------------------------------------------------------------
/*                    Common_fatjet_deep_W*/  const vector<float> &Common_fatjet_deep_W();
//---------------------------------------------------------------------------------
/*                  Common_fatjet_deepMD_Z*/  const vector<float> &Common_fatjet_deepMD_Z();
//---------------------------------------------------------------------------------
/*                    Common_fatjet_deep_Z*/  const vector<float> &Common_fatjet_deep_Z();
//---------------------------------------------------------------------------------
/*                  Common_fatjet_deepMD_T*/  const vector<float> &Common_fatjet_deepMD_T();
//---------------------------------------------------------------------------------
/*                    Common_fatjet_deep_T*/  const vector<float> &Common_fatjet_deep_T();
//---------------------------------------------------------------------------------
/*                 Common_fatjet_deepMD_bb*/  const vector<float> &Common_fatjet_deepMD_bb();
//---------------------------------------------------------------------------------
/*                      Common_fatjet_tau3*/  const vector<float> &Common_fatjet_tau3();
//---------------------------------------------------------------------------------
/*                      Common_fatjet_tau2*/  const vector<float> &Common_fatjet_tau2();
//---------------------------------------------------------------------------------
/*                      Common_fatjet_tau1*/  const vector<float> &Common_fatjet_tau1();
//---------------------------------------------------------------------------------
/*                     Common_fatjet_tau32*/  const vector<float> &Common_fatjet_tau32();
//---------------------------------------------------------------------------------
/*                     Common_fatjet_tau21*/  const vector<float> &Common_fatjet_tau21();
//---------------------------------------------------------------------------------
/*                Common_fatjet_subjet0_pt*/  const vector<float> &Common_fatjet_subjet0_pt();
//---------------------------------------------------------------------------------
/*               Common_fatjet_subjet0_eta*/  const vector<float> &Common_fatjet_subjet0_eta();
//---------------------------------------------------------------------------------
/*               Common_fatjet_subjet0_phi*/  const vector<float> &Common_fatjet_subjet0_phi();
//---------------------------------------------------------------------------------
/*              Common_fatjet_subjet0_mass*/  const vector<float> &Common_fatjet_subjet0_mass();
//---------------------------------------------------------------------------------
/*                Common_fatjet_subjet1_pt*/  const vector<float> &Common_fatjet_subjet1_pt();
//---------------------------------------------------------------------------------
/*               Common_fatjet_subjet1_eta*/  const vector<float> &Common_fatjet_subjet1_eta();
//---------------------------------------------------------------------------------
/*               Common_fatjet_subjet1_phi*/  const vector<float> &Common_fatjet_subjet1_phi();
//---------------------------------------------------------------------------------
/*              Common_fatjet_subjet1_mass*/  const vector<float> &Common_fatjet_subjet1_mass();
//---------------------------------------------------------------------------------
/*                Common_fatjet_subjet0_p4*/  const vector<ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > > &Common_fatjet_subjet0_p4();
//---------------------------------------------------------------------------------
/*                Common_fatjet_subjet1_p4*/  const vector<ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > > &Common_fatjet_subjet1_p4();
//---------------------------------------------------------------------------------
/*                        Common_fatjet_WP*/  const vector<int> &Common_fatjet_WP();
//---------------------------------------------------------------------------------
/*            Common_fatjet_WP_antimasscut*/  const vector<int> &Common_fatjet_WP_antimasscut();
//---------------------------------------------------------------------------------
/*                  Common_fatjet_SFVLoose*/  const vector<float> &Common_fatjet_SFVLoose();
//---------------------------------------------------------------------------------
/*                   Common_fatjet_SFLoose*/  const vector<float> &Common_fatjet_SFLoose();
//---------------------------------------------------------------------------------
/*                  Common_fatjet_SFMedium*/  const vector<float> &Common_fatjet_SFMedium();
//---------------------------------------------------------------------------------
/*                   Common_fatjet_SFTight*/  const vector<float> &Common_fatjet_SFTight();
//---------------------------------------------------------------------------------
/*                Common_fatjet_SFdnVLoose*/  const vector<float> &Common_fatjet_SFdnVLoose();
//---------------------------------------------------------------------------------
/*                 Common_fatjet_SFdnLoose*/  const vector<float> &Common_fatjet_SFdnLoose();
//---------------------------------------------------------------------------------
/*                Common_fatjet_SFdnMedium*/  const vector<float> &Common_fatjet_SFdnMedium();
//---------------------------------------------------------------------------------
/*                 Common_fatjet_SFdnTight*/  const vector<float> &Common_fatjet_SFdnTight();
//---------------------------------------------------------------------------------
/*                Common_fatjet_SFupVLoose*/  const vector<float> &Common_fatjet_SFupVLoose();
//---------------------------------------------------------------------------------
/*                 Common_fatjet_SFupLoose*/  const vector<float> &Common_fatjet_SFupLoose();
//---------------------------------------------------------------------------------
/*                Common_fatjet_SFupMedium*/  const vector<float> &Common_fatjet_SFupMedium();
//---------------------------------------------------------------------------------
/*                 Common_fatjet_SFupTight*/  const vector<float> &Common_fatjet_SFupTight();
//---------------------------------------------------------------------------------
/*      Common_eventweight_fatjet_SFVLoose*/  const float &Common_eventweight_fatjet_SFVLoose();
//---------------------------------------------------------------------------------
/*       Common_eventweight_fatjet_SFLoose*/  const float &Common_eventweight_fatjet_SFLoose();
//---------------------------------------------------------------------------------
/*      Common_eventweight_fatjet_SFMedium*/  const float &Common_eventweight_fatjet_SFMedium();
//---------------------------------------------------------------------------------
/*       Common_eventweight_fatjet_SFTight*/  const float &Common_eventweight_fatjet_SFTight();
//---------------------------------------------------------------------------------
/*    Common_eventweight_fatjet_SFdnVLoose*/  const float &Common_eventweight_fatjet_SFdnVLoose();
//---------------------------------------------------------------------------------
/*     Common_eventweight_fatjet_SFdnLoose*/  const float &Common_eventweight_fatjet_SFdnLoose();
//---------------------------------------------------------------------------------
/*    Common_eventweight_fatjet_SFdnMedium*/  const float &Common_eventweight_fatjet_SFdnMedium();
//---------------------------------------------------------------------------------
/*     Common_eventweight_fatjet_SFdnTight*/  const float &Common_eventweight_fatjet_SFdnTight();
//---------------------------------------------------------------------------------
/*    Common_eventweight_fatjet_SFupVLoose*/  const float &Common_eventweight_fatjet_SFupVLoose();
//---------------------------------------------------------------------------------
/*     Common_eventweight_fatjet_SFupLoose*/  const float &Common_eventweight_fatjet_SFupLoose();
//---------------------------------------------------------------------------------
/*    Common_eventweight_fatjet_SFupMedium*/  const float &Common_eventweight_fatjet_SFupMedium();
//---------------------------------------------------------------------------------
/*     Common_eventweight_fatjet_SFupTight*/  const float &Common_eventweight_fatjet_SFupTight();
//---------------------------------------------------------------------------------
/*                         Common_nb_loose*/  const int &Common_nb_loose();
//---------------------------------------------------------------------------------
/*                        Common_nb_medium*/  const int &Common_nb_medium();
//---------------------------------------------------------------------------------
/*                         Common_nb_tight*/  const int &Common_nb_tight();
//---------------------------------------------------------------------------------
/*                          Common_gen_idx*/  const vector<int> &Common_gen_idx();
//---------------------------------------------------------------------------------
/*                   Common_gen_mother_idx*/  const vector<int> &Common_gen_mother_idx();
//---------------------------------------------------------------------------------
/*                    Common_gen_mother_id*/  const vector<int> &Common_gen_mother_id();
//---------------------------------------------------------------------------------
/*                        Common_gen_pdgid*/  const vector<int> &Common_gen_pdgid();
//---------------------------------------------------------------------------------
/*                          Common_gen_p4s*/  const vector<ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > > &Common_gen_p4s();
//---------------------------------------------------------------------------------
/*                 Common_gen_vvvdecay_idx*/  const vector<int> &Common_gen_vvvdecay_idx();
//---------------------------------------------------------------------------------
/*          Common_gen_vvvdecay_mother_idx*/  const vector<int> &Common_gen_vvvdecay_mother_idx();
//---------------------------------------------------------------------------------
/*           Common_gen_vvvdecay_mother_id*/  const vector<int> &Common_gen_vvvdecay_mother_id();
//---------------------------------------------------------------------------------
/*               Common_gen_vvvdecay_pdgid*/  const vector<int> &Common_gen_vvvdecay_pdgid();
//---------------------------------------------------------------------------------
/*                 Common_gen_vvvdecay_p4s*/  const vector<ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > > &Common_gen_vvvdecay_p4s();
//---------------------------------------------------------------------------------
/*          Common_gen_vvvdecay_taudecayid*/  const vector<int> &Common_gen_vvvdecay_taudecayid();
//---------------------------------------------------------------------------------
/*                              Common_n_W*/  const int &Common_n_W();
//---------------------------------------------------------------------------------
/*                              Common_n_Z*/  const int &Common_n_Z();
//---------------------------------------------------------------------------------
/*                          Common_n_lep_Z*/  const int &Common_n_lep_Z();
//---------------------------------------------------------------------------------
/*                       Common_n_leptau_Z*/  const int &Common_n_leptau_Z();
//---------------------------------------------------------------------------------
/*                       Common_n_hadtau_Z*/  const int &Common_n_hadtau_Z();
//---------------------------------------------------------------------------------
/*                           Common_n_nu_Z*/  const int &Common_n_nu_Z();
//---------------------------------------------------------------------------------
/*                            Common_n_b_Z*/  const int &Common_n_b_Z();
//---------------------------------------------------------------------------------
/*                          Common_n_lep_W*/  const int &Common_n_lep_W();
//---------------------------------------------------------------------------------
/*                       Common_n_leptau_W*/  const int &Common_n_leptau_W();
//---------------------------------------------------------------------------------
/*                       Common_n_hadtau_W*/  const int &Common_n_hadtau_W();
//---------------------------------------------------------------------------------
/*                        Common_haslepWSS*/  const bool &Common_haslepWSS();
//---------------------------------------------------------------------------------
/*                            Common_genHT*/  const float &Common_genHT();
//---------------------------------------------------------------------------------
/*                  Common_gen_n_light_lep*/  const int &Common_gen_n_light_lep();
//---------------------------------------------------------------------------------
/*                   Common_gen_VH_channel*/  const int &Common_gen_VH_channel();
//---------------------------------------------------------------------------------
/*                Cut_4LepMET_Preselection*/  const bool &Cut_4LepMET_Preselection();
//---------------------------------------------------------------------------------
/*              Cut_OS2Fatjet_Preselection*/  const bool &Cut_OS2Fatjet_Preselection();
//---------------------------------------------------------------------------------
/*   Cut_OS2Fatjet_Preselection_genmatched*/  const bool &Cut_OS2Fatjet_Preselection_genmatched();
//---------------------------------------------------------------------------------
/*            Cut_OS2Fatjet_OFPreselection*/  const bool &Cut_OS2Fatjet_OFPreselection();
//---------------------------------------------------------------------------------
/*                   Cut_OS2Fatjet_OF2jets*/  const bool &Cut_OS2Fatjet_OF2jets();
//---------------------------------------------------------------------------------
/*                 Cut_OS2Fatjet_OF1fatjet*/  const bool &Cut_OS2Fatjet_OF1fatjet();
//---------------------------------------------------------------------------------
/*                        OS2jet_SFcontent*/  const int &OS2jet_SFcontent();
//---------------------------------------------------------------------------------
/*                  Cut_4LepMET_emuChannel*/  const bool &Cut_4LepMET_emuChannel();
//---------------------------------------------------------------------------------
/*                       OS2jet_Jetcontent*/  const int &OS2jet_Jetcontent();
//---------------------------------------------------------------------------------
/*                 Cut_4LepMET_offzChannel*/  const bool &Cut_4LepMET_offzChannel();
//---------------------------------------------------------------------------------
/*                         OS2jet_Nfatjets*/  const int &OS2jet_Nfatjets();
//---------------------------------------------------------------------------------
/*                  Cut_4LepMET_onzChannel*/  const bool &Cut_4LepMET_onzChannel();
//---------------------------------------------------------------------------------
/*                            OS2jet_Njets*/  const int &OS2jet_Njets();
//---------------------------------------------------------------------------------
/*          Cut_4LepMET_onzChannel_HighMET*/  const bool &Cut_4LepMET_onzChannel_HighMET();
//---------------------------------------------------------------------------------
/*                         OS2jet_Nbjetsv1*/  const int &OS2jet_Nbjetsv1();
//---------------------------------------------------------------------------------
/*             Var_4LepMET_Zcand_lep_idx_0*/  const int &Var_4LepMET_Zcand_lep_idx_0();
//---------------------------------------------------------------------------------
/*                         OS2jet_Nbjetsv2*/  const int &OS2jet_Nbjetsv2();
//---------------------------------------------------------------------------------
/*           Var_4LepMET_Zcand_lep_pdgid_0*/  const int &Var_4LepMET_Zcand_lep_pdgid_0();
//---------------------------------------------------------------------------------
/*                        OS2jet_fatjet_pt*/  const float &OS2jet_fatjet_pt();
//---------------------------------------------------------------------------------
/*              Var_4LepMET_Zcand_lep_p4_0*/  const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &Var_4LepMET_Zcand_lep_p4_0();
//---------------------------------------------------------------------------------
/*                          OS2jet_lep1_pt*/  const float &OS2jet_lep1_pt();
//---------------------------------------------------------------------------------
/*             Var_4LepMET_Zcand_lep_idx_1*/  const int &Var_4LepMET_Zcand_lep_idx_1();
//---------------------------------------------------------------------------------
/*                          OS2jet_lep2_pt*/  const float &OS2jet_lep2_pt();
//---------------------------------------------------------------------------------
/*           Var_4LepMET_Zcand_lep_pdgid_1*/  const int &Var_4LepMET_Zcand_lep_pdgid_1();
//---------------------------------------------------------------------------------
/*                OS2jet_lep12_ptvectorsum*/  const float &OS2jet_lep12_ptvectorsum();
//---------------------------------------------------------------------------------
/*              Var_4LepMET_Zcand_lep_p4_1*/  const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &Var_4LepMET_Zcand_lep_p4_1();
//---------------------------------------------------------------------------------
/*                OS2jet_lep12_ptscalarsum*/  const float &OS2jet_lep12_ptscalarsum();
//---------------------------------------------------------------------------------
/*                   Var_4LepMET_Zcand_mll*/  const float &Var_4LepMET_Zcand_mll();
//---------------------------------------------------------------------------------
/*               OS2jet_lep12_ptscalarprod*/  const float &OS2jet_lep12_ptscalarprod();
//---------------------------------------------------------------------------------
/*             Var_4LepMET_other_lep_idx_0*/  const int &Var_4LepMET_other_lep_idx_0();
//---------------------------------------------------------------------------------
/*                       OS2jet_lep12_mass*/  const float &OS2jet_lep12_mass();
//---------------------------------------------------------------------------------
/*           Var_4LepMET_other_lep_pdgid_0*/  const int &Var_4LepMET_other_lep_pdgid_0();
//---------------------------------------------------------------------------------
/*                         OS2jet_lep12_DR*/  const float &OS2jet_lep12_DR();
//---------------------------------------------------------------------------------
/*              Var_4LepMET_other_lep_p4_0*/  const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &Var_4LepMET_other_lep_p4_0();
//---------------------------------------------------------------------------------
/*                       OS2jet_lep12_DPhi*/  const float &OS2jet_lep12_DPhi();
//---------------------------------------------------------------------------------
/*             Var_4LepMET_other_lep_idx_1*/  const int &Var_4LepMET_other_lep_idx_1();
//---------------------------------------------------------------------------------
/*                       OS2jet_lep12_Deta*/  const float &OS2jet_lep12_Deta();
//---------------------------------------------------------------------------------
/*           Var_4LepMET_other_lep_pdgid_1*/  const int &Var_4LepMET_other_lep_pdgid_1();
//---------------------------------------------------------------------------------
/*                       OS2jet_fatjet1_pt*/  const float &OS2jet_fatjet1_pt();
//---------------------------------------------------------------------------------
/*              Var_4LepMET_other_lep_p4_1*/  const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &Var_4LepMET_other_lep_p4_1();
//---------------------------------------------------------------------------------
/*                       OS2jet_fatjet2_pt*/  const float &OS2jet_fatjet2_pt();
//---------------------------------------------------------------------------------
/*                   Var_4LepMET_other_mll*/  const float &Var_4LepMET_other_mll();
//---------------------------------------------------------------------------------
/*                     OS2jet_fatjet1_mass*/  const float &OS2jet_fatjet1_mass();
//---------------------------------------------------------------------------------
/*                         Var_4LepMET_mt2*/  const float &Var_4LepMET_mt2();
//---------------------------------------------------------------------------------
/*                     OS2jet_fatjet2_mass*/  const float &OS2jet_fatjet2_mass();
//---------------------------------------------------------------------------------
/*                   OS2jet_fatjet1_massSD*/  const float &OS2jet_fatjet1_massSD();
//---------------------------------------------------------------------------------
/*                   OS2jet_fatjet2_massSD*/  const float &OS2jet_fatjet2_massSD();
//---------------------------------------------------------------------------------
/*               OS2jet_fatjet1_subjet0_pt*/  const float &OS2jet_fatjet1_subjet0_pt();
//---------------------------------------------------------------------------------
/*               OS2jet_fatjet1_subjet1_pt*/  const float &OS2jet_fatjet1_subjet1_pt();
//---------------------------------------------------------------------------------
/*              OS2jet_fatjet1_subjet0_eta*/  const float &OS2jet_fatjet1_subjet0_eta();
//---------------------------------------------------------------------------------
/*              OS2jet_fatjet1_subjet1_eta*/  const float &OS2jet_fatjet1_subjet1_eta();
//---------------------------------------------------------------------------------
/*             OS2jet_fatjet1_subjet0_mass*/  const float &OS2jet_fatjet1_subjet0_mass();
//---------------------------------------------------------------------------------
/*             OS2jet_fatjet1_subjet1_mass*/  const float &OS2jet_fatjet1_subjet1_mass();
//---------------------------------------------------------------------------------
/*               OS2jet_fatjet2_subjet0_pt*/  const float &OS2jet_fatjet2_subjet0_pt();
//---------------------------------------------------------------------------------
/*               OS2jet_fatjet2_subjet1_pt*/  const float &OS2jet_fatjet2_subjet1_pt();
//---------------------------------------------------------------------------------
/*              OS2jet_fatjet2_subjet0_eta*/  const float &OS2jet_fatjet2_subjet0_eta();
//---------------------------------------------------------------------------------
/*              OS2jet_fatjet2_subjet1_eta*/  const float &OS2jet_fatjet2_subjet1_eta();
//---------------------------------------------------------------------------------
/*             OS2jet_fatjet2_subjet0_mass*/  const float &OS2jet_fatjet2_subjet0_mass();
//---------------------------------------------------------------------------------
/*             OS2jet_fatjet2_subjet1_mass*/  const float &OS2jet_fatjet2_subjet1_mass();
//---------------------------------------------------------------------------------
/*                     OS2jet_fatjet1_tau1*/  const float &OS2jet_fatjet1_tau1();
//---------------------------------------------------------------------------------
/*                     OS2jet_fatjet1_tau2*/  const float &OS2jet_fatjet1_tau2();
//---------------------------------------------------------------------------------
/*                     OS2jet_fatjet1_tau3*/  const float &OS2jet_fatjet1_tau3();
//---------------------------------------------------------------------------------
/*                    OS2jet_fatjet1_tau21*/  const float &OS2jet_fatjet1_tau21();
//---------------------------------------------------------------------------------
/*                    OS2jet_fatjet2_tau21*/  const float &OS2jet_fatjet2_tau21();
//---------------------------------------------------------------------------------
/*                    OS2jet_fatjet1_tau32*/  const float &OS2jet_fatjet1_tau32();
//---------------------------------------------------------------------------------
/*                    OS2jet_fatjet2_tau32*/  const float &OS2jet_fatjet2_tau32();
//---------------------------------------------------------------------------------
/*                     OS2jet_fatjet2_tau1*/  const float &OS2jet_fatjet2_tau1();
//---------------------------------------------------------------------------------
/*                     OS2jet_fatjet2_tau2*/  const float &OS2jet_fatjet2_tau2();
//---------------------------------------------------------------------------------
/*                     OS2jet_fatjet2_tau3*/  const float &OS2jet_fatjet2_tau3();
//---------------------------------------------------------------------------------
/*                    OS2jet_fatjet1_ll_DR*/  const float &OS2jet_fatjet1_ll_DR();
//---------------------------------------------------------------------------------
/*                    OS2jet_fatjet2_ll_DR*/  const float &OS2jet_fatjet2_ll_DR();
//---------------------------------------------------------------------------------
/*                OS2jet_fatjet12_ll_DRmax*/  const float &OS2jet_fatjet12_ll_DRmax();
//---------------------------------------------------------------------------------
/*             OS2jet_fatjet12_ptvectorsum*/  const float &OS2jet_fatjet12_ptvectorsum();
//---------------------------------------------------------------------------------
/*             OS2jet_fatjet12_ptscalarsum*/  const float &OS2jet_fatjet12_ptscalarsum();
//---------------------------------------------------------------------------------
/*            OS2jet_fatjet12_ptscalarprod*/  const float &OS2jet_fatjet12_ptscalarprod();
//---------------------------------------------------------------------------------
/*                    OS2jet_fatjet12_mass*/  const float &OS2jet_fatjet12_mass();
//---------------------------------------------------------------------------------
/*                 OS2jet_fatjet12_masssum*/  const float &OS2jet_fatjet12_masssum();
//---------------------------------------------------------------------------------
/*             OS2jet_fatjet12_massproduct*/  const float &OS2jet_fatjet12_massproduct();
//---------------------------------------------------------------------------------
/*               OS2jet_fatjet12_massSDsum*/  const float &OS2jet_fatjet12_massSDsum();
//---------------------------------------------------------------------------------
/*           OS2jet_fatjet12_massSDproduct*/  const float &OS2jet_fatjet12_massSDproduct();
//---------------------------------------------------------------------------------
/*                      OS2jet_fatjet12_DR*/  const float &OS2jet_fatjet12_DR();
//---------------------------------------------------------------------------------
/*                    OS2jet_fatjet12_DPhi*/  const float &OS2jet_fatjet12_DPhi();
//---------------------------------------------------------------------------------
/*                    OS2jet_fatjet12_DEta*/  const float &OS2jet_fatjet12_DEta();
//---------------------------------------------------------------------------------
/*                   OS2jet_fatjet1_toptag*/  const float &OS2jet_fatjet1_toptag();
//---------------------------------------------------------------------------------
/*                   OS2jet_fatjet2_toptag*/  const float &OS2jet_fatjet2_toptag();
//---------------------------------------------------------------------------------
/*                     OS2jet_fatjet1_Wtag*/  const float &OS2jet_fatjet1_Wtag();
//---------------------------------------------------------------------------------
/*                     OS2jet_fatjet2_Wtag*/  const float &OS2jet_fatjet2_Wtag();
//---------------------------------------------------------------------------------
/*                     OS2jet_fatjet1_Ztag*/  const float &OS2jet_fatjet1_Ztag();
//---------------------------------------------------------------------------------
/*                     OS2jet_fatjet2_Ztag*/  const float &OS2jet_fatjet2_Ztag();
//---------------------------------------------------------------------------------
/*                   OS2jet_fatjet1_Zbbtag*/  const float &OS2jet_fatjet1_Zbbtag();
//---------------------------------------------------------------------------------
/*                   OS2jet_fatjet2_Zbbtag*/  const float &OS2jet_fatjet2_Zbbtag();
//---------------------------------------------------------------------------------
/*                  OS2jet_fatjet12_WtWtag*/  const float &OS2jet_fatjet12_WtWtag();
//---------------------------------------------------------------------------------
/*                  OS2jet_fatjet12_WpWtag*/  const float &OS2jet_fatjet12_WpWtag();
//---------------------------------------------------------------------------------
/*                         OS2jet_jet1_idx*/  const int &OS2jet_jet1_idx();
//---------------------------------------------------------------------------------
/*                         OS2jet_jet2_idx*/  const int &OS2jet_jet2_idx();
//---------------------------------------------------------------------------------
/*                          OS2jet_jet1_pt*/  const float &OS2jet_jet1_pt();
//---------------------------------------------------------------------------------
/*                          OS2jet_jet2_pt*/  const float &OS2jet_jet2_pt();
//---------------------------------------------------------------------------------
/*                OS2jet_jet12_ptvectorsum*/  const float &OS2jet_jet12_ptvectorsum();
//---------------------------------------------------------------------------------
/*                OS2jet_jet12_ptscalarsum*/  const float &OS2jet_jet12_ptscalarsum();
//---------------------------------------------------------------------------------
/*               OS2jet_jet12_ptscalarprod*/  const float &OS2jet_jet12_ptscalarprod();
//---------------------------------------------------------------------------------
/*                       OS2jet_jet12_mass*/  const float &OS2jet_jet12_mass();
//---------------------------------------------------------------------------------
/*                         OS2jet_jet12_DR*/  const float &OS2jet_jet12_DR();
//---------------------------------------------------------------------------------
/*                       OS2jet_jet12_DPhi*/  const float &OS2jet_jet12_DPhi();
//---------------------------------------------------------------------------------
/*                       OS2jet_jet12_DEta*/  const float &OS2jet_jet12_DEta();
//---------------------------------------------------------------------------------
/*                              OS2jet_MET*/  const float &OS2jet_MET();
//---------------------------------------------------------------------------------
/*                 OS2jet_MET_fatjet1_DPhi*/  const float &OS2jet_MET_fatjet1_DPhi();
//---------------------------------------------------------------------------------
/*                      OS2jet_MET_ll_DPhi*/  const float &OS2jet_MET_ll_DPhi();
//---------------------------------------------------------------------------------
/*   OS2jet_fatjet1_Recojet_matchJet_DRmin*/  const float &OS2jet_fatjet1_Recojet_matchJet_DRmin();
//---------------------------------------------------------------------------------
/*              OS2jet_fatjet1_genmatching*/  const int &OS2jet_fatjet1_genmatching();
//---------------------------------------------------------------------------------
/*              OS2jet_fatjet2_genmatching*/  const int &OS2jet_fatjet2_genmatching();
//---------------------------------------------------------------------------------
/*            OS2jet_fatjet1_genmatchingv2*/  const int &OS2jet_fatjet1_genmatchingv2();
//---------------------------------------------------------------------------------
/*            OS2jet_fatjet2_genmatchingv2*/  const int &OS2jet_fatjet2_genmatchingv2();
//---------------------------------------------------------------------------------
/*            OS2jet_fatjet1_genmatchingv3*/  const int &OS2jet_fatjet1_genmatchingv3();
//---------------------------------------------------------------------------------
/*                          OS2jet_genMVVV*/  const float &OS2jet_genMVVV();
//---------------------------------------------------------------------------------
/*                         OS2jet_genpTVVV*/  const float &OS2jet_genpTVVV();
//---------------------------------------------------------------------------------
/*                  OS2jet_Mfatjetsleptons*/  const float &OS2jet_Mfatjetsleptons();
//---------------------------------------------------------------------------------
/*              OS2jet_MTfatjetsleptonsMET*/  const float &OS2jet_MTfatjetsleptonsMET();
//---------------------------------------------------------------------------------
/*                 OS2jet_fatjet1_tau21cut*/  const bool &OS2jet_fatjet1_tau21cut();
//---------------------------------------------------------------------------------
/*                OS2jet_fatjet1_massSDcut*/  const bool &OS2jet_fatjet1_massSDcut();
//---------------------------------------------------------------------------------
/*                  OS2jet_Nfatjets_vloose*/  const int &OS2jet_Nfatjets_vloose();
//---------------------------------------------------------------------------------
/*                   OS2jet_Nfatjets_loose*/  const int &OS2jet_Nfatjets_loose();
//---------------------------------------------------------------------------------
/*                  OS2jet_Nfatjets_medium*/  const int &OS2jet_Nfatjets_medium();
//---------------------------------------------------------------------------------
/*                 OS2jet_fatjetwgt_vloose*/  const float &OS2jet_fatjetwgt_vloose();
//---------------------------------------------------------------------------------
/*                  OS2jet_fatjetwgt_loose*/  const float &OS2jet_fatjetwgt_loose();
//---------------------------------------------------------------------------------
/*                 OS2jet_fatjetwgt_medium*/  const float &OS2jet_fatjetwgt_medium();
//---------------------------------------------------------------------------------

  static void progress(int nEventsTotal, int nEventsChain);
};

#ifndef __CINT__
extern VVVTree vvv;
#endif

namespace tas {
//---------------------------------------------------------------------------------
/*                           Common_isData*/  const int &Common_isData();
//---------------------------------------------------------------------------------
/*                              Common_run*/  const int &Common_run();
//---------------------------------------------------------------------------------
/*                             Common_lumi*/  const int &Common_lumi();
//---------------------------------------------------------------------------------
/*                              Common_evt*/  const unsigned long long &Common_evt();
//---------------------------------------------------------------------------------
/*                        Common_genWeight*/  const float &Common_genWeight();
//---------------------------------------------------------------------------------
/*              Common_btagWeight_DeepCSVB*/  const float &Common_btagWeight_DeepCSVB();
//---------------------------------------------------------------------------------
/*         Common_LHEWeight_mg_reweighting*/  const vector<float> &Common_LHEWeight_mg_reweighting();
//---------------------------------------------------------------------------------
/*Common_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ*/  const bool &Common_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ();
//---------------------------------------------------------------------------------
/* Common_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL*/  const bool &Common_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL();
//---------------------------------------------------------------------------------
/*Common_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8*/  const bool &Common_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8();
//---------------------------------------------------------------------------------
/*Common_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ*/  const bool &Common_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ();
//---------------------------------------------------------------------------------
/*Common_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL*/  const bool &Common_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL();
//---------------------------------------------------------------------------------
/*Common_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ*/  const bool &Common_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ();
//---------------------------------------------------------------------------------
/*Common_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL*/  const bool &Common_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL();
//---------------------------------------------------------------------------------
/*Common_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ*/  const bool &Common_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ();
//---------------------------------------------------------------------------------
/*Common_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL*/  const bool &Common_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL();
//---------------------------------------------------------------------------------
/*                     Common_HLT_DoubleEl*/  const bool &Common_HLT_DoubleEl();
//---------------------------------------------------------------------------------
/*                         Common_HLT_MuEG*/  const bool &Common_HLT_MuEG();
//---------------------------------------------------------------------------------
/*                     Common_HLT_DoubleMu*/  const bool &Common_HLT_DoubleMu();
//---------------------------------------------------------------------------------
/*  Common_pass_duplicate_removal_ee_em_mm*/  const bool &Common_pass_duplicate_removal_ee_em_mm();
//---------------------------------------------------------------------------------
/*  Common_pass_duplicate_removal_mm_em_ee*/  const bool &Common_pass_duplicate_removal_mm_em_ee();
//---------------------------------------------------------------------------------
/*                        Common_noiseFlag*/  const bool &Common_noiseFlag();
//---------------------------------------------------------------------------------
/*                      Common_noiseFlagMC*/  const bool &Common_noiseFlagMC();
//---------------------------------------------------------------------------------
/*                           Common_met_p4*/  const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &Common_met_p4();
//---------------------------------------------------------------------------------
/*                      Common_event_lepSF*/  const float &Common_event_lepSF();
//---------------------------------------------------------------------------------
/*                  Common_event_lepSFelup*/  const float &Common_event_lepSFelup();
//---------------------------------------------------------------------------------
/*                  Common_event_lepSFeldn*/  const float &Common_event_lepSFeldn();
//---------------------------------------------------------------------------------
/*                  Common_event_lepSFmuup*/  const float &Common_event_lepSFmuup();
//---------------------------------------------------------------------------------
/*                  Common_event_lepSFmudn*/  const float &Common_event_lepSFmudn();
//---------------------------------------------------------------------------------
/*                           Common_lep_p4*/  const vector<ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > > &Common_lep_p4();
//---------------------------------------------------------------------------------
/*                         Common_lep_idxs*/  const vector<int> &Common_lep_idxs();
//---------------------------------------------------------------------------------
/*                        Common_lep_pdgid*/  const vector<int> &Common_lep_pdgid();
//---------------------------------------------------------------------------------
/*                        Common_lep_tight*/  const vector<int> &Common_lep_tight();
//---------------------------------------------------------------------------------
/*                          Common_lep_dxy*/  const vector<float> &Common_lep_dxy();
//---------------------------------------------------------------------------------
/*                           Common_lep_dz*/  const vector<float> &Common_lep_dz();
//---------------------------------------------------------------------------------
/*                         Common_lep_ip3d*/  const vector<float> &Common_lep_ip3d();
//---------------------------------------------------------------------------------
/*                        Common_lep_sip3d*/  const vector<float> &Common_lep_sip3d();
//---------------------------------------------------------------------------------
/*                           Common_lep_SF*/  const vector<float> &Common_lep_SF();
//---------------------------------------------------------------------------------
/*                      Common_lep_SFTight*/  const vector<float> &Common_lep_SFTight();
//---------------------------------------------------------------------------------
/*                         Common_lep_SFdn*/  const vector<float> &Common_lep_SFdn();
//---------------------------------------------------------------------------------
/*                    Common_lep_SFdnTight*/  const vector<float> &Common_lep_SFdnTight();
//---------------------------------------------------------------------------------
/*                         Common_lep_SFup*/  const vector<float> &Common_lep_SFup();
//---------------------------------------------------------------------------------
/*                    Common_lep_SFupTight*/  const vector<float> &Common_lep_SFupTight();
//---------------------------------------------------------------------------------
/*                           Common_jet_p4*/  const vector<ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > > &Common_jet_p4();
//---------------------------------------------------------------------------------
/*                         Common_jet_idxs*/  const vector<int> &Common_jet_idxs();
//---------------------------------------------------------------------------------
/*                   Common_jet_passBloose*/  const vector<bool> &Common_jet_passBloose();
//---------------------------------------------------------------------------------
/*                  Common_jet_passBmedium*/  const vector<bool> &Common_jet_passBmedium();
//---------------------------------------------------------------------------------
/*                   Common_jet_passBtight*/  const vector<bool> &Common_jet_passBtight();
//---------------------------------------------------------------------------------
/*                Common_jet_overlapfatjet*/  const vector<int> &Common_jet_overlapfatjet();
//---------------------------------------------------------------------------------
/*                        Common_fatjet_p4*/  const vector<ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > > &Common_fatjet_p4();
//---------------------------------------------------------------------------------
/*                      Common_fatjet_idxs*/  const vector<int> &Common_fatjet_idxs();
//---------------------------------------------------------------------------------
/*                 Common_fatjet_msoftdrop*/  const vector<float> &Common_fatjet_msoftdrop();
//---------------------------------------------------------------------------------
/*                  Common_fatjet_deepMD_W*/  const vector<float> &Common_fatjet_deepMD_W();
//---------------------------------------------------------------------------------
/*                    Common_fatjet_deep_W*/  const vector<float> &Common_fatjet_deep_W();
//---------------------------------------------------------------------------------
/*                  Common_fatjet_deepMD_Z*/  const vector<float> &Common_fatjet_deepMD_Z();
//---------------------------------------------------------------------------------
/*                    Common_fatjet_deep_Z*/  const vector<float> &Common_fatjet_deep_Z();
//---------------------------------------------------------------------------------
/*                  Common_fatjet_deepMD_T*/  const vector<float> &Common_fatjet_deepMD_T();
//---------------------------------------------------------------------------------
/*                    Common_fatjet_deep_T*/  const vector<float> &Common_fatjet_deep_T();
//---------------------------------------------------------------------------------
/*                 Common_fatjet_deepMD_bb*/  const vector<float> &Common_fatjet_deepMD_bb();
//---------------------------------------------------------------------------------
/*                      Common_fatjet_tau3*/  const vector<float> &Common_fatjet_tau3();
//---------------------------------------------------------------------------------
/*                      Common_fatjet_tau2*/  const vector<float> &Common_fatjet_tau2();
//---------------------------------------------------------------------------------
/*                      Common_fatjet_tau1*/  const vector<float> &Common_fatjet_tau1();
//---------------------------------------------------------------------------------
/*                     Common_fatjet_tau32*/  const vector<float> &Common_fatjet_tau32();
//---------------------------------------------------------------------------------
/*                     Common_fatjet_tau21*/  const vector<float> &Common_fatjet_tau21();
//---------------------------------------------------------------------------------
/*                Common_fatjet_subjet0_pt*/  const vector<float> &Common_fatjet_subjet0_pt();
//---------------------------------------------------------------------------------
/*               Common_fatjet_subjet0_eta*/  const vector<float> &Common_fatjet_subjet0_eta();
//---------------------------------------------------------------------------------
/*               Common_fatjet_subjet0_phi*/  const vector<float> &Common_fatjet_subjet0_phi();
//---------------------------------------------------------------------------------
/*              Common_fatjet_subjet0_mass*/  const vector<float> &Common_fatjet_subjet0_mass();
//---------------------------------------------------------------------------------
/*                Common_fatjet_subjet1_pt*/  const vector<float> &Common_fatjet_subjet1_pt();
//---------------------------------------------------------------------------------
/*               Common_fatjet_subjet1_eta*/  const vector<float> &Common_fatjet_subjet1_eta();
//---------------------------------------------------------------------------------
/*               Common_fatjet_subjet1_phi*/  const vector<float> &Common_fatjet_subjet1_phi();
//---------------------------------------------------------------------------------
/*              Common_fatjet_subjet1_mass*/  const vector<float> &Common_fatjet_subjet1_mass();
//---------------------------------------------------------------------------------
/*                Common_fatjet_subjet0_p4*/  const vector<ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > > &Common_fatjet_subjet0_p4();
//---------------------------------------------------------------------------------
/*                Common_fatjet_subjet1_p4*/  const vector<ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > > &Common_fatjet_subjet1_p4();
//---------------------------------------------------------------------------------
/*                        Common_fatjet_WP*/  const vector<int> &Common_fatjet_WP();
//---------------------------------------------------------------------------------
/*            Common_fatjet_WP_antimasscut*/  const vector<int> &Common_fatjet_WP_antimasscut();
//---------------------------------------------------------------------------------
/*                  Common_fatjet_SFVLoose*/  const vector<float> &Common_fatjet_SFVLoose();
//---------------------------------------------------------------------------------
/*                   Common_fatjet_SFLoose*/  const vector<float> &Common_fatjet_SFLoose();
//---------------------------------------------------------------------------------
/*                  Common_fatjet_SFMedium*/  const vector<float> &Common_fatjet_SFMedium();
//---------------------------------------------------------------------------------
/*                   Common_fatjet_SFTight*/  const vector<float> &Common_fatjet_SFTight();
//---------------------------------------------------------------------------------
/*                Common_fatjet_SFdnVLoose*/  const vector<float> &Common_fatjet_SFdnVLoose();
//---------------------------------------------------------------------------------
/*                 Common_fatjet_SFdnLoose*/  const vector<float> &Common_fatjet_SFdnLoose();
//---------------------------------------------------------------------------------
/*                Common_fatjet_SFdnMedium*/  const vector<float> &Common_fatjet_SFdnMedium();
//---------------------------------------------------------------------------------
/*                 Common_fatjet_SFdnTight*/  const vector<float> &Common_fatjet_SFdnTight();
//---------------------------------------------------------------------------------
/*                Common_fatjet_SFupVLoose*/  const vector<float> &Common_fatjet_SFupVLoose();
//---------------------------------------------------------------------------------
/*                 Common_fatjet_SFupLoose*/  const vector<float> &Common_fatjet_SFupLoose();
//---------------------------------------------------------------------------------
/*                Common_fatjet_SFupMedium*/  const vector<float> &Common_fatjet_SFupMedium();
//---------------------------------------------------------------------------------
/*                 Common_fatjet_SFupTight*/  const vector<float> &Common_fatjet_SFupTight();
//---------------------------------------------------------------------------------
/*      Common_eventweight_fatjet_SFVLoose*/  const float &Common_eventweight_fatjet_SFVLoose();
//---------------------------------------------------------------------------------
/*       Common_eventweight_fatjet_SFLoose*/  const float &Common_eventweight_fatjet_SFLoose();
//---------------------------------------------------------------------------------
/*      Common_eventweight_fatjet_SFMedium*/  const float &Common_eventweight_fatjet_SFMedium();
//---------------------------------------------------------------------------------
/*       Common_eventweight_fatjet_SFTight*/  const float &Common_eventweight_fatjet_SFTight();
//---------------------------------------------------------------------------------
/*    Common_eventweight_fatjet_SFdnVLoose*/  const float &Common_eventweight_fatjet_SFdnVLoose();
//---------------------------------------------------------------------------------
/*     Common_eventweight_fatjet_SFdnLoose*/  const float &Common_eventweight_fatjet_SFdnLoose();
//---------------------------------------------------------------------------------
/*    Common_eventweight_fatjet_SFdnMedium*/  const float &Common_eventweight_fatjet_SFdnMedium();
//---------------------------------------------------------------------------------
/*     Common_eventweight_fatjet_SFdnTight*/  const float &Common_eventweight_fatjet_SFdnTight();
//---------------------------------------------------------------------------------
/*    Common_eventweight_fatjet_SFupVLoose*/  const float &Common_eventweight_fatjet_SFupVLoose();
//---------------------------------------------------------------------------------
/*     Common_eventweight_fatjet_SFupLoose*/  const float &Common_eventweight_fatjet_SFupLoose();
//---------------------------------------------------------------------------------
/*    Common_eventweight_fatjet_SFupMedium*/  const float &Common_eventweight_fatjet_SFupMedium();
//---------------------------------------------------------------------------------
/*     Common_eventweight_fatjet_SFupTight*/  const float &Common_eventweight_fatjet_SFupTight();
//---------------------------------------------------------------------------------
/*                         Common_nb_loose*/  const int &Common_nb_loose();
//---------------------------------------------------------------------------------
/*                        Common_nb_medium*/  const int &Common_nb_medium();
//---------------------------------------------------------------------------------
/*                         Common_nb_tight*/  const int &Common_nb_tight();
//---------------------------------------------------------------------------------
/*                          Common_gen_idx*/  const vector<int> &Common_gen_idx();
//---------------------------------------------------------------------------------
/*                   Common_gen_mother_idx*/  const vector<int> &Common_gen_mother_idx();
//---------------------------------------------------------------------------------
/*                    Common_gen_mother_id*/  const vector<int> &Common_gen_mother_id();
//---------------------------------------------------------------------------------
/*                        Common_gen_pdgid*/  const vector<int> &Common_gen_pdgid();
//---------------------------------------------------------------------------------
/*                          Common_gen_p4s*/  const vector<ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > > &Common_gen_p4s();
//---------------------------------------------------------------------------------
/*                 Common_gen_vvvdecay_idx*/  const vector<int> &Common_gen_vvvdecay_idx();
//---------------------------------------------------------------------------------
/*          Common_gen_vvvdecay_mother_idx*/  const vector<int> &Common_gen_vvvdecay_mother_idx();
//---------------------------------------------------------------------------------
/*           Common_gen_vvvdecay_mother_id*/  const vector<int> &Common_gen_vvvdecay_mother_id();
//---------------------------------------------------------------------------------
/*               Common_gen_vvvdecay_pdgid*/  const vector<int> &Common_gen_vvvdecay_pdgid();
//---------------------------------------------------------------------------------
/*                 Common_gen_vvvdecay_p4s*/  const vector<ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > > &Common_gen_vvvdecay_p4s();
//---------------------------------------------------------------------------------
/*          Common_gen_vvvdecay_taudecayid*/  const vector<int> &Common_gen_vvvdecay_taudecayid();
//---------------------------------------------------------------------------------
/*                              Common_n_W*/  const int &Common_n_W();
//---------------------------------------------------------------------------------
/*                              Common_n_Z*/  const int &Common_n_Z();
//---------------------------------------------------------------------------------
/*                          Common_n_lep_Z*/  const int &Common_n_lep_Z();
//---------------------------------------------------------------------------------
/*                       Common_n_leptau_Z*/  const int &Common_n_leptau_Z();
//---------------------------------------------------------------------------------
/*                       Common_n_hadtau_Z*/  const int &Common_n_hadtau_Z();
//---------------------------------------------------------------------------------
/*                           Common_n_nu_Z*/  const int &Common_n_nu_Z();
//---------------------------------------------------------------------------------
/*                            Common_n_b_Z*/  const int &Common_n_b_Z();
//---------------------------------------------------------------------------------
/*                          Common_n_lep_W*/  const int &Common_n_lep_W();
//---------------------------------------------------------------------------------
/*                       Common_n_leptau_W*/  const int &Common_n_leptau_W();
//---------------------------------------------------------------------------------
/*                       Common_n_hadtau_W*/  const int &Common_n_hadtau_W();
//---------------------------------------------------------------------------------
/*                        Common_haslepWSS*/  const bool &Common_haslepWSS();
//---------------------------------------------------------------------------------
/*                            Common_genHT*/  const float &Common_genHT();
//---------------------------------------------------------------------------------
/*                  Common_gen_n_light_lep*/  const int &Common_gen_n_light_lep();
//---------------------------------------------------------------------------------
/*                   Common_gen_VH_channel*/  const int &Common_gen_VH_channel();
//---------------------------------------------------------------------------------
/*                Cut_4LepMET_Preselection*/  const bool &Cut_4LepMET_Preselection();
//---------------------------------------------------------------------------------
/*              Cut_OS2Fatjet_Preselection*/  const bool &Cut_OS2Fatjet_Preselection();
//---------------------------------------------------------------------------------
/*   Cut_OS2Fatjet_Preselection_genmatched*/  const bool &Cut_OS2Fatjet_Preselection_genmatched();
//---------------------------------------------------------------------------------
/*            Cut_OS2Fatjet_OFPreselection*/  const bool &Cut_OS2Fatjet_OFPreselection();
//---------------------------------------------------------------------------------
/*                   Cut_OS2Fatjet_OF2jets*/  const bool &Cut_OS2Fatjet_OF2jets();
//---------------------------------------------------------------------------------
/*                 Cut_OS2Fatjet_OF1fatjet*/  const bool &Cut_OS2Fatjet_OF1fatjet();
//---------------------------------------------------------------------------------
/*                        OS2jet_SFcontent*/  const int &OS2jet_SFcontent();
//---------------------------------------------------------------------------------
/*                  Cut_4LepMET_emuChannel*/  const bool &Cut_4LepMET_emuChannel();
//---------------------------------------------------------------------------------
/*                       OS2jet_Jetcontent*/  const int &OS2jet_Jetcontent();
//---------------------------------------------------------------------------------
/*                 Cut_4LepMET_offzChannel*/  const bool &Cut_4LepMET_offzChannel();
//---------------------------------------------------------------------------------
/*                         OS2jet_Nfatjets*/  const int &OS2jet_Nfatjets();
//---------------------------------------------------------------------------------
/*                  Cut_4LepMET_onzChannel*/  const bool &Cut_4LepMET_onzChannel();
//---------------------------------------------------------------------------------
/*                            OS2jet_Njets*/  const int &OS2jet_Njets();
//---------------------------------------------------------------------------------
/*          Cut_4LepMET_onzChannel_HighMET*/  const bool &Cut_4LepMET_onzChannel_HighMET();
//---------------------------------------------------------------------------------
/*                         OS2jet_Nbjetsv1*/  const int &OS2jet_Nbjetsv1();
//---------------------------------------------------------------------------------
/*             Var_4LepMET_Zcand_lep_idx_0*/  const int &Var_4LepMET_Zcand_lep_idx_0();
//---------------------------------------------------------------------------------
/*                         OS2jet_Nbjetsv2*/  const int &OS2jet_Nbjetsv2();
//---------------------------------------------------------------------------------
/*           Var_4LepMET_Zcand_lep_pdgid_0*/  const int &Var_4LepMET_Zcand_lep_pdgid_0();
//---------------------------------------------------------------------------------
/*                        OS2jet_fatjet_pt*/  const float &OS2jet_fatjet_pt();
//---------------------------------------------------------------------------------
/*              Var_4LepMET_Zcand_lep_p4_0*/  const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &Var_4LepMET_Zcand_lep_p4_0();
//---------------------------------------------------------------------------------
/*                          OS2jet_lep1_pt*/  const float &OS2jet_lep1_pt();
//---------------------------------------------------------------------------------
/*             Var_4LepMET_Zcand_lep_idx_1*/  const int &Var_4LepMET_Zcand_lep_idx_1();
//---------------------------------------------------------------------------------
/*                          OS2jet_lep2_pt*/  const float &OS2jet_lep2_pt();
//---------------------------------------------------------------------------------
/*           Var_4LepMET_Zcand_lep_pdgid_1*/  const int &Var_4LepMET_Zcand_lep_pdgid_1();
//---------------------------------------------------------------------------------
/*                OS2jet_lep12_ptvectorsum*/  const float &OS2jet_lep12_ptvectorsum();
//---------------------------------------------------------------------------------
/*              Var_4LepMET_Zcand_lep_p4_1*/  const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &Var_4LepMET_Zcand_lep_p4_1();
//---------------------------------------------------------------------------------
/*                OS2jet_lep12_ptscalarsum*/  const float &OS2jet_lep12_ptscalarsum();
//---------------------------------------------------------------------------------
/*                   Var_4LepMET_Zcand_mll*/  const float &Var_4LepMET_Zcand_mll();
//---------------------------------------------------------------------------------
/*               OS2jet_lep12_ptscalarprod*/  const float &OS2jet_lep12_ptscalarprod();
//---------------------------------------------------------------------------------
/*             Var_4LepMET_other_lep_idx_0*/  const int &Var_4LepMET_other_lep_idx_0();
//---------------------------------------------------------------------------------
/*                       OS2jet_lep12_mass*/  const float &OS2jet_lep12_mass();
//---------------------------------------------------------------------------------
/*           Var_4LepMET_other_lep_pdgid_0*/  const int &Var_4LepMET_other_lep_pdgid_0();
//---------------------------------------------------------------------------------
/*                         OS2jet_lep12_DR*/  const float &OS2jet_lep12_DR();
//---------------------------------------------------------------------------------
/*              Var_4LepMET_other_lep_p4_0*/  const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &Var_4LepMET_other_lep_p4_0();
//---------------------------------------------------------------------------------
/*                       OS2jet_lep12_DPhi*/  const float &OS2jet_lep12_DPhi();
//---------------------------------------------------------------------------------
/*             Var_4LepMET_other_lep_idx_1*/  const int &Var_4LepMET_other_lep_idx_1();
//---------------------------------------------------------------------------------
/*                       OS2jet_lep12_Deta*/  const float &OS2jet_lep12_Deta();
//---------------------------------------------------------------------------------
/*           Var_4LepMET_other_lep_pdgid_1*/  const int &Var_4LepMET_other_lep_pdgid_1();
//---------------------------------------------------------------------------------
/*                       OS2jet_fatjet1_pt*/  const float &OS2jet_fatjet1_pt();
//---------------------------------------------------------------------------------
/*              Var_4LepMET_other_lep_p4_1*/  const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &Var_4LepMET_other_lep_p4_1();
//---------------------------------------------------------------------------------
/*                       OS2jet_fatjet2_pt*/  const float &OS2jet_fatjet2_pt();
//---------------------------------------------------------------------------------
/*                   Var_4LepMET_other_mll*/  const float &Var_4LepMET_other_mll();
//---------------------------------------------------------------------------------
/*                     OS2jet_fatjet1_mass*/  const float &OS2jet_fatjet1_mass();
//---------------------------------------------------------------------------------
/*                         Var_4LepMET_mt2*/  const float &Var_4LepMET_mt2();
//---------------------------------------------------------------------------------
/*                     OS2jet_fatjet2_mass*/  const float &OS2jet_fatjet2_mass();
//---------------------------------------------------------------------------------
/*                   OS2jet_fatjet1_massSD*/  const float &OS2jet_fatjet1_massSD();
//---------------------------------------------------------------------------------
/*                   OS2jet_fatjet2_massSD*/  const float &OS2jet_fatjet2_massSD();
//---------------------------------------------------------------------------------
/*               OS2jet_fatjet1_subjet0_pt*/  const float &OS2jet_fatjet1_subjet0_pt();
//---------------------------------------------------------------------------------
/*               OS2jet_fatjet1_subjet1_pt*/  const float &OS2jet_fatjet1_subjet1_pt();
//---------------------------------------------------------------------------------
/*              OS2jet_fatjet1_subjet0_eta*/  const float &OS2jet_fatjet1_subjet0_eta();
//---------------------------------------------------------------------------------
/*              OS2jet_fatjet1_subjet1_eta*/  const float &OS2jet_fatjet1_subjet1_eta();
//---------------------------------------------------------------------------------
/*             OS2jet_fatjet1_subjet0_mass*/  const float &OS2jet_fatjet1_subjet0_mass();
//---------------------------------------------------------------------------------
/*             OS2jet_fatjet1_subjet1_mass*/  const float &OS2jet_fatjet1_subjet1_mass();
//---------------------------------------------------------------------------------
/*               OS2jet_fatjet2_subjet0_pt*/  const float &OS2jet_fatjet2_subjet0_pt();
//---------------------------------------------------------------------------------
/*               OS2jet_fatjet2_subjet1_pt*/  const float &OS2jet_fatjet2_subjet1_pt();
//---------------------------------------------------------------------------------
/*              OS2jet_fatjet2_subjet0_eta*/  const float &OS2jet_fatjet2_subjet0_eta();
//---------------------------------------------------------------------------------
/*              OS2jet_fatjet2_subjet1_eta*/  const float &OS2jet_fatjet2_subjet1_eta();
//---------------------------------------------------------------------------------
/*             OS2jet_fatjet2_subjet0_mass*/  const float &OS2jet_fatjet2_subjet0_mass();
//---------------------------------------------------------------------------------
/*             OS2jet_fatjet2_subjet1_mass*/  const float &OS2jet_fatjet2_subjet1_mass();
//---------------------------------------------------------------------------------
/*                     OS2jet_fatjet1_tau1*/  const float &OS2jet_fatjet1_tau1();
//---------------------------------------------------------------------------------
/*                     OS2jet_fatjet1_tau2*/  const float &OS2jet_fatjet1_tau2();
//---------------------------------------------------------------------------------
/*                     OS2jet_fatjet1_tau3*/  const float &OS2jet_fatjet1_tau3();
//---------------------------------------------------------------------------------
/*                    OS2jet_fatjet1_tau21*/  const float &OS2jet_fatjet1_tau21();
//---------------------------------------------------------------------------------
/*                    OS2jet_fatjet2_tau21*/  const float &OS2jet_fatjet2_tau21();
//---------------------------------------------------------------------------------
/*                    OS2jet_fatjet1_tau32*/  const float &OS2jet_fatjet1_tau32();
//---------------------------------------------------------------------------------
/*                    OS2jet_fatjet2_tau32*/  const float &OS2jet_fatjet2_tau32();
//---------------------------------------------------------------------------------
/*                     OS2jet_fatjet2_tau1*/  const float &OS2jet_fatjet2_tau1();
//---------------------------------------------------------------------------------
/*                     OS2jet_fatjet2_tau2*/  const float &OS2jet_fatjet2_tau2();
//---------------------------------------------------------------------------------
/*                     OS2jet_fatjet2_tau3*/  const float &OS2jet_fatjet2_tau3();
//---------------------------------------------------------------------------------
/*                    OS2jet_fatjet1_ll_DR*/  const float &OS2jet_fatjet1_ll_DR();
//---------------------------------------------------------------------------------
/*                    OS2jet_fatjet2_ll_DR*/  const float &OS2jet_fatjet2_ll_DR();
//---------------------------------------------------------------------------------
/*                OS2jet_fatjet12_ll_DRmax*/  const float &OS2jet_fatjet12_ll_DRmax();
//---------------------------------------------------------------------------------
/*             OS2jet_fatjet12_ptvectorsum*/  const float &OS2jet_fatjet12_ptvectorsum();
//---------------------------------------------------------------------------------
/*             OS2jet_fatjet12_ptscalarsum*/  const float &OS2jet_fatjet12_ptscalarsum();
//---------------------------------------------------------------------------------
/*            OS2jet_fatjet12_ptscalarprod*/  const float &OS2jet_fatjet12_ptscalarprod();
//---------------------------------------------------------------------------------
/*                    OS2jet_fatjet12_mass*/  const float &OS2jet_fatjet12_mass();
//---------------------------------------------------------------------------------
/*                 OS2jet_fatjet12_masssum*/  const float &OS2jet_fatjet12_masssum();
//---------------------------------------------------------------------------------
/*             OS2jet_fatjet12_massproduct*/  const float &OS2jet_fatjet12_massproduct();
//---------------------------------------------------------------------------------
/*               OS2jet_fatjet12_massSDsum*/  const float &OS2jet_fatjet12_massSDsum();
//---------------------------------------------------------------------------------
/*           OS2jet_fatjet12_massSDproduct*/  const float &OS2jet_fatjet12_massSDproduct();
//---------------------------------------------------------------------------------
/*                      OS2jet_fatjet12_DR*/  const float &OS2jet_fatjet12_DR();
//---------------------------------------------------------------------------------
/*                    OS2jet_fatjet12_DPhi*/  const float &OS2jet_fatjet12_DPhi();
//---------------------------------------------------------------------------------
/*                    OS2jet_fatjet12_DEta*/  const float &OS2jet_fatjet12_DEta();
//---------------------------------------------------------------------------------
/*                   OS2jet_fatjet1_toptag*/  const float &OS2jet_fatjet1_toptag();
//---------------------------------------------------------------------------------
/*                   OS2jet_fatjet2_toptag*/  const float &OS2jet_fatjet2_toptag();
//---------------------------------------------------------------------------------
/*                     OS2jet_fatjet1_Wtag*/  const float &OS2jet_fatjet1_Wtag();
//---------------------------------------------------------------------------------
/*                     OS2jet_fatjet2_Wtag*/  const float &OS2jet_fatjet2_Wtag();
//---------------------------------------------------------------------------------
/*                     OS2jet_fatjet1_Ztag*/  const float &OS2jet_fatjet1_Ztag();
//---------------------------------------------------------------------------------
/*                     OS2jet_fatjet2_Ztag*/  const float &OS2jet_fatjet2_Ztag();
//---------------------------------------------------------------------------------
/*                   OS2jet_fatjet1_Zbbtag*/  const float &OS2jet_fatjet1_Zbbtag();
//---------------------------------------------------------------------------------
/*                   OS2jet_fatjet2_Zbbtag*/  const float &OS2jet_fatjet2_Zbbtag();
//---------------------------------------------------------------------------------
/*                  OS2jet_fatjet12_WtWtag*/  const float &OS2jet_fatjet12_WtWtag();
//---------------------------------------------------------------------------------
/*                  OS2jet_fatjet12_WpWtag*/  const float &OS2jet_fatjet12_WpWtag();
//---------------------------------------------------------------------------------
/*                         OS2jet_jet1_idx*/  const int &OS2jet_jet1_idx();
//---------------------------------------------------------------------------------
/*                         OS2jet_jet2_idx*/  const int &OS2jet_jet2_idx();
//---------------------------------------------------------------------------------
/*                          OS2jet_jet1_pt*/  const float &OS2jet_jet1_pt();
//---------------------------------------------------------------------------------
/*                          OS2jet_jet2_pt*/  const float &OS2jet_jet2_pt();
//---------------------------------------------------------------------------------
/*                OS2jet_jet12_ptvectorsum*/  const float &OS2jet_jet12_ptvectorsum();
//---------------------------------------------------------------------------------
/*                OS2jet_jet12_ptscalarsum*/  const float &OS2jet_jet12_ptscalarsum();
//---------------------------------------------------------------------------------
/*               OS2jet_jet12_ptscalarprod*/  const float &OS2jet_jet12_ptscalarprod();
//---------------------------------------------------------------------------------
/*                       OS2jet_jet12_mass*/  const float &OS2jet_jet12_mass();
//---------------------------------------------------------------------------------
/*                         OS2jet_jet12_DR*/  const float &OS2jet_jet12_DR();
//---------------------------------------------------------------------------------
/*                       OS2jet_jet12_DPhi*/  const float &OS2jet_jet12_DPhi();
//---------------------------------------------------------------------------------
/*                       OS2jet_jet12_DEta*/  const float &OS2jet_jet12_DEta();
//---------------------------------------------------------------------------------
/*                              OS2jet_MET*/  const float &OS2jet_MET();
//---------------------------------------------------------------------------------
/*                 OS2jet_MET_fatjet1_DPhi*/  const float &OS2jet_MET_fatjet1_DPhi();
//---------------------------------------------------------------------------------
/*                      OS2jet_MET_ll_DPhi*/  const float &OS2jet_MET_ll_DPhi();
//---------------------------------------------------------------------------------
/*   OS2jet_fatjet1_Recojet_matchJet_DRmin*/  const float &OS2jet_fatjet1_Recojet_matchJet_DRmin();
//---------------------------------------------------------------------------------
/*              OS2jet_fatjet1_genmatching*/  const int &OS2jet_fatjet1_genmatching();
//---------------------------------------------------------------------------------
/*              OS2jet_fatjet2_genmatching*/  const int &OS2jet_fatjet2_genmatching();
//---------------------------------------------------------------------------------
/*            OS2jet_fatjet1_genmatchingv2*/  const int &OS2jet_fatjet1_genmatchingv2();
//---------------------------------------------------------------------------------
/*            OS2jet_fatjet2_genmatchingv2*/  const int &OS2jet_fatjet2_genmatchingv2();
//---------------------------------------------------------------------------------
/*            OS2jet_fatjet1_genmatchingv3*/  const int &OS2jet_fatjet1_genmatchingv3();
//---------------------------------------------------------------------------------
/*                          OS2jet_genMVVV*/  const float &OS2jet_genMVVV();
//---------------------------------------------------------------------------------
/*                         OS2jet_genpTVVV*/  const float &OS2jet_genpTVVV();
//---------------------------------------------------------------------------------
/*                  OS2jet_Mfatjetsleptons*/  const float &OS2jet_Mfatjetsleptons();
//---------------------------------------------------------------------------------
/*              OS2jet_MTfatjetsleptonsMET*/  const float &OS2jet_MTfatjetsleptonsMET();
//---------------------------------------------------------------------------------
/*                 OS2jet_fatjet1_tau21cut*/  const bool &OS2jet_fatjet1_tau21cut();
//---------------------------------------------------------------------------------
/*                OS2jet_fatjet1_massSDcut*/  const bool &OS2jet_fatjet1_massSDcut();
//---------------------------------------------------------------------------------
/*                  OS2jet_Nfatjets_vloose*/  const int &OS2jet_Nfatjets_vloose();
//---------------------------------------------------------------------------------
/*                   OS2jet_Nfatjets_loose*/  const int &OS2jet_Nfatjets_loose();
//---------------------------------------------------------------------------------
/*                  OS2jet_Nfatjets_medium*/  const int &OS2jet_Nfatjets_medium();
//---------------------------------------------------------------------------------
/*                 OS2jet_fatjetwgt_vloose*/  const float &OS2jet_fatjetwgt_vloose();
//---------------------------------------------------------------------------------
/*                  OS2jet_fatjetwgt_loose*/  const float &OS2jet_fatjetwgt_loose();
//---------------------------------------------------------------------------------
/*                 OS2jet_fatjetwgt_medium*/  const float &OS2jet_fatjetwgt_medium();
//---------------------------------------------------------------------------------
}
#endif
