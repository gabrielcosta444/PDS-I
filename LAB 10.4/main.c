#include <stdio.h>
#include <stdlib.h>

int FibonacciRec(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return FibonacciRec(n - 1) + FibonacciRec(n - 2);
    }
}

int main() {
    int a;
    scanf("%d", &a);
    printf("%d\n", FibonacciRec(a));
    return 0;
}
