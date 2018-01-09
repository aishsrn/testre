#include"home/inxs/proj/header/he.h"
struct li 
{char c[50];
 int co;
 struct li *next;}*front,*rear,*l;
void push(char *w,int len,int coun)
{
	int i;
	struct li *x=(struct li*)malloc (sizeof(struct li));
	for(i=0;i<len;i++) x->c[i]=w[i];
	x->co=coun;
	x->next=NULL;
	if(front==NULL)
	{
		front=rear=x;
		
	}
	else
	{
		front->next=x;
		front=x;
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

