#include<iostream>
#include<list>
#include<fstream>

using namespace std;

int main()
{

    ifstream is("input.txt");


    list<int> l;

    int n;
    is>>n;
    int a;
    // cin>>n;

    for(int i=0;i<n;i++)
    {
        is>>a;
        l.push_back(a);
    }

    ofstream os("output.txt");
    os<<"Push Back"<<endl;
    for(auto x : l)
    {
        os<<x<<" -> ";
    }

    os<<endl;
    os<<"Front push"<<endl;

    is>>n;

    for(int i=0;i<n;i++)
    {
        is>>a;
        l.push_front(a);
    }

    for(auto x : l)
    {
        os<<x<<" -> ";
    }

    list<int> l1;
    if(l1.empty())
    {
        cout<<"empty";
    }

    l.pop_back();
    l.pop_front();

    //front and back pop
    os<<"\nfront and back pop"<<endl;
    for(auto x : l)
    {
        os<<x<<" -> ";
    }


    
    return 0;
}