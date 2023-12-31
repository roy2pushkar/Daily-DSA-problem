#include <iostream>
using namespace std;
int smallestNumber(int n, int arr[])
{
    if (n == 1)
    {
        return arr[0];
    }
    else
    {
        return min(arr[n - 1], smallestNumber(n - 1, arr));
    }
}
int main()
{
    int n;
    cout << "Enter the Size of Array";
    cin >> n;
    int arr[n];
    cout << "Enter the Element of Array";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Smallest Number in Array is : " << smallestNumber(n, arr) << endl;
}
