int isSubsetorNot(int a[], int n, int b[], int m){
  set <int> set;
    for(int i=0;i<n ;i++)
    set.insert(a[i]);
    for(int i=0;i<m;i++){
        if(set.find(b[i]) == set.end())
        return 0;
    }
    return 1;
}
