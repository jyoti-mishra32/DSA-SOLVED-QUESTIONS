#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, temp, sum = 0, digit;
    cout << "Enter a number: ";
    cin >> n;

    temp = n;
    while (temp > 0) {
        digit = temp % 10;
        sum += pow(digit, 3); // cube of digit
        temp /= 10;
    }

    if (sum == n)
        cout << n << " is an Armstrong number";
    else
        cout << n << " is not an Armstrong number";

    return 0;
}
