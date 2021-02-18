source rooutil/thisrooutil.sh
source rooutil/root.sh
source ~/.bashrc
voms-proxy-init --rfc --voms cms -valid 192:00
cd ProjectMetis
source setup.sh
cd ..
