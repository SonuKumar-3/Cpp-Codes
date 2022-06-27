/*  Problem Statement: Find all the repeating elements present in an array.
    Time Complexity: O(N)
    Space Complexity: O(N)
*/

#include <iostream>
#include <map>
using namespace std;

#define loop(i, a, b) for(int i = a; i < b; i++)
int main()
{
    int n;
    cin>>n;
    int arr[n];

    map<int, int> mp;
    map<int, int>::iterator it;

    loop(i, 0, n)
    {
        cin>>arr[i];
        mp[arr[i]]++;
    }

    for(it = mp.begin(); it != mp.end(); it++)
    {
        if(it->second > 1)
            cout<<it->first<<" ";
    }

    cout<<endl;
    return 0;
}
