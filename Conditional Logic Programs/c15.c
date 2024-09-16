/*.Write a C program to determine eligibility for admission to a professional
course based on the following criteria
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks
in Chem>=50 and Total in all three subject >=190 or Total in Maths and
Physics >=140 --------------------------------------Input the marks obtained in
Physics :65 Input the marks obtained in Chemistry :51 Input the marks
obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry :
188 Total marks of Maths and Physics : 137 The candidate is not eligible.*/

#include<stdio.h>
int main()
{
	int math,phy,chem,total_marks,math_phy;
	printf("Enter The Math Marks:");
	scanf("%d",&math);
	printf("Enter The phy Marks:");
	scanf("%d",&phy);
	printf("Enter The chem Marks:");
	scanf("%d",&chem);
	total_marks = math+phy+chem;
	printf("\n Total Marks Of phy chem math:%d",total_marks);
	math_phy=math+phy;
	printf("\n Total Marks Of math & phy:%d",math_phy);
	if((math>=65) && (phy>=55) &&(chem>=50) && (total_marks>=190) || (math_phy>=140))
	
	{
			printf("\n Candidate Are Eligible For Admission.");
	}
	else
	{
		    printf("\n Candidate Are Not Eligible For Admission.");
	}
	return 0;
}
