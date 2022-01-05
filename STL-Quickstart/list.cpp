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

    l.remove(23);

    auto it = l.begin();
    it++;
    it++ ;
    l.erase(it);

    os<<"\nRemove and erase"<<endl;
    for(auto x : l)
    {
        os<<x<<" -> ";
    }

    // // // iterator to point to +2 position
    // advance(it, 0);
  
    // using insert to insert 1 element at the 3rd position
    // inserts 5 at 3rd position

    auto  c = l.begin();
    c++;
    l.insert(c,69);

    os<<"\nInsert"<<endl;
    for(auto x : l)
    {
        os<<x<<" -> ";
    }
    
    return 0;
}