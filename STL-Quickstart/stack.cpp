#include<iostream>
#include<stack>

using namespace std;
int main()
{
    stack<int> s;
    s.push(35);
    s.push(40);
    s.push(69);
    for(int i=0;i<3;i++)
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    if(s.empty())
    {
        cout<<"empty";
    }

    return 0;
}