#include <iostream>
using namespace std;
int sum_of_digit(int digit)
{
    digit = abs(digit);
    int sum = 0;
    while (digit != 0)
    {
        sum += digit % 10;

        digit /= 10;
    }
    return sum;
}
int main()
{
    int num;
    cout << "enter number to get sum of digits: ";
    cin >> num;
    cout << sum_of_digit(num);
    return 0;
}