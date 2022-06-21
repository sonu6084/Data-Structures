#include<bits\stdc++.h>
using namespace std;

int main(){
    
    cout<<"Enter";
    string s = "[[[[([{()}])]]]]";
    for(int i =0;i<s.size();i++){
        cout<<s[i]<<" ";
    }

    map<char,char> m;
    m[']'] = '[';
    m['}'] = '{';
    m[')'] = '(';

    map<int,int> d;
    d[1]= 2;
    
    stack<char> brackets;
    for(int i=0;i<s.size();i++){
        if(brackets.empty()){
            brackets.push(s[i]);
            cout<<"TOP EMPTY : "<<brackets.top()<<endl;
        }
        else{
            if(brackets.top()!=m[s[i]]){
            brackets.push(s[i]);
            cout<<"TOP NOT EQ : "<<brackets.top()<<endl;
            }
            else{
                cout<<"POP : "<<brackets.top()<<endl;
                brackets.pop();
                
            }
        }
        
    }
    if(brackets.empty()){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}