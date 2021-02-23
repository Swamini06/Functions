Programiz

Search Programiz
C++ Program to Check Whether a Number can be Express as Sum of Two Prime Numbers
Example to check if an integer (entered by the user) can be expressed as the sum of two prime numbers of all possible combinations with the use of functions.


To understand this example, you should have the knowledge of the following C++ programming topics:

C++ for Loop
C++ if, if...else and Nested if...else
C++ Functions
Types of User-defined Functions in C++
This program takes a positive integer from user and checks whether that number can be expressed as the sum of two prime numbers.

If the number can be expressed as sum of two prime numbers, the output shows the combination of the prime numbers.

To perform this task, a user-defined function is created to check prime number.

Example: Check Whether a Number can be Expressed as a Sum of Two Prime Numbers
#include <iostream>
using namespace std;

bool checkPrime(int n);

int main() {
    int n, i;
    bool flag = false;

    cout << "Enter a positive  integer: ";
    cin >> n;

    for(i = 2; i <= n/2; ++i) {
        if (checkPrime(i)) {
            if (checkPrime(n - i)) {
                cout << n << " = " << i << " + " << n-i << endl;
                flag = true;
            }
        }
    }

    if (!flag)
      cout << n << " can't be expressed as sum of two prime numbers.";

    return 0;
}

// Check prime number
bool checkPrime(int n)
{
    int i;
    bool isPrime = true;

    // 0 and 1 are not prime numbers
    if (n == 0 || n == 1) {
        isPrime = false;
    }
    else {
        for(i = 2; i <= n/2; ++i) {
            if(n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    return isPrime;
}
