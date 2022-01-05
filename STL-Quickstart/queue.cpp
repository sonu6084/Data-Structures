#include<iostream>
#include<queue>

using namespace std;

int main()
{

    queue<int> q;

    q.push(56);
    q.push(45);
    q.push(34);
    cout<<q.size()<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<i<<" ";
        cout<<q.front()<<" : ";
        q.pop();
    }
    cout<<q.front();
    if(q.empty())
    {
        cout<<"empty";
    }
    return 0;
}