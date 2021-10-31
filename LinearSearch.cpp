#include <bits/stdc++.h>
using namespace std;

int LinearSearch(int *Array, int n, int key){
    for (int i = 0; i < n; i++){
        if (Array[i] == key){
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter the size of the array:";
    cin >> n;
    int search[n];
    for (int i = 0; i < n; i++)
    {
        cin >> search[i];
    }
    cout<<"Enter the element to seaarch: ";
    int key;
    cin>>key;
    cout<<"Your key is at index(key found) | (-1 means key not found): "<<LinearSearch(search, n, key);
    return 0;
}