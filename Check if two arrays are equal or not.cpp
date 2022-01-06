#include <bits/stdc++.h>
int arraysEqualorNot(vector<int> A, vector<int> B) {
  map <int, int> mp;

    for(int i=0; i< A.size(); i++)
    mp[A[i]]++;

    for(int j = 0; j< B.size(); j++){
        if(mp[B[j]] == 0){ // element occurs less time in vectorA.
            return 0;
        }
        if(mp.find(B[j]) == mp.end()){ //element not found;
            return 0;
        }
        mp[B[j]]--;
    }
    return 1;
}
