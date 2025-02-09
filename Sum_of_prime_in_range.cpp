#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(int num)
{
    if (num < 2)
        return false; // 0 and 1 are not prime
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
            return false; // If divisible, not prime
    }
    return true;
}

int sum_of_primes_in_range(int low, int high)
{
    int sum = 0;
    for (int num = low; num <= high; num++)
    {
        if (is_prime(num))
        {
            sum += num;
        }
    }
    return sum;
}

int main()
{
    int low, high;
    cout << "Enter range (low high): ";
    cin >> low >> high;
    cout<<sum_of_primes_in_range(low, high);
    return 0;
}
