#include<stdio.h>
#include<string.h>
#include<stdlib.h>


float hashingf(char* str,int k,int len)
{
        float i=0;
        int j=0;
	for(j=k;j<k+len;j++)
        {
                i+=(int)str[j];
        }
        return i/100;
}



int main()
{
        char str1[100],pat[100];
        scanf("%s",str1);
        scanf("%s",pat);
        int len=strlen(pat),i=0;
	float pat1=hashingf(pat,0,strlen(pat));
	int arr[100],n=0,nm=0;
	for(i=0;i<strlen(str1)-len+1;i++)
	{
		float m=hashingf(str1,i,len);
		if(m==pat1)
			{
				n=0;
				while(n<len)
				{
					if(pat[n]!=str1[i+n])
					{
						break;
					}
					n++;
				}
				if(n==len)
				{
					printf("index no is %d\n",i);
				}
				
			}
	}
        
}

