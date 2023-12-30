#include <iostream>
using namespace std;
void reverseNumber(int i, int arr[], int n)
{
    if (i >= n / 2)
    {
        return;
    }
    swap(arr[i], arr[n - i - 1]);
    reverseNumber(i + 1, arr, n);
}
int main()
{
    int n;
    cout << "Enter the size of Array";
    cin >> n;
    int arr[n];
    cout << "Enter the Array"
         << " " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    reverseNumber(0, arr, n);
    cout << "Reversed Number number : "
         << " " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}
