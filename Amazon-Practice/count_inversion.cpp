#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &a, int left,int mid,int right){
    int i = left;
    int j = mid;
    int k = left;
    vector<int> temp = a;
    
    while( (i<mid) && (j<=right)){
        if(a[i]>a[j]){
            temp[k++] = a[j++];
        }
        else{
            temp[k++] = a[i++];
        }
    }
    while(i<mid){
        temp[k++] = a[i++];

    }
    while(j<right){
        temp[k++]=a[j++];
    }

    for(i=left;i<=right;i++){
        a[i]= temp[i];
        cout<<a[i]<<" ";
    }
    cout<<endl;

    return;

}


void mergesort(vector<int> &a,int left,int right){

    
    if(right>left){
        int mid = (left+right)/2;
        mergesort(a,left,mid);
        mergesort(a,mid+1,right);
        merge(a,left,mid,right);
        return;
    }
    
}

int main()
{
    vector<int> arr = {5,3,2,4,1};
    int n = arr.size();
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";
    }
}