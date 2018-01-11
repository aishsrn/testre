
#include"he.h"
struct li 
{char c[50];
 long int co;
 struct li *next;}*front,*rear,*l;
pthread_mutex_t mutex=PTHREAD_MUTEX_INITIALIZER;


void push(char *w,int len,long int coun)
{
	int i;
	struct li x;
	for(i=0;i<len;i++) x.c[i]=w[i];
	x.co=coun;
	x.next=NULL;
	if(front==NULL)
	{
		front=rear=&x;
		
	}
	else
	{
		front->next=&x;
		front=&x;
	}
}
int search(char *w,int len)
{
	int i;
	l=rear;
	while(l!=NULL)
	{
		for(i=0;i<len;i++)
			if(w[i]!=l->c[i])
				break;
		if(i==len) return l->co;
    		l=l->next;
	}
	return -1;
}

void *ficount(char *c1)
{
	long int count=0,o,len,i;
	char c2[50];
	for(len=0;c1[len];len++);
	
	
	
		FILE *f=fopen("/home/inxs/proj/sample2.txt","r");
		fscanf(f,"%s",c2);
		while(!feof(f))
		{
			for(i=0;c1[i];i++)
				if(c1[i]!=c2[i]) break;
			if(i==len) count++;
			fscanf(f,"%s",c2);
		}
		fclose(f);
		pthread_mutex_lock(&mutex);
		
		pthread_mutex_unlock(&mutex);
		printf("\nWord: %s\tCount:%ld",c1,count);
		
		
}


