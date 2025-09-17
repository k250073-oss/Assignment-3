#include <stdio.h>

float base, hra, da, gross;

int main(){
	
	printf("Enter base salary : ");
	scanf("%f", &base);
	
	hra = 0.1 * base;
	da = 0.05 * base;
	
	gross = base + hra + da;
	
	printf("Gross salary is : %.2f" , gross);
	
	
	
	
	
	
	
	
	return 0;
}
