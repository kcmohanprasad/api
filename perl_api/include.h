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
#include <netinet/in.h>
#include <arpa/inet.h>

#include <sys/socket.h>
#include <sys/types.h>
#include <netdb.h>

int udpsocket( int myport );

int udpclient( char* host, int theirport );

void send_msg ( int sockfd, unsigned char * outMsgP, int len);

int recv_msg(int sockfd, unsigned char * inBufP );

int lancer_connect(char* host, int port);
void config_send ( int sockfd, char * buffer, int len);
