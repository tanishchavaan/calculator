#include <stdio.h>

// Factorial function
double factorial(int n) {
    if (n == 0 || n == 1) return 1;
    long long fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Permutation 
double perm(int n, int r) {
    return factorial(n) / factorial(n - r);
}

// Combination
double comb(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, r;
    printf("Enter n and r: ");
    scanf("%d %d", &n, &r);
    printf("Factorial : %f\n",factorial(n));
    printf("Permutation (nPr): %f\n", perm(n, r));
    printf("Combination (nCr): %f\n", comb(n, r));

    return 0;
}
