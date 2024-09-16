  //WAP to show difference between Structure and Union.
  
  
//structure:= it is user difine datatype that holds multiple member of differnt datatype under unit.
//structure can use struct key word.


#include<stdio.h>
struct Student
{
	int roll;
	float per;
	char grd;
};
int main()
{
	struct Student s1;
	s1.roll = 101;
	s1.per = 98.7;
	s1.grd = 'A';
	
	printf("\nStudent roll no. = %d",s1.roll);
	printf("\nStudent percentage = %.2f",s1.per);
	printf("\nStudent grade = %c",s1.grd);
	
	return 0;
}


//union := it is user difine datatype that allow storing different data types in the same mamory location.

#include<stdio.h>
union Demo
{
	int num;
	char ch;
	float f1;	
};
int main()
{
	union Demo d1;
	d1.num = 65;
	d1.ch = 'Z';
	printf("\nValue of num = %d",d1.num);
	printf("\nValue of ch = %c",d1.ch);
	return 0;
}
