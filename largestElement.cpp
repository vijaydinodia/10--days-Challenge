
// Find the Largest Element in an vector.

#include <bits/stdc++.h>
using namespace std;

int largestElement(vector<int> nums)
{
    int largest = INT_MIN;

    for (auto a : nums)
    {
        if (largest < a)
            largest = a;
    }
    return largest;
}

int main()
{

    vector<int> nums = {23, 45, 22, 67, 43, 23, 56, 1, 4, 5};
    int largest = largestElement(nums);
    cout << "Largest element in vector is :---> " << largest;

    return 0;
}