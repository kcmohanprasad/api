#include <ctype.h>
#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <getopt.h>
#include <netdb.h>
#include <signal.h>

#include <sys/socket.h>
#include <sys/types.h>

#include "include.h"

int lancer_connect(char* host, int port)
{
    printf("Lancer Connected %d\n",port);
    return udpclient( host,port );
}

void config_send ( int sockfd, char * buffer, int len)
{
    send_msg ( sockfd, buffer, len);
    printf("Sending Data to socket\n");
}

/*
int recv_msg(int sockfd, unsigned char * inBufP )
{

}
*/

