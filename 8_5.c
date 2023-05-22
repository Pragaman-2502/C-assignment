//Write a C program to check whether a number is prime or not using pointer to function.

#include <stdio.h>

int isPrime(int num);

int main() {
    int num;
    int (*ptr)(int);

    printf("Enter a number: ");
    scanf("%d", &num);

    ptr = isPrime;

    if ((*ptr)(num))
        printf("The number is prime.\n");
    else
        printf("The number is not prime.\n");

    return 0;
}
int isPrime(int num) {
    if (num <= 1)
        return 0;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }

    return 1;
}