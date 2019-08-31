//~ input:Apssdc@1234
//~ Output:Capital letters:1
	   //~ Small letters:5
	   //~ Special symbols:1
	   //~ Numbers:4
#include<stdio.h>
int main()
{
	char str[100];
	gets(str);
	int i,cc=0,sc=0,nc=0,spc=0;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			cc=cc+1;//cc++
		}
		else if(str[i]>='a' && str[i]<='z')
		{
			sc++;
		}
		else if(str[i]>='0' &&str[i]<='9')
		{
			nc++;
		}
		else
		{
			spc++;
		}
			
	}
	printf("Capital letters:%d\n",cc);
	printf("Small letters:%d\n",sc);
	printf("Numbers count:%d\n",nc);
	printf("Special symbols:%d",spc);
	return 0;
}
