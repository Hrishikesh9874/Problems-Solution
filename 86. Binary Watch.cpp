class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string>ans;
        for(int i=0; i<12; i++){

            for(int j=0; j<60; j++){

                if(__builtin_popcount(i) + __builtin_popcount(j) == turnedOn){

                    string time="";
                    string min="";

                    if(j<10){
                        min+=to_string(0);
                    }
                    min+=to_string(j);
                    time+=to_string(i);
                    time+=':';
                    time+=min;
                    ans.push_back(time);
                }
            }
        }
        return ans;
    }
};
