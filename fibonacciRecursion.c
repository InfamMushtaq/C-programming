#include <stdio.h>

// Function to get Fibonacci number at position n
int fibonacci(int n);
int main() {
    int n, i;
    // Input: Number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    return 0;
}
int fibonacci(int n) {
    if (n == 0) 
        return 0;
    else if (n == 1) 
        return 1;
    else 
        return fibonacci(n - 1) + fibonacci(n - 2);
}