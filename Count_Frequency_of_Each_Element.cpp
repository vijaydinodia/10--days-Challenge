#include <bits/stdc++.h>
using namespace std;

void frequency(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {

        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j]) count++;
        }

        cout<<arr[i]<<" is present in array "<<count<<" times."<<endl;
    }
}


int main()
{

    int arr[] = {1, 2, 3, 4, 5, 5, 2, 3, 2, 1};

    int n = sizeof(arr) / sizeof(arr[0]);

    frequency(arr , n);
    return 0;
}