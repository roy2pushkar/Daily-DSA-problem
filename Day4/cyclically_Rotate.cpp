#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void rotate(int arr[], int n)
{
    int res[n];

    // Rotate the array to the right by one position
    for (int i = 0; i < n; i++)
    {
        res[(i + 1) % n] = arr[i];
    }
    // Copy the original array to the result array
    for (int i = 0; i < n; i++)
    {
        arr[i] = res[i];
    }
}
int main()
{
    int n;
    cout << "Enter size of Array :" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter elements of Array :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    rotate(arr, n);
    cout << "Array after rotation is :"
         << " " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}
