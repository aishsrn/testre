#include"he.h"
void push(char *w,int len,long int coun);
int search(char *w,int len);
void *ficount(char* c1);

int main()
{
	
	char c1[50][50];
	int count,len,i,j,k,o,ch,h,n;
	printf("Enter number of test cases:");
	scanf("%d",&n);
	pthread_t *tid=(pthread_t *)malloc(sizeof(pthread_t)*n);
	for(i=0;i<n;i++)
	{	
		printf("\nEnter word:");
		scanf("%s",c1[i]);
	}
	for(h=0;h<n;h++)
	{				
		pthread_create(&tid[h],NULL,ficount,c1[h]);
			
	}
	pthread_join(tid[n-1],NULL);
	return 0;
}

