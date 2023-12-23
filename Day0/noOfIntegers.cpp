#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
   unordered_map<int,int>mp;
   for(int i=0;i<n;i++)
   {

       mp[arr[i]]++;
   }
   int cnt_dist = mp.size();


    cout << "Total distinct no is " << cnt_dist << endl;

    return 0;
}
