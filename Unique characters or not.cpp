// Return true if string contains all unique characters, else return false
#include<algorithm>
#include<string>
bool isUniqueChars(string str){
  int n = str.length();
  sort(str.begin(), str.end());
  for(int i=0;i<n-1;i++){
    if(str[i] == str[i+1])
      return false;
  }
  return true;
  //2nd way - Using Count Array:
      // int count[256] = {0};
    //   for(int i=0; i< str.length(); i++){
    //       count[str[i]]++;
    //   }
    //   for(int i=0;i<str.length();i++){
    //       if(count[str[i]] > 1)
    //       return false;
    //   }
    //   return true;
}
