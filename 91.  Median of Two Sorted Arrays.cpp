class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       vector<int>temp;
       for(auto i1:nums1){
           temp.push_back(i1);
       } 
       for(auto i2:nums2){
           temp.push_back(i2);
       }
       sort(temp.begin(), temp.end());
       
       if(temp.size()%2!=0){
           return temp[temp.size()/2];
       }
       int x=temp.size()/2;
       int y=x-1;
       float f= temp[x]+temp[y];
       return f/2;
    }
};
