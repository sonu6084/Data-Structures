#include<iostream>
#include<map>
#include<string>

using namespace std;

int main()
{   
    //initialization and insertion
    map<string,int> m; 
    //first way
    m.insert(make_pair("Apple",50));
    //second way

    pair<string,int> p;
    p.first = "Mango";
    p.second = 100;
    m.insert(p);

    //third way
    m["Banana"] = 40;


    //search 

    string fruit = "Banana";
    auto it = m.find(fruit);
    if(it!=m.end())
    {
        cout<<"Fruit is present\n";
    }
    //search 2 --> only single unique vale can be there in map so if it is not there it will be zero
    if(m.count(fruit))
    {
        cout<<"It is present\n";
    }

    //erase
    m.erase(fruit);

    //output
    for(auto x:m)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }


    return 0;
}