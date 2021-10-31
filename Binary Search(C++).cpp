/*
Time complexity = O(logn)
*/
#include <bits/stdc++.h>
using namespace std;

int BinarySearch(int *array, int n, int key)
{
    int start = 0;
    int end = n;
    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (key == array[mid])
        {
            return mid;
        } else if(key > array[mid]){
            start  = mid  + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int search[n];
    cout << "Enter the elements to the array:  ";
    for (int i = 0; i < n; i++)
    {
        cin >> search[i];
    }
    int key;
    cout << "Enter the key to find the search: ";
    cin >> key;
    cout << BinarySearch(search, n, key);
    return 0;
}
