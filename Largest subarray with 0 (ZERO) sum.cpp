int largSubArray(int* arr, int n){
  map <int, int> mp;
  int maxi = -1, sum = 0;
  for(int i=0; i<n; i++){
      sum = sum+arr[i];
      if(sum == 0)
      {
        maxi = i+1; 
      }
      else 
      {
          if(mp.find(sum)!=mp.end()){
              maxi = max(maxi, i-mp[sum]);
          }
          else 
          {
              mp[sum] = i;
          }
      }
  }
  return maxi;
} //revised.
