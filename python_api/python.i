%module python_lancer
%{
#include "include.h"
%}

// ANSI C/C++ prototypes
int lancer_connect(char* host, int port);
void config_send ( int sockfd, char * buffer, int len);
