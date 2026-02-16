#include <stdio.h>
int main() {
	int str[100];
	printf("Try: Welcome to C Programming!\n");
	scanf("%[^\n]%*c", &str);
	
	printf("\nHello, World!\n");
	printf("%s", str);
	
	return 0;
}