#include <iostream>
using namespace std;

int main() {
    int a, b, hcf = 1;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    for (int i = 1; i <= (a < b ? a : b); i++) {
        if (a % i == 0 && b % i == 0) {
            hcf = i;
        }
    }

    if (hcf == 1)
        cout << a << " and " << b << " are Co-prime numbers";
    else
        cout << a << " and " << b << " are NOT Co-prime numbers";

    return 0;
}

