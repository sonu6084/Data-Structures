#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[4][4] = {
        {1,1,1,1},{1,0,1,1},{1,1,0,1},{0,0,0,1}
    };

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    int rowflag = 1 , colflag = 1;

    for(int i=0;i<4;i++){
        if(a[0][i]==0){
            colflag=0;
        }
    }
    for(int i=0;i<4;i++){
        if(a[i][0]==0){
            rowflag=0;
        }
    }
    cout<<colflag<<" "<<rowflag<<endl;

    for(int i=1;i<4;i++){
        for(int j=1;j<4;j++){
            if(a[i][j]==0){
                a[0][j]=0;
                a[i][0]=0;
            }
        }
    }
    for(int i=3;i>=1;i--){
        for(int j=3;j>=1;j--){
            if(a[i][0]==0 || a[0][j]==0){
                a[i][j]=0;
            }
        }

    }

    if(colflag==0){
        for(int i=0;i<4;i++){
           a[0][i]=0;
           cout<<i<<" "<<a[0][i]<<endl; 
        }
    }

    if(rowflag==0){
        for(int i=0;i<4;i++){
           a[i][0]=0; 
           
        }
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

}