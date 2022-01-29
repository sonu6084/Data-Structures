#include<iostream>
#include<queue>
#include<algorithm>
#include<fstream>
using namespace std;

int main(){

    priority_queue<int> pq;
    int k,q;
    ifstream is("input.txt");
    is>>q>>k;
    for(int i=0;i<q;i++){
        
        int a,b,c;
        is>>a;
        // cout<<i<<" "<<q<<" "<<k<<" "<<a<<endl;
        if(a==2){
            cout<<pq.top()<<endl;
        }
        if(a==1)
        {
            is>>b>>c;
            // cout<<b<<" "<<c<<endl;
            int distance = b*b + c*c;
            pq.push(distance);
        }
        
        if(pq.size()>k){
            pq.pop();
        }

    }

    return 0;

}