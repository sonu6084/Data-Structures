#include<bits/stdc++.h>
using namespace std;

void findCombination(int ind,int target,vector<int> &ds,vector<int> &arr,vector<vector<int>> &ans){

    if(ind == arr.size() || target == 0){
        if(target==0){
            ans.push_back(ds);
        }
        return;
    }

    if(arr[ind]<=target){
        ds.push_back(arr[ind]);
        findCombination(ind,target-arr[ind],ds,arr,ans);
        ds.pop_back();
    }

    findCombination(ind+1,target,ds,arr,ans);

    return;



}

int main(){

    int n;
    cin>>n;
    vector<int> arr;

    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        arr.push_back(a);
    }

    int target;
    cin>>target;
    vector<int> ds;
    vector<vector<int>> ans;
    int ind = 0;

    findCombination(ind,target,ds,arr,ans);

    for(auto it:ans){
        for(auto jt:it){
            cout<<jt<<" ";
        }
        cout<<endl;
    }
}