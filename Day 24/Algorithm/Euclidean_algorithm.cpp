// gcd :- HCF :- formula :- gcd(a-b,b) || gcd(a%b,b)
// when one of the parameter becomes zero then another one will be the answer.
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (a == 0) {
        return b;
    }
    if (b == 0) {
        return a;
    }

    while (a != b) {
        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }
    return a;
}

int main() {
    int a, b;
    cout << "Enter the values of a and b: ";
    cin >> a >> b;

    int ans = gcd(a, b);
    cout << "GCD of " << a << " and " << b << " is " << ans << endl;
    return 0;
}
