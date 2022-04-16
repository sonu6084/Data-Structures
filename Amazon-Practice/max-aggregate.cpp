#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> v;
    v.push_back(arr[0]);
    for(int i=1;i<n;i++){
         v.push_back(arr[i] + v[i-1]);
    }
    // cout<<v[n-1];

    int max1 = 0;
    for(int i=0;i<n;i++){
        int sum1 = 0;
        int sum2 = 0;
        int max2;
        if(i==0){
            sum1 = arr[0];
            sum2 = v[n-1];
            if(sum1>sum2){
                max2 = sum1;
            }
            else{
                max2 = sum2;
            }
        }
        else if(i==n-1){
            sum1 = v[n-1];
            sum2 = arr[n-1];
            if(sum1>sum2){
                max2 = sum1;
            }
            else{
                max2 = sum2;
            }
        }
        else{
            sum1 = v[i];
            sum2 = v[n-1] - arr[i-1];
            if(sum1>sum2){
                max2 = sum1;
            }
            else{
                max2 = sum2;
            }
        }
        cout<<max2<<endl;
        if(max1<max2){
            max1 = max2;
        }
    }
    cout<<max1;

}