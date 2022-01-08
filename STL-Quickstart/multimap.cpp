#include<iostream>
#include<map>
#include<string>

using namespace std;

int main()
{
    multimap<char,string> m;


    //insert find erase happen at log(n) , self balancing bst
    for(int i=0;i<7;i++)
    {
        char a ;
        string s;
        cin>>a;
        getline(cin,s);
        
        m.insert(make_pair(a,s));

    }

    //search for cat

    auto it = m.find('a');
    if(it->second=="angry");
    {
        m.erase(it);
    }


    // getting one range of element from keys

    auto it2  = m.lower_bound('b');
    cout<<it2->second<<endl;
    auto it3 = m.upper_bound('d');
    cout<<it3->second<<endl;

    

    for(auto p : m) 
    {
        cout<<p.first<<" : "<<p.second<<endl;
    }

    return 0;
}


// //input
// b batman
// a apple
// b boat
// a angry
// c cat
// d dog
// e elephant

// //output
//  batman
//  elephant

// a :  angry
// b :  batman
// b :  boat
// c :  cat
// d :  dog
// e :  elephant