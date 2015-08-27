#!/usr/bin/perl
use perl_lancer;

$ip = "192.168.1.12";
$port = 32000;
$sock = perl_lancer::lancer_connect($ip,32000);

perl_lancer::config_send($sock,$ip,12);


