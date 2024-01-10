#include <stdio.h>

int fibonacci(int n) {
    // Base cases
    if (n <= 1) {
        return n;
    } else {
        // Recursive case
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n ;
    printf("Enter the position for which you want to find the fibonacci number: ");
    scanf("%d",&n);
    printf("Fibonacci number at position %d is: %d\n", n, fibonacci(n));

    return 0;
}
