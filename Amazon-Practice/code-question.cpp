#include<iostream>
using namespace std;

int main(){

    int n;
    

    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int a,b;
    a = arr[0];
    b = arr[1];
    int sum = 0;

    while(n>1){
        
        for(int i=0;i<n-1;i++){
        a = arr[i];
        b = arr[i+1];
        sum = a+b;
        sum = sum%10;
        arr[i] = sum;

        }
        n--;
    }
    cout<<arr[0];
    

}