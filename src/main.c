#include"he.h"
void push(char *w,int len,int coun);
int search(char *w,int len);


int main()
{
	
	char c1[50],c2[50];
	int count,len,i,j,k,o,ch;
	do{
		printf("\n\tMENU\n1.Search word\n2.Exit\nOption?");
		scanf("%d",&ch);
		if(ch==1){
			count=0;len=0;
			printf("\nEnter length of word to be searched:");
			scanf("%d",&len);
			printf("\nEnter word to be searched:");
			scanf("%s",c1);
			o=search(c1,len);
			if(o==-1)
			{
				FILE *f=fopen("/home/inxs/proj/sample.txt","r");
				fscanf(f,"%s",c2);
				while(!feof(f))
				{
					
							
					for(i=0;c1[i];i++)
						if(c1[i]!=c2[i]) break;
					if(i==len) count++;
					fscanf(f,"%s",c2);
					
				}
				fclose(f);
				push(c1,len,count);
				printf("\nCount:%d",count);
			}
			else printf("\nCount:%d",o);
		}
		
	}while(ch!=2);
	return 0;
}

