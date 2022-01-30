#include <iostream>
#include <vector>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){

        vector<int> v;
        int a;
        int b;
        int c;
        cin>>a;
        cin>>b;
        cin>>c;

        v.push_back(a);
        v.push_back(b);
        v.push_back(c);

        sort(v.begin(),v.end());

        for(auto c: v){
            cout<<c<<" ";
        }

        int sums = 0;
        sums = v[0] + v[1];
        if(sums==v[2]){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }

    }

    return 0;
}