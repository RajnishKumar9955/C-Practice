//sum of prime number-; input even no.
#include <stdio.h>

// int isPrime(int num) {
//     if (num <= 1) return 0;  // 0 and 1 are not prime
//     if (num <= 3) return 1;  // 2 and 3 are prime
//     if (num % 2 == 0 || num % 3 == 0) return 0;  // multiples of 2 and 3 are not prime
    
//     // Check all numbers of the form 6k ± 1 up to sqrt(num)
//     for (int i = 2; i < num; i++) {
//         if (num % i == 0 ) {
//             return 0;
//             break;
//         }
//         else {
//             return 1;
//         }
//     }
//     //return 1;
// }
int main(){
    int n;
    printf("give a number  ");
    scanf("%d", &n);
    int x = 0;
    for (int i = 2; i < n; i++) {
        if (n % i == 0 ) {
            x=0;
            break;
        }
        else {
            x=1;
        }
    }
    printf("%d", x);
    return 0;
}
