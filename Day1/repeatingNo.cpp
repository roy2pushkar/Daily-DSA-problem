// #include <bits/stdc++.h>
// using namespace std;
// void findDuplicate(int nums[], int n)
// {

//     bool found = false;
//     for (int i = 0; i < n; i++)
//     {
//         // For every element check if it is repeated in the elements ahead of it
//         for (int j = i + 1; j < n; j++)
//         {
//             // If repeated, this is the duplicate element
//             if (nums[i] == nums[j])
//             {
//                   cout << "Repeating element: " << nums[i] << endl;
//                   found = true;
//                   break;
//             }

//         }
//     }
//      if (!found) {
//         cout << "No repeating elements found." << endl;
//     }
// }
// int main()
// {
//     // Example 1

//     int n;
//     cin >> n;
//     int nums[n];
//     for (int i = 0; i < n; i++)
//     {

//         cin >> nums[i];
//     }
//     cout << findDuplicate(nums, n) << endl;
 // findDuplicate(nums,n);
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
        if (it->second != 1)
            cout << it->first << " ";
    }
}