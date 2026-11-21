# Number Theory Toolkit

A menu-driven C++ program implementing the Euclidean algorithm, fast modular exponentiation, and a primality test.

## Skills demonstrated
- Number theory and discrete mathematics
- Loops, functions, conditionals, and integer arithmetic
- Algorithmic efficiency (binary exponentiation runs in O(log exponent))

## Build and run
```bash
g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o number_theory
./number_theory
```

## Suggested checks
- GCD of 252 and 105 should be 21.
- `3^100 mod 13` should be 3.
- 29 is prime; 1 is not prime.

## Possible extensions
Implement the Sieve of Eratosthenes and extended Euclidean algorithm.
