#include<stdio.h>
int main()
{ 
	int a,b;
	printf("Enter the value of a: ");
	scanf("%d",&a);
	printf("Enter the value of b: ");
	scanf("%d",&b);
	int c;
	c = a*a*a-b*b*b-3*a*b*(a-b);
	printf("%d",c);
	return 0;
}

