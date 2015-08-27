#!/usr/bin/python
import python_lancer

ip = "192.168.1.12"
port = 32000
sock = python_lancer.lancer_connect(ip,32000)

python_lancer.config_send(sock,ip,12)


