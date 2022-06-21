#include<bits/stdc++.h>
using namespace std;

void merge(int *arr,int left , int mid, int right){
    int i=0,j=0,k=left;
    int n = sizeof(arr)/sizeof(int);
    int n1 = mid-left+1;
    int n2 = right-mid;
    int a[n1];
    int b[n2];
    // int temp[n];

    for(int i=0;i<n1;i++){
        a[i] = arr[left+i];
    }

    for(int j=0;j<n2;j++){
        b[j] = arr[mid+j+1];
    }

    while((i<n1) && (j<n2)){
        if(a[i]<b[j]){
            arr[k] = a[i];
            k++;
            i++;
        }
        else{
            arr[k] = b[j];
            k++;
            j++;
        }
    }

    while(i<n1){
        arr[k] = a[i];
        k++;i++;
    }
    while(j<=right){
        arr[k]=b[j];
        k++;j++;
    }

    // for(int c=left;c<right;c++){
    //     arr[c] = temp[c];
    //     cout<<" c : "<<c<<" "<<arr[c]<<endl;
    // }

    return;
}

void mergesort(int *arr,int left,int right){
    if(right>left){
        int mid = (left+right)/2;
        // cout<<"mid : "<<mid;
        mergesort(arr,left,mid);
        mergesort(arr,mid+1,right);

        merge(arr,left,mid,right);

        return;
    }

    return;
}


int main(){
    int arr[] = {2,3,1,4,10,5,6};
    int n = sizeof(arr)/sizeof(int);

    cout<<"n : "<<n<<endl;
    mergesort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}