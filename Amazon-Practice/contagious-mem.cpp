#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m;
    cin>>m;

    vector<int> ans;

    ans.push_back(arr[0]);
    for(int i=1;i<n;i++)
    {
        
        ans.push_back(ans[i-1]+arr[i]);
    }

    vector<int> mem;

    mem.push_back(ans[m-1]);
    for(int i=0;i<n-3;i++){

        mem.push_back(ans[i+m]-ans[i]);
    }

    
    for(int i=0;i<mem.size();i++){
        cout<<mem[i]<<" ";
    }

    int max = 0;
    cout<<endl;
    for(int i=0;i<mem.size();i++){
        if(max<mem[i]){
            max = mem[i];
        }
    }

    cout<<ans[n-1] - max;


    


}
