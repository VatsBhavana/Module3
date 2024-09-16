/*.Accept number of students from user. I need to give 5 apples to each
student. How many apples are required?*/

#include<stdio.h>
int main()
{
   int stud,appl=5,total;
   printf("Enter The Number Of Student:");
   scanf("%d",&stud);
   total=stud*appl;
   printf("Total Number Of Apple Required:%d",total);
   return 0;	
}
