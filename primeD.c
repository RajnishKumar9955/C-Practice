#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) return 0;  // 0 and 1 are not prime
    if (num <= 3) return 1;  // 2 and 3 are prime
    if (num % 2 == 0 || num % 3 == 0) return 0;  // multiples of 2 and 3 are not prime
    
    // Check all numbers of the form 6k ± 1 up to sqrt(num)
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0)
            return 0;
    }
    return 1;
}

// Function to find the prime pair partition
void primeDivision(int N) {
    int firstPrime = 2;
    int secondPrime = N - firstPrime;
    
    while (!isPrime(secondPrime)) {
        firstPrime++;
        secondPrime = N - firstPrime;
    }
    
    printf("%d %d", firstPrime, secondPrime);
}

// Main function
int main() {
    int N;
    printf("Enter an even number N: ");
    scanf("%d", &N);
    
    if (N % 2 != 0) {
        printf("Invalid input. Please enter an even number.\n");
        return 1;
    }
    
    primeDivision(N);
    return 0;
}
