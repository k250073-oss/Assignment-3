#include <stdio.h>

int s1, s2, s3, total ; 
float percentage;
int main() {
	

	printf(" Enter Subject 1 marks : ");
	scanf("%d", &s1 );
	printf(" Enter Subject 2 marks : ");
	scanf("%d", &s2 );
	printf(" Enter Subject 3 marks : ");
	scanf("%d", &s3 );
	
	total = s1 + s2 + s3;
	
	percentage = total/300.0 * 100.0;
	
	printf(" Total marks are : %d \n" , total);
	printf(" Percentage is : %.2f" , percentage);
	
	
	
	
	
	return 0;
}
