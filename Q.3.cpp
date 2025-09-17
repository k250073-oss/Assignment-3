#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer between 65 and 90: ");
    scanf("%d", &num);

    if (num >= 65 && num <= 90) {
    	
        printf("Integer: %d\n", num);
        printf("ASCII Character: %c\n", (char)num);
        
    } else {
        printf("Error: Input must be between 65 and 90.\n");
    }

    return 0;
}

