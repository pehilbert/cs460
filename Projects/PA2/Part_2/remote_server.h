#include <arpa/inet.h>
#include <fcntl.h>
#include <netinet/in.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <syslog.h>

// added libraries //
//#include <netdb.h>
#include <time.h>
#include <string.h>
#include <signal.h>


/* Function prototypes */
void* handle_client(void* arg);
void get_current_time( char *outStr );

/* Preprocessor directives */
#define SERVER_ADDR "hwsrv-1035768.hostwindsdns.com"
#define PORT 13

/*
#define SERVER_ADDR "localhost"
#define PORT 8080              // port the server will listen on
*/
#define FALSE 0
#define TRUE !FALSE

#define NUM_CONNECTIONS 5       // number of pending connections in the connection queue

#define ASTERISK '*'
#define NULL_CHAR '\0'
#define BUFFER_SIZE 1024
#define HUGE_STR_LEN 256