#include <bits/stdc++.h>
int LongestConsecutiveSubsequence(int a[], int n){
  unordered_set<int>set;
  if(n == 0)
  return 0;
  for(int i=0; i<n;i++)
    set.insert(a[i]);
  int ans =1;
  for(int i=0; i< n ; i++)
  { int count=1;
    if(set.find(a[i]-1) == set.end())
    {
      int j = a[i]+1;
      while(set.find(j)!=set.end()){
        count++; j++;
      }
    }
   if(count > ans)
     ans = count;
  }
  return ans;
} //revised.
