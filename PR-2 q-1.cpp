#include<stdio.h>

int main()

{
	int a;

	printf("enter number =");
	scanf("%d",&a);

	(a%2==0)? printf(" This number is even") :printf("This number is odd");

	return 0;
}