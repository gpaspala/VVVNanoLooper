#!/bin/bash
echo 'executing'


#./doVVVAnalysis -i /hadoop/cms/store/user/rembserj/samples/WWZ_dim8_20200605_double_lepton_RunIIAutumn18NanoAOD/NanoAODv7/file-001.root -t Events -o wwz_eft_newPtcut.root --mode 8 -w

./doVVVAnalysis -i /hadoop/cms/store/user/rembserj/samples/WWZ_dim8_20200605_double_lepton_RunIIAutumn18NanoAOD/NanoAODv7/file-001.root -t Events -o EFT_WZZ_incl.root --mode 0 -w

./doVVVAnalysis -i EFT_WZZ_incl_2018.root -e 0 -t t -o wwz_EFT_weight4Lep_0.root --mode 0 -V
./doVVVAnalysis -i EFT_WZZ_incl_2018.root -e 1 -t t -o wwz_EFT_weight4Lep_m10.root --mode 0 -V
./doVVVAnalysis -i EFT_WZZ_incl_2018.root -e 2 -t t -o wwz_EFT_weight4Lep_m5.root --mode 0 -V
./doVVVAnalysis -i EFT_WZZ_incl_2018.root -e 3 -t t -o wwz_EFT_weight4Lep_m1.root --mode 0 -V
./doVVVAnalysis -i EFT_WZZ_incl_2018.root -e 4 -t t -o wwz_EFT_weight4Lep_1.root --mode 0 -V
./doVVVAnalysis -i EFT_WZZ_incl_2018.root -e 5 -t t -o wwz_EFT_weight4Lep_5.root --mode 0 -V
./doVVVAnalysis -i EFT_WZZ_incl_2018.root -e 6 -t t -o wwz_EFT_weight4Lep_10.root --mode 0 -V

#./doVVVAnalysis -i wwz_eft_newPtcut.root -t t -o wwz_eft_newPtcutVVV.root --mode 8 -w -V
