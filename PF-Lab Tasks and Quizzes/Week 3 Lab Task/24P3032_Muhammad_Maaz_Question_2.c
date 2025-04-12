#include<stdio.h>
#include<math.h>
int main()
{   
    float a;
    float b;
	printf("Enter the first Number: ");
	scanf("%f",&a);
	printf("Enter the second Number: ");
	scanf("%f",&b);
	float sum=a+b;
	printf("The sum is of %.2f and %.2f is:  %.2f\n",a,b,sum);
	float difference=a-b;
	printf("The difference of %.2f and %f is: %.2f\n",a,b,difference);
	float product=a*b;
	printf("The product of %.2f and %.2f is: %.2f\n",a,b,product);
	float quotient=a/b;
	printf("The division of %.2f and %f is: %.2f\n",a,b,quotient);
	float modulus= fmod(a,b);
	printf("The modulus of %.2f and %.2f is: %.2f\n",a,b,modulus);
	
	return 0;
}
