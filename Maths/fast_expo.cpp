#include<iostream>
using namespace std;

int pow(int n,int m){

    
    

    if(n==0)
    {
        return 1;
    }
    if(n%2==0){
        return pow(n/2,m)*pow(n/2,m);
    }
    else{
        return m*pow(n/2,m)*pow(n/2,m);
    }
}

int main()
{
    int n,m;

    cin>>m;
    cin>>n;
    cout<<pow(n,m);
}