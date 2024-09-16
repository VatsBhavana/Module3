/*.Write a C program to input electricity unit charges and calculate total
electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill*/


#include<stdio.h>
int main()
{
	float unit,total=0,surcharge,totalunit;
	printf("Enter The Electricity Unit:");
	scanf("%f",&unit);
    if(unit<=50)
	{
		total=unit*0.5;
		printf("\n %.2f:",total);
	}	
	else if(unit<=150)
	{
	    total=(50*0.5)+(unit-50)*0.75;
	    printf("\n %.2f:",total);
	}
	else if(unit<=250)
	{
		total=(50*0.5)+(100*0.75)+(unit-150)*1.20;
		printf("\n %.2f:",total);
	}
	else
	{
	    total=(50*0.5)+(100*0.75)+(100*1.20)+(unit-250)*1.50;
	    printf("\n %.2f:",total);
	}
	surcharge=total*0.20;
	totalunit=total+surcharge;
	printf("\n Surcharge:%.2f",surcharge);
	printf("\n Totalunit:%.2f",totalunit);
	return 0;
}
