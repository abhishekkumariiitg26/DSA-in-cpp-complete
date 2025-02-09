#include<iostream>
#include<cmath>
using namespace std;

bool is_prime(int num) {
    if (num < 2) return false;  // 0 and 1 are not prime
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return false; // If divisible, not prime
    }
    return true;
}

void print_primes_in_range(int low, int high) {
    cout << "Prime numbers between " << low << " and " << high << " are: ";
    for (int num = low; num <= high; num++) {
        if (is_prime(num)) {
            cout << num << " ";
        }
    }
    cout << endl;
}

int main() {
    int low, high;
    cout << "Enter range (low high): ";
    cin >> low >> high;
    print_primes_in_range(low, high);
    return 0;
}
