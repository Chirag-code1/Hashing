void findTheSubArray(int arr[], int n, int sum){
	map<int,int> map;
    int prefixSum = 0;
    for(int i=0; i< n ; i++){
        prefixSum = prefixSum + arr[i];
        if(prefixSum == sum){
            cout<<0<<" "<<i<<endl;
            return;
        }
        else {
            if(map.find(prefixSum - sum)!=map.end()){
                cout<<map[prefixSum-sum]+1<<" "<<i<<endl;
                return;
            } else {
                map[prefixSum] = i;
            }
        }
    }
    cout<<-1;
}
