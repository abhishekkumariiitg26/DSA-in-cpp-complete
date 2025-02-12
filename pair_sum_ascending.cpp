#include <iostream>
#include <vector>

using namespace std;

vector<int> PairSum(vector<int> nums, int target)
{
    vector<int> result;
    int begin, end;
    begin = 0;
    end = nums.size() - 1;
    while (begin < end)
    {
        int sum = nums[begin] + nums[end];

        if (sum == target)
        {
            result.push_back(begin);
            result.push_back(end);
            return result;
        }
        else if (sum > target)
        {
            end--;
        }
        else
        {

            begin++;
        }
    }
    return result;
}

int main()
{
    int size;
    int target;
    cout << "enter the size of the array: ";
    cin >> size;

    vector<int> nums(size);
    cout << "enter the elements of the array in ascending order: ";
    for (int i = 0; i < size; i++)
    {
        cin >> nums[i];
    }
    cout << "The elements of the array are: ";
    for (int i = 0; i < size; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl
         << "enter target: ";
    cin >> target;
    vector<int> result = PairSum(nums, target);
    if (result.empty()) {
        cout << "No pair found with the given sum." << endl;
    } else {
        cout << "Pair indices: ";
        for (int it : result) {
            cout << it << " ";
        }
        cout << endl;
    }

    return 0;
}