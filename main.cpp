#include <iostream>
#include <cstdlib>
using namespace std;

long long gcdValue(long long a, long long b) {
    a = llabs(a);
    b = llabs(b);
    while (b != 0) {
        long long remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

long long modularPower(long long base, long long exponent, long long modulus) {
    long long result = 1 % modulus;
    base %= modulus;
    while (exponent > 0) {
        if (exponent % 2 == 1)
            result = (result * base) % modulus;
        base = (base * base) % modulus;
        exponent /= 2;
    }
    return result;
}

bool isPrime(long long number) {
    if (number < 2) return false;
    for (long long divisor = 2; divisor <= number / divisor; ++divisor)
        if (number % divisor == 0) return false;
    return true;
}

int main() {
    int choice;
    cout << "Number Theory Toolkit\n"
         << "1. Greatest common divisor\n"
         << "2. Modular exponentiation (a^b mod m)\n"
         << "3. Prime check\n"
         << "Choose: ";
    if (!(cin >> choice)) return 1;

    if (choice == 1) {
        long long a, b;
        cout << "Enter two integers: ";
        cin >> a >> b;
        cout << "GCD = " << gcdValue(a, b) << '\n';
    } else if (choice == 2) {
        long long a, b, m;
        cout << "Enter base, non-negative exponent, and positive modulus: ";
        cin >> a >> b >> m;
        if (b < 0 || m <= 0) {
            cerr << "Exponent must be non-negative and modulus must be positive.\n";
            return 1;
        }
        cout << "Result = " << modularPower(a, b, m) << '\n';
    } else if (choice == 3) {
        long long number;
        cout << "Enter an integer: ";
        cin >> number;
        cout << number << (isPrime(number) ? " is prime.\n" : " is not prime.\n");
    } else {
        cerr << "Unknown option.\n";
        return 1;
    }
    return 0;
}
