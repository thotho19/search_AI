
/interface bridge
add name=bridge1
/interface ethernet
set [ find default-name=ether1 ] speed=100Mbps
/interface wireless
set [ find default-name=wlan1 ] band=5ghz-a/n channel-width=20/40mhz-Ce \
    disabled=no frequency=5115 frequency-mode=superchannel mode=station-wds \
    rx-chains=0,1 scan-list=5930,5940 ssid=Earthlink@silicon tx-chains=0,1 \
    wds-default-bridge=bridge1 wds-mode=dynamic
/interface wireless nstreme
set wlan1 enable-nstreme=yes
/interface wireless security-profiles
set [ find default=yes ] supplicant-identity=MikroTik
/tool user-manager customer
set admin access=\ own-routers,own-users,own-profiles,own-limits,config-payment-gw
/interface bridge port
add bridge=bridge1 interface=wlan1
add bridge=bridge1 hw=no interface=ether1
/ip address
add address=10.83.24.3/24 interface=wlan1 network=10.83.24.0
/ip route
add distance=1 gateway=10.83.24.1
/system lcd
set contrast=0 enabled=no port=parallel type=24x4
/system lcd page
set time disabled=yes display-time=5s
set resources disabled=yes display-time=5s
set uptime disabled=yes display-time=5s
set packets disabled=yes display-time=5s
set bits disabled=yes display-time=5s
set version disabled=yes display-time=5s
set identity disabled=yes display-time=5s
set bridge1 disabled=yes display-time=5s
set wlan1 disabled=yes display-time=5s
set ether1 disabled=yes display-time=5s
/tool bandwidth-server
set authenticate=no
/tool user-manager database
set db-path=user-manager
