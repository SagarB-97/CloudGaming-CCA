CLIENT_DATA_IP="10.0.0.1"
CLIENT_CTL_IP="192.168.1.101"
SERVER_DATA_IP="10.0.0.2"
SERVER_CTL_IP="192.168.1.102"
S2C_CCA="bbr"
C2S_CCA="reno"
DOWN_FLOW_DUR=10.0
UP_FLOW_DUR=5.0
LOGFILE="fg.log"

flowgrind -i 0.01 -n 2 -I \
        -F 0 -T s=$DOWN_FLOW_DUR -O s=TCP_CONGESTION=$S2C_CCA \
        -H s=$SERVER_DATA_IP/$SERVER_CTL_IP,d=$CLIENT_DATA_IP/$CLIENT_CTL_IP \
        -F 1 -T s=$UP_FLOW_DUR -O s=TCP_CONGESTION=$C2S_CCA -Y s=2.0 \
        -H s=$CLIENT_DATA_IP/$CLIENT_CTL_IP,d=$SERVER_DATA_IP/$SERVER_CTL_IP \
        2>&1 | tee $LOGFILE
