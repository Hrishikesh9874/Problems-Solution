class Solution {
public:
    int myAtoi(string s) {

        int i=0;
        while(s[i]==' '){
            i++;
        }
        string ns=s.substr(i, s.size());

        i=0;
        int sign=1;
        if(ns[i]=='-' || ns[i]=='+'){
            if(ns[i]=='-'){
                sign=-1;
                i++;
            }
            else{
                i++;
            }
        }


        long ans=0;
        for(i; i<ns.size(); i++){
            if(ns[i]>='0' && ns[i]<='9'){
                ans+=ns[i]-'0';                

            if(sign==-1 && -1*ans<INT_MIN) return INT_MIN;
            if(sign==1 && 1*ans>INT_MAX) return INT_MAX;

                ans=ans*10;
            }
            else{
                break;
            }
        }
        ans=ans/10;
        ans=ans*sign;

        return ans;
    }
};
