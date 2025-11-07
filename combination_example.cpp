#include <cstdint>
#include <iostream>
using namespace std;

uint16_t factorial(const uint16_t x) {
    if (x == 0 || x == 1) {
        return 1;
    } else {
        return x * factorial(x - 1);
    }
}

int main() {
    int n;
    int k;

    // get and validate user input
    cout << "Enter set number n: ";
    cin >> n;
    cout << "Enter subset number k: ";
    cin >> k;

    if (n < 0 || k < 0){
        cout << "-1";
        return 0;
    }
    // calculate C(n,k) = n! / (k! * (n-k)!)
    uint16_t c_n_k = factorial(n) / ((factorial(k) * factorial(n - k)));

    // write out results
    cout << "result = " << c_n_k << endl;

    return 0;
}