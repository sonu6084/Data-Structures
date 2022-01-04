#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{

    //initialization
    vector<int> a;
    vector<int> b(5, 10); //initailize with 5 elements with value 10
    vector<int> c(b.begin(), b.end());
    vector<int> d{1, 2, 3, 4, 5, 6};

    //loops for iterating over vector
    for (int i = 0; i < c.size(); i++)
    {
        cout << c[i] << ":";
    }

    cout << endl;
    for (auto it = b.begin(); it != b.end(); it++)
    {
        cout << (*it) << ":";
    }
    cout << endl;

    for (auto x : d)
    {
        cout << x << ":";
    }
    cout << endl;

    //more functions
    d.push_back(10);
    d.size();
    d.capacity();
    cout << d.size() << " : " << d.capacity() << " : " << d.max_size();

    //pusback
    vector<int> v;
    v.push_back(3);
    v.push_back(5);
    v.push_back(10);
    cout << endl;
    for (auto y : v)
    {
        cout << y << ":";
    }
    cout << endl;
    //pop back
    v.pop_back();
    for (auto y : v)
    {
        cout << y << ":";
    }
    cout << endl;

    //insert

    v.insert(v.begin()+1, 100);
    for (auto y : v)
    {
        cout << y << ":";
    }
    cout << endl;

    //insert 3 zeros after second place
    v.insert(v.begin() + 2, 3, 0);
    for (auto y : v)
    {
        cout << y << ":";
    }
    cout << endl;


    //erase

    v.erase(v.begin()+2);
    for (auto y : v)
    {
        cout << y << ":";
    }
    cout << endl;

    v.erase(v.begin()+2,v.begin()+4);
    for (auto y : v)
    {
        cout << y << ":";
    }
    cout << endl;

    return 0;
}