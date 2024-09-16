//Convert country’s name in abbreviate form

#include<stdio.h>
#include<string.h>
int main()
{
	char cname[100],abr[100];
	int i,j=0;
	printf("\nEnter The Country Name = ");
	gets(cname);
	
	printf("\nOriginal Country Name = %s",cname);
	
	for(i=0;cname[i]!='\0';i++)
	{
		if((i==0 || cname[i-1]==' ') && cname[i]!=' ')
		{
			abr[j] = cname[i];
			j++;
		}
	}
    strupr(abr);
	printf("\nAbbriviated Form = %s",abr);
	return 0;
}
