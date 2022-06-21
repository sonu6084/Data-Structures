#include<iostream>
using namespace std;

int merge(int arr[],int temp[],int left, int mid,int right){

    int i,j,k;
    int inversion_count=0;

    i=left;
    j=mid;
    k=left;

    while((i<=mid-1) && (j<=right)){
        if(arr[i]<=arr[j]){
            cout<<"firstif"<<arr[i]<<" "<<arr[j]<<endl;
            temp[k++] = arr[i++];

        }
        else{
            cout<<"else"<<arr[i]<<" "<<arr[j]<<endl;
            temp[k++] = arr[j++];
            inversion_count+= mid - i;
        }

        
    }
    

    while(i<=mid-1){
        temp[k++] = arr[i++];
    }
    while(j<=right){
        temp[k++] = arr[j++];
    }
    for(i=left;i<=right;i++){
        arr[i] = temp[i];
    }

    cout<<"arr ";
    for(i=left;i<=right;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return inversion_count;

}


int mergesort(int arr[],int temp[],int left,int right){
    int inversion_count = 0;
    int mid;
    if(right>left){

        mid = (left + right)/2;

        inversion_count+= mergesort(arr,temp,left,mid);
        inversion_count+= mergesort(arr,temp,mid+1,right);

        inversion_count+=merge(arr,temp,left,mid+1,right);

    }

    return inversion_count;

}

int main(){

    int arr[] = {5,3,2,4,1};
    int n = sizeof(arr)/sizeof(int);

    int temp[n];
    cout<<mergesort(arr,temp,0,n-1);

    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}