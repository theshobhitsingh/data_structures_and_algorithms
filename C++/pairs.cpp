
int pairs(int k, vector<int> arr) {
    long int count =0 ;
    for(long int i  =0; i <arr.size(); i++){
        for(long int j  =i+1; j <arr.size(); j++)
        if((arr[i]-arr[j])==k)
        {
            count++;
        }
    }
return count;
}