#include<iostream>
#include<set>

using namespace std;

int main()
{
    int arr[] = {10 ,120,45,32,12 ,10,120,43};
    int n = sizeof(arr)/sizeof(int);

    set<int> s;

    for(int i=0;i<n;i++)
    {
        s.insert(arr[i]);
    }

    s.erase(12);

    for(auto it: s)
    {
        cout<<it<<" ";
    }
    return 0;
}
