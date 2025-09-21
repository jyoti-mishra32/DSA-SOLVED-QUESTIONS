#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int next = n + 1;
    while (!isPrime(next)) { // loop until next prime is found
        next++;
    }

    cout << "Next prime number after " << n << " is " << next;
    return 0;
}
