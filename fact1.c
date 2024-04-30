#include <stdio.h>
int main() {
    int n, j;
    unsigned long long fact = 1;
    printf("Enter an int: ");
    scanf("%d",&n);

    // shows error if the user enters a negative integer
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else {
        for (j = 1; j <= n; ++j) {
            fact *= j;
        }
        printf("Factorial of %d = %llu", n, fact);
    }

    return 0;
}

