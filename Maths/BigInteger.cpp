#include<iostream>
using namespace std;

void multiply(int *a,int &n,int no)
{
    int carry = 0;
    int pro;

    for(int i=0;i<n;i++)
    {
        pro = a[i]*no + carry;
        carry = pro/10;
        pro = pro%10;
        a[i] = pro;
    }
    while(carry>0)
    {
        a[n] = carry%10;
        carry = carry/10;
        n++;
    }

}

void big_fact(int number){
    int *a = new int[1000];
    for(int i=0;i<1000;i++)
    {
        a[i] = 0;
    }
    a[0] = 1;
    int n = 1;
    for(int i=2;i<=number;i++){
        multiply(a,n,i);
    }
    n=n-1;
    while(n>=0){
        cout<<a[n]<<"";
        n--;
    }
    
}


int main(){
    int n;
    cin>>n;
    big_fact(n);
    return 0;
}