#include <iostream>
using namespace std;

int main() {
    int n = 5; // number of rows
    
    for (int i = 1; i <= n; i++) {
        // print spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // print stars
        for (int k = 1; k <= i; k++) {
            if (k == 1) {
                // first star in blue
                cout << "\033[34m*\033[0m ";
            } else {
                cout << "* ";
            }
        }
        cout << endl;
    }

    return 0;
}
