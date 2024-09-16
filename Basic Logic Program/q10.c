//.find the area of a rectangular prism formula : A=2(wl+hl+hw)

#include<stdio.h>
int main()
{
	int A,w,l,h;
	printf("Enter The width:");
	scanf("%d",&w);
	printf("Enter The Height:");
	scanf("%d",&h);
	printf("Enter The Length:");
	scanf("%d",&l);
	A=(w*l+h*l+h*w)*2;
	printf("Area Of Rectangular Prism:%d",A);
	return 0;
}
