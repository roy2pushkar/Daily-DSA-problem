// #include <bits/stdc++.h>
// using namespace std;

// void findDistinct(int nums[], int n)
// {

//     for (int i = 0; i < n; i++)
//     {
//         bool isDistinct = true;

//         // Check if the current element is repeated in the elements ahead of it
//         for (int j = i; j < n; j++)
//         {

//             if (i != j && nums[i] == nums[j])
//             {
//                 isDistinct = false;

//                 break;
//             }
//         }

//         // If the element is distinct, print it
//         if (isDistinct)
//         {
//             cout << "Distinct element: " << nums[i] << endl;
//         }
//     }
// }

// int main()
// {
//     int n;
//     cout << "Enter the size of the array: ";
//     cin >> n;

//     int nums[n];
//     cout << "Enter the elements of the array:" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> nums[i];
//     }

//     findDistinct(nums, n);

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

// Main function to run the program
int main()
{
    int arr[] = {10, 30, 40, 20, 10, 20, 40, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    unordered_map<int, int> mp;
    int count_dis = 0;

    for (int i = 0; i < n; i++)
        mp[arr[i]]++;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        if (it->second == 1)
            cout << it->first << " ";
    }
}
