#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int max_subarr_sum_kadane(vector<int> &array)
{
    int size = array.size();
    int max_sum = INT_MIN;
    int current_sum = 0;
    for (int i = 0; i < size; i++)
    {
        current_sum += array[i];
        max_sum = max(current_sum, max_sum);
        if (current_sum < 0)
        {
            current_sum = 0;
        }
    }
    return max_sum;
}

int main()
{
    int size;
    cout << "enter the size of the array: ";
    cin >> size;

    vector<int> array(size);

    cout << "enter the elements of the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    cout << endl
         << "The maximum subarray sum is: " << max_subarr_sum_kadane(array);
}