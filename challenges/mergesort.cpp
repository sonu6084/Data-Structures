#include<iostream>
using namespace std;

void merge(int *arr,int l,int mid,int r){

    int i,j,k;
    i=l;
    j=mid;
    k=l;
    int n = sizeof(arr)/sizeof(int);
    int b[n];

    while( (i<=mid) && (j<=r)){
        if(arr[i]<arr[j]){
            b[k] = arr[i];
            i++;
        }
        else{
            b[k] = arr[j];
            j++;
        }
        k++;
    }

    if(i<=mid){
        while(i<=mid){
            b[k] = arr[i];
            i++;
            k++;
        }
    }
    if(j<=r){
        while(j<=r){
            b[k] = arr[j];
            i++;
            k++;
        }
    }
    for(int c=l;c<=r;c++){
        arr[c] = b[c];
        cout<<arr[c]<<endl;

    }

    return;

}

void mergesort(int *arr,int l,int r){

    if(r>l){
        int mid = (l+r)/2;
        cout<<l<<" "<<mid<<" "<<r<<endl;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,r);

        merge(arr,l,mid,r);
    }

    return;
}


int main(){
    int arr[] = {10,9,8,7,6,5,4,3,2,1};
    int n = sizeof(arr)/sizeof(int);
    mergesort(arr,0,n-1);
    cout<<endl;
    for(int i=0;i<n;i++){
        
        cout<<arr[i]<<" ";
    }
}