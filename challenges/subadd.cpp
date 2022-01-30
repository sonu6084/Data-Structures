#include <iostream>
#include <vector>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){

        int x,y,n;
        cin>>n>>x>>y;

        vector<int> a;
        vector<int> b;
        vector<int> c;
        
        for(int i=0;i<n;i++){
            int d;
            cin>>d;
            a.push_back(d);
        }

        for(int i=0;i<n;i++){
            int d;
            cin>>d;
            b.push_back(d);
        }

        for(int i=0;i<n;i++){
            c.push_back(b[i]-a[i]);
        }

        int flag = 0;

        for(int i=0;i<n;i++){
            if(c[i]!=x && c[i]!=y){
                flag = 1;
            }
            else{
                flag = 0;
            }
        }

        if(flag == 1){
            cout<<"NO";
        }
        else{
            cout<<"YES";
        }







       

    }

    return 0;
}