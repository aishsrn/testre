#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
void push(char *w,int len,int coun);
int search(char *w,int len);
void *ficount(char *c1);
pthread_mutex_t mutex;



