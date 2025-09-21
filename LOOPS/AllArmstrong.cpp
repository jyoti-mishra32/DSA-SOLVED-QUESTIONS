#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int sum, digit;

    cout << "Armstrong numbers under 1000: ";
    for (int n = 1; n < 1000; n++) {
        int temp = n;
        sum = 0;

        while (temp > 0) {
            digit = temp % 10;
            sum += pow(digit, 3); // cube of digit
            temp /= 10;
        }

        if (sum == n)
            cout << n << " ";
    }

    return 0;
}
