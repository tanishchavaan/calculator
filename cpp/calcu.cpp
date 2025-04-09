#include <iostream>
using namespace std;

// Factorial 
double factorial(int n) {
    if (n == 0 || n == 1) return 1;
    long long fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Permutation 
long long perm(int n, int r) {
    return factorial(n) / factorial(n - r);
}

// Combination
long long comb(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, r;
    cout << "Enter n and r: ";
    cin >> n >> r;
    cout<<"Factorial : "<<factorial(n)<<endl;
    cout << "Permutation (nPr): " << perm(n, r) << endl;
    cout << "Combination (nCr): " << comb(n, r) << endl;

    return 0;
}
