/*Write a program of structure employee that provides the following
a. information -print and display empno, empname, address
andage*/

#include<stdio.h>
#include<string.h>
struct employee
{
	int empno,age;
	char empname[100],address[100];
};
int main()
{
	struct employee e1;
	e1.empno=1;
	strcpy(e1.empname,"Shradha");
	strcpy(e1.address,"Ahmedabad");
	e1.age=21;
	
	printf("\n Employee No:%d ",e1.empno);
	printf("\n Employee Name:%s",e1.empname);
	printf("\n Employee Adress:%s",e1.address);
	printf("\n Employee Age:%d",e1.age);
	return 0;
}


