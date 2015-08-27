#!/usr/bin/wish
load /root/tcl_api/tcl_lancer.so tcl_lancer

set ip "192.168.1.12"
set port 32000
puts $ip
set sock [lancer_connect $ip 32000]

config_send $sock  $ip  12


