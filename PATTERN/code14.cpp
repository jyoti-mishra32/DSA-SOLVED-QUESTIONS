#include <iostream>
using namespace std;

int main() {
    int n = 9; // number of rows (can be changed)
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // left boundary, right boundary or diagonal
            if (j == 0 || j == n - 1 || j == i) {
                if (j == 0) {
                    // first star of row in blue
                    cout << "\033[34m*\033[0m ";
                } else {
                    cout << "* ";
                }
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}
