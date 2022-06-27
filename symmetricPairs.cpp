/*  Problem Statement: Given an array of pairs, find all the symmetric pairs in the array.
    Example :
    Input: (1,2),(2,1),(3,4),(4,5),(5,4)
    Output: (2,1) (5,4)
    Explanation: Since (1,2) and (2,1) are symmetric pairs and (4,5) and (5,4) are symmetric pairs.

    Time Complexity: O(N).
    Space Complexity: O(N), for using a hashmap.

*/

#include <iostream>
#include <unordered_map>
using namespace std;

#define loop(i, a, b) for(int i = a; i < b; i++)

int main()
{
    int n;
    cin>>n;
    int arr[n][2];

    unordered_map<int, int> mp;

    loop(i, 0, n)
    {
        loop(j, 0, 2)
        {
            cin>>arr[i][j];
        }
    }

    loop(i, 0, n)
    {
        int first = arr[i][0];
        int second = arr[i][1];

        if(mp.find(second) != mp.end() && mp[second] == first)
        {
            cout<<"("<<first<<","<<second<<") ";
        }
        else
        {
            mp[first] = second;
        }
    }

    cout<<endl;
    return 0;
}