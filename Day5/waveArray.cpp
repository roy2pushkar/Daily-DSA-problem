
#include <iostream>
#include <vector>
using namespace std;

void convertToWave(int n, int arr[]) {
    // Your code here
    for (int i = 0; i < n; i += 2) {
        if (i + 1 < n) {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
}

int main() {
    int n;
    cout << "Enter the size of Array: ";
    cin >> n;
    int arr[n];


    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << " Previous Array is : " ;
    for (int i = 0; i < n; i++) {
        cout<< arr[i];
    }
    cout<<endl;
    cout << " New Array is :" << endl;
    convertToWave(n, arr);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
