#include <stdio.h>

/*
    Task:
    Write a function `long long factorial(int n)` that computes n!
    using a loop (not recursion).

    In main():
      - Ask user for an integer n
      - If n is negative, print an error and exit
      - Otherwise, call factorial and print the result
*/

long long factorial(int n) {

    long long result = 1;
    int i = 1;
    do {
        result = result * i;
        i++;
    } 
    while (i <= n);
    // TODO: compute factorial iteratively
    return result;
}

int main(void) {
    int n;

    printf("Enter a non-negative integer n: ");
    scanf("%d", &n);

    // TODO: validate input, call function, print result

    if (n < 0) {
        printf("Integer must be non-negative!\n");
    }
    else {
        printf("%lld\n", factorial(n));
    }

    return 0;
}
