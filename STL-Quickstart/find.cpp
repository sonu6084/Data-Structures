#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[] = {1,4,2,6,10};
    int n = sizeof(arr)/sizeof(int); // size = 5*4 / int(4) ---> n = 5
    // cout<<sizeof(int);

    int key; // value to be found
    cout<<"Enter element : ";
    cin>>key;

    auto it = find(arr,arr+n,key); //return address of the key found , find(base address,final address,key to be found)
    int index  = it - arr;  //to get index subtract element address by base address
    if(index==n)
    {
        cout<<"Element not found";
    }
    else{
        cout<<"Index for key "<<key<<" : "<<index;
    }
    
    return 0; 
}