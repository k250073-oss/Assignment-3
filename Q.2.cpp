#include <stdio.h>

int a, b, x;

int main(){
	
	printf("enter value 1 :");
	scanf("%d" , &a);
	printf("enter value 2 :");
	scanf("%d" , &b);
	
	x = a;
	a = b;
	b = x;
	
	printf("Value 1 is : %d\n" , a);
	printf("Value 2 is : %d" , b);
	
	
	
	return 0;
}
