#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    //we use binary search to find element in sorted array
    int arr[] = {10,20,30,30,30,40,50,60};
    int n = sizeof(arr)/sizeof(int);
    int key = 30;
    bool present = binary_search(arr,arr+n,key);

    //whether element is present or not
    if(present==1){
        cout<<"Elemenet is present"<<endl;
    }
    else{
        cout<<"Element is absent"<<endl;
    }

    // finding index of the element

    auto lb = lower_bound(arr,arr+n,key);
    cout<<lb-arr<<endl;
    auto ub = upper_bound(arr,arr+n,key);
    cout<<ub-arr<<endl;

    cout<<"Frequency : "<<ub-lb<<endl;


    return 0;
}