#include<bits/stdc++.h>
using namespace std;


void printS(int ind,vector<int> &ds,int s, int sum,int arr[], int n){

    if(ind==n){
        if(s==sum){
            for(auto it:ds){
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return ;
    }

    // cout<<arr[ind]<<endl;
    ds.push_back(arr[ind]);
    s = s+arr[ind];
    printS(ind+1,ds,s,sum,arr,n);
    ds.pop_back();
    s = s-arr[ind];
    printS(ind+1,ds,s,sum,arr,n);


}


int main(){

    int arr[] = {1,2,3,4,5,2,6,3,4,1};
    int n = 10;
    int sum = 6;
    int s = 0;
    vector<int> ds;

    printS(0,ds,s,sum,arr,n);
}