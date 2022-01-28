#include <bits/stdc++.h>
bool pairSum(vector <int> arr, int n, int k){
  set<int> hashSet;
    for (int i=0; i<n; i++)
    {
 	   if (hashSet.find(k - arr[i]) != hashSet.end())
 	      { return true;}
 	   hashSet.insert(arr[i]);
    }
    return false;
}
