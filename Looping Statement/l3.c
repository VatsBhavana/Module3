/*WAP to take 10 no. Input from user find out below values
a. How many Even numbers are there
b. How many odd numbers are there
c. Sum of even numbers
d. Sum of odd numbers*/

#include<stdio.h>
int main()
{
	int i,sume=0,sumo=0,counte=0,counto=0,num;
	for(i=1;i<=10;i++)
	{
		num=i;
		printf("\n Enter 1 To 10 Number:");
		scanf("%d",&num);
	    if(num%2==0)
	    {
		    counte++;
		    sume=sume+num;
		    printf("\n %d",num);
	    }
	    else
	    {
	    	counto++;
	    	sumo=sumo+num;
	    	 printf("\n %d",num);
		}
    }
    printf("\n Even Number:%d",counte);
    printf("\n Sum Of Even Number:%d",sume);
    printf("\n Odd Number:%d",counto);
    printf("\n Sum Of Odd Number:%d",sumo);
    return 0;
}
