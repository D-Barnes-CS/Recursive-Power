// D_Barnes_Lab12.cpp : We ask the user for an base value and an exponent then proceed to
// put it in our recursive function. In the power function we take the values given to us and 
// if the exponent is a zero we return the value of 1. However, if the value is greater than
// 0 we multiply it by itself until it gets to zero and return that value. It will call itself
// each time in the else portion until reaching 0. This doesn't account for negative numbers
// or decimals. 
//

#include <iostream>
using std::cin; using std::cout; using std::endl;

long power(int num, int exp) {
    if (exp == 0) {
        return 1;
    }
    else {
        return num * power(num, exp - 1);
    }
}

int main() {
    int base; int expo;
    cout << "Please give me a base followed by an exponent: ";
    cin >> base; cin >> expo;
    cout << power(base, expo);
}

