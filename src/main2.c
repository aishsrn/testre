#include"he.h"
void push(char *w,int len,int coun);
int search(char *w,int len);
void *ficount();
int main()
{
	
	char c1[50],c2[50];
	int count,len,i,j,k,o,ch,h,n;
	printf("Enter number of test cases:");
	scanf("%d",&n);
	pthread_t *tid=(pthread_t *)malloc(sizeof(pthread_t)*n);
	for(h=0;h<n;h++)
	{				
		pthread_create(&tid[h],NULL,ficount,NULL);
			
	}
	pthread_join(tid[n-1],NULL);
	return 0;
}

