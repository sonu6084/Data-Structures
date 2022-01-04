#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

bool compare(string a,string b)
{
    if(a.length()==b.length())
    {
        return a<b;
    }
    return a.length()<b.length();
}


int main(){

    int n;
    cin>>n;
    cin.get();
    string s[100];
    //taking string input
    for(int i=0;i<n;i++){
        cout<<"Enter string : ";
        getline(cin,s[i]);
    }

    //sorting string array , lexographical order
    sort(s,s+n);
    for(int i=0;i<n;i++)
    {
        cout<<s[i]<<endl;  
    } 


    sort(s,s+n,compare);
    for(int i=0;i<n;i++)
    {
        cout<<s[i]<<endl;  
    } 


    return 0;
}