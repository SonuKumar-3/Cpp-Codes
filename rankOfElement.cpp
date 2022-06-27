/*  Problem Statement: Given an array of N integers, the task is to replace each element of the array by its rank in the array.
    Example 1:
    Input: 20 15 26 2 98 6
    Output: 4 3 5 1 6 2
    Explanation: When sorted,the array is 2,6,15,20,26,98. So the rank of 2 is 1,rank of 6 is 2,rank of 15 is 3 and so…

    Time Complexity: O(N)
    Space Complexity: O(N)
*/

#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int dummy[n];

    unordered_map<int, int> mp;

    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
        dummy[i] = arr[i];
    }
    
    sort(dummy, dummy + n);

    for(int i = 0; i < n; i++)
    {
        mp[dummy[i]] = i + 1;
    }

    for(int i = 0; i < n; i++)
    {
       cout<<mp[arr[i]]<<" ";
    }

    cout<<endl;
    return 0;
}