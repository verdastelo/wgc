/*
    Compute a sum of geometric series of the type
    1 + (1/2) + (1/4) + (1/8)... (1/n).
*/

#include <iostream>

using namespace std;

double geometricSum (int n) {
    double sum = 0.0;
    double term = 0.0;

    for (int i = 1; i <= n; ++i) {
        term = 1.0/i;
        sum += term; 
    }
    return sum;
}

int main() {
    cout << "n >> ";
    int n;
    while (cin >> n) {
        cout << geometricSum (n) << endl;
        cout << "n >> "; 
    }

    return 0;
}
