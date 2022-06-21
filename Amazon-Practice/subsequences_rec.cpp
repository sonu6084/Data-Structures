#include<bits/stdc++.h>
using namespace std;

void printF(int ind,vector<int> &ds,int *a,int n){
    if(ind==n){
        for(auto it:ds){
            cout<<it<<" ";
        }
        if(ds.size()==0){
            cout<<"{}";
        }
        cout<<endl;
        return;
    }

    ds.push_back(a[ind]);
    printF(ind+1,ds,a,n);
    ds.pop_back();
    printF(ind+1,ds,a,n);
}

int main(){
    int a[3] = {3,1,2};
    int n=3;
    int ind = 0;
    cout<<"TYU";
    vector<int> ds;

    printF(ind,ds,a,n);
}