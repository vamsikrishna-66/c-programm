#include <stdio.h>

int isPrime(int num) {
    int i;

    if (num == 0 || num == 1) {
        return 0;
    }

    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0;
        }
    }

    return 1;
}

int checkSumOfPrimes(int num) {
    int i;

    for (i = 2; i <= num / 2; i++) {
        if (isPrime(i) && isPrime(num - i)) {
            return 1;
        }
    }

    return 0;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (checkSumOfPrimes(num)) {
        printf("%d can be expressed as sum of two prime numbers.\n", num);
    }
    else {
        printf("%d cannot be expressed as sum of two prime numbers.\n", num);
    }

    return 0;
}

