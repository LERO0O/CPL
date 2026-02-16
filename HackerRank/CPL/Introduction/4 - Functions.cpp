#include <stdio.h>

int maxOfFour(int a, int b, int c, int d) {
    int ar[4] = {a, b, c, d};
    for(int i = 1; i < 4; i++) {
        if(a < ar[i]) {
            a = ar[i];
        }
    }
    return a;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    int theGreatest = maxOfFour(a, b, c, d);
    printf("%d", theGreatest);
    
    return 0;
}