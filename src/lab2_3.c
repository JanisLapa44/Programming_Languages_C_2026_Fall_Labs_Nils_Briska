#include <stdio.h>
#include <math.h>

/*
    Task:
    Write a function `int is_prime(int n)` that returns 1 if n is prime,
    0 otherwise.

    In main():
      - Ask user for an integer n (>= 2)
      - If invalid, print an error
      - Otherwise, print all prime numbers up to n
*/

int is_prime(int n) {
    // TODO: check if n is prime using loop up to sqrt(n)

    int is_prime = 1;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            is_prime = 0;
            break;
        }
    }
    return is_prime;
}

int main(void) {
    int n;

    printf("Enter an integer n (>= 2): ");
    scanf("%d", &n);

    // TODO: validate input and print all primes up to 
    
    if (n < 2) {
        printf("Invalid input! Input an integer that is larger than 2\n");
    }
    else {
        for (int i = 2; i <= n; i++) 
        {
            if(is_prime(i)) 
            {
                printf("%d\n", i);
            }
        }
    }

    return 0;
}
