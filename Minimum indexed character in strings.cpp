#include <bits/stdc++.h>
char minIndexChar(string str1, string str2){
  set <char> set;
  map<int, char> mp;
    for(int i =0 ; i< str2.length(); i++)
      set.insert(str2[i]);
    for(int i=0 ; i<str1.length(); i++){
        if(set.find(str1[i])!=set.end()){
            mp.insert({i+1, str1[i]});
        }
    }
    auto p = mp.begin()->second;
    return p;
} //revised.
