#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int cnt_dist = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; i < n; i++)
        {
            if (arr[i] != arr[j])
            {
                cnt_dist++;
            }
        }
    }

    cout << "Total distinct no is " << cnt_dist << endl;

    return 0;
}
