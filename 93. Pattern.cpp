#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int val=1;
    int one=1;
    int fmid=n+(n/2)+1;
    int s=(n/2)+1;
    for(int i=1; i<=s; i++){
        int tmid=fmid;
        if(tmid>n+1){
            cout<<"*";

            while(tmid){
                cout<<" ";
                tmid--;
            }
        }
        

        if(tmid==n+1){
            cout<<"*";
            for(int i=0; i<=n; i++){
                cout<<"*";
            }
        }

        if(val<=(n/2)+1){
            for(int i=0; i<val; i++){
                cout<<"@";
            }
        }
        val++;
        fmid--;
        cout<<endl;
    }

    
    int l=n/2;

    for(int i=1; i<=n/2; i++){
        cout<<"*";
        for(int j=0; j<=fmid+one; j++){
            cout<<" ";
        }
        for(int i=0; i<l; i++){
            cout<<"@";
        }
        l--;
        one++;
        cout<<endl;
    }
    return 0;
}
