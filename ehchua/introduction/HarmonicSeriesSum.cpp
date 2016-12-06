/*
    This program computes the sum of a harmonic series
    of the type 1 + (1/2) + (1/3) + ... (1/n). 
    A user enters n. 
*/

#include <iostream>

using namespace std;

double harmonicSum (int n) {
    double sum = 0;
    for (int i = 1; i <= n; ++i) sum += 1.0/i;
    return sum;
}

int main() {
    cout << "This program computes the sum of a haromic series "
         << "of the type 1 + (1/2) + (1/3)... (1/n). Enter n." << endl;
    int n = 0;
    cout << "n >> "; 

    while (cin >> n) {
        if (n == 1) cout << "The sum is " << harmonicSum(n) << endl;
        else if (n == 2) cout << "1 + (1/2) is " << harmonicSum(n) << endl;
        else if (n == 3) cout << "1 + (1/2) + (1/3) is " << harmonicSum(n) << endl;
        else cout << "1 + (1/2) + (1/3)... (1/" << n << ") is " << harmonicSum (n) << endl;
        cout << "n >> ";
    }

    return 0;
} 
