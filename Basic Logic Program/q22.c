/*Calculate compound interest (Compound Interest formula:
a. Formula to calculate compound interest annually is given by:
Amount= P(1 + R/100)t
b. Compound Interest = Amount – P*/

#include<stdio.h>
int main()
{
	float P,R,t,Amount,Interest;
	printf("Enter The Principle:");
	scanf("%f",&P);
	printf("Enter The Rate Of Interest:");
	scanf("%f",&R);
	printf("Enter The Time :");
	scanf("%f",&t);
	Amount=P*(1+R/100)*t;
	Interest=Amount-P;
	printf("Enter The Amount:%.2f",Amount);
	printf("\n Compound Interest:%.2f",Interest);
	return 0;
	
}
