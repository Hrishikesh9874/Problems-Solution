bool isPossible(int days,int chapters,vector<int> time,long long mid){
    int dayCount = 1;
    long long timeSum = 0;

    for(int i=0;i<chapters;i++)
    {
        if((timeSum + time[i]) <= mid){
            timeSum = timeSum + time[i];
        }

        else{
            dayCount++;
            if(dayCount > days || time[i] > mid){
                return false;
            }
            timeSum = time[i];
        }
    }
    return true;
}

long long allocateBooks(int days,int chapters,vector<int> time,long long s,long long e){
    long long mid = s + (e-s)/2;

    if(s > e) return -1;
    
    if(isPossible(days,chapters,time,mid)){
        if(isPossible(days,chapters,time,mid-1)){
            return allocateBooks(days,chapters,time,s,mid-1);
        }
        return mid;
    }

    else{
        return allocateBooks(days,chapters,time,mid+1,e);
    }

}

long long ayushGivesNinjatest(int n, int m, vector<int> time){	
	long long timeSum = 0;
    int start = 0;

    for(int i=0;i<time.size(); i++){
        timeSum = timeSum + time[i];
    }
    
    long long end = timeSum;

    long long ans = allocateBooks(n,m,time,start,end);
    return ans;
}
