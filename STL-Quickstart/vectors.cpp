#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{

    //initialization 
    vector<int> a;
    vector<int> b(5,10); //initailize with 5 elements with value 10
    vector<int> c(b.begin(),b.end());
    vector<int> d{1,2,3,4,5,6};

    //loops for iterating over vector
    for(int i=0;i<c.size();i++)
    {
        cout<<c[i]<<":";
    }

    cout<<endl;
    for(auto it=b.begin();it!=b.end();it++)
    {
        cout<< (*it) <<":";
    }
    cout<<endl;

    for(auto x : d)
    {
        cout<<x<<":";
    }
    cout<<endl;


    //more functions
    d.push_back(10);
    d.size();
    d.capacity();
    cout<<d.size()<<" : "<<d.capacity()<<" : "<<d.max_size();



    return 0;

}