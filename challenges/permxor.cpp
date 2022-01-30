#include <iostream>
#include <vector>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;
        int m = n%2;
        int sums = 0;
        if(m==0){
            // cout<<"if"<<endl;
            for(int i=1;i<n+1;i++){
                // cout<<"i"<<i<<endl;
                sums = sums + 2*(i^i+1);
                i++;
                
                // cout<<"sum"<<sums<<endl;
            }
        }
        else{
            // cout<<"else"<<endl;
            
            for(int i=1;i<n;i++){
                //  cout<<"i"<<i<<endl;
                sums = sums + 2*(i^i+1);
                i++;
                // cout<<"sum"<<sums<<endl;
                
            }
            sums = sums + (n^n);
        }

        cout<<sums<<endl;

    }

    return 0;
}