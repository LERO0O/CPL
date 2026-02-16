#include <stdio.h>

void update(int *a, int *b) {
    if(*a > *b) {
    	printf("%d\n", *a + *b);
    	printf("%d", *a - *b);
	} else {
		printf("%d\n", *b + *a);
		printf("%d", *b - *a);
	}
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    int *pA = &a;
	int *pB = &b;
    update(pA, pB);

    return 0;
}