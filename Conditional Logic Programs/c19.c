/*Q19.Write a program in C to calculate and print the electricity bill of a given
customer. The customer ID, name, and unit consumed by the user should
be captured from the keyboard to display the total amount to be paid to the
customer. The charge are as follow :
20. Unit                                          21. Charge/unit
22. upto 350                                      23. @1.20
24. 350 and above but less than 600               25. @1.50
26. 600 and above but less than 800               27. @1.80
28. 800 and above                                 29. @2.00
30.If bill exceeds Rs. 800 then a surcharge of 18% will be charged andthe
minimum bill should be of Rs. 256/-
*/

#include<stdio.h>
int main()
{
    int unit , amount ,tax ,id, Totalamount;
	char name;
	
 	printf("Enter your ID :");
	scanf("%d",&id);
	
	printf("Enter your Name :");
	scanf(" %c",&name);
 	
	printf("Enter the Units:");
	scanf("%d",&unit);
	
	
	if(unit < 350)
	{
		amount = unit*1.20;
		
		if(amount>800)
		{
			tax= amount*0.18;
			Totalamount = amount+tax;
			printf("\nCustomer ID = %d",id);
			printf("\nCustomer Name = %c",name);
			printf("\nTotal amount including Tax = %d",Totalamount);
		}
		else if( amount>=0 && amount<800)
		{
			tax = 256 ;
			Totalamount = amount+tax;
			printf("\nCustomer ID = %d",id);
			printf("\nCustomer Name = %c",name);
			printf("\nTotal amount including Tax = %d",Totalamount);
	
		}
		else
		{
			printf("Error");
		}
	}
	else if ( unit >= 350 && unit <600)
	{
		amount = unit*1.50;
		
		if(amount>800)
		{
			tax= amount*0.18;
			Totalamount = amount+tax;
			printf("\nCustomer ID = %d",id);
			printf("\nCustomer Name = %c",name);
			printf("\nTotal amount including Tax = %d",Totalamount);
		}
		else if( amount>=0 && amount<800)
		{
			tax = 256 ;
			Totalamount = amount+tax;
			printf("\nCustomer ID = %d",id);
			printf("\nCustomer Name = %c",name);
			printf("\nTotal amount including Tax = %d",Totalamount);
	
		}
		else
		{
			printf("Error");
		}
	}
	else if ( unit >=600 && unit <800)
	{
		amount = unit*1.80;
		
		if(amount>800)
		{
			tax= amount*0.18;
			Totalamount = amount+tax;
			printf("\nCustomer ID = %d",id);
			printf("\nCustomer Name = %c",name);
			printf("\nTotal amount including Tax = %d",Totalamount);
		}
		else if( amount>=0 && amount<800)
		{
			tax = 256 ;
			Totalamount = amount+tax;
			printf("\nCustomer ID = %d",id);
			printf("\nCustomer Name = %c",name);
			printf("\nTotal amount including Tax = %d",Totalamount);
	
		}
		else
		{
			printf("Error");
		}
	}
	else 
	{
		amount = unit*2.00;
		
		if(amount>800)
		{
			tax= amount*0.18;
			Totalamount = amount+tax;
			printf("\nCustomer ID = %d",id);
			printf("\nCustomer Name = %c",name);
			printf("\nTotal amount including Tax = %d",Totalamount);
		}
		else if( amount>=0 && amount<800)
		{
			tax = 256 ;
			Totalamount = amount+tax;
			printf("\nCustomer ID = %d",id);
			printf("\nCustomer Name = %c",name);
			printf("\nTotal amount including Tax = %d",Totalamount);
	
		}
		else
		{
			printf("Error");
		}
	}
	
	return 0;
}
