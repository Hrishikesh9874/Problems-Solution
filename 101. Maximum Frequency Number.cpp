int maximumFrequency(vector<int> &arr, int n)
{
    //Write your code here
    int element=0;
    int maxcount=0;
    for(int i=0; i<n-1; i++){
        int count=0;
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count > maxcount){
            maxcount=count;
            element=arr[i];
        }
    }
    if(maxcount==0){
        return arr[0];
    }
    return element;
}
