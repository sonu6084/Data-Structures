#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool Compare(string s,string b){

    int l = s.length();
    int i;
    for(i=0;i<l;i++){
        if(s[i]!=b[i]){
            return 0;
        }
    }

    if(i==l){
        return 1;
    }

}

int main(){

    vector<string> s;

    s.push_back("batman");
    s.push_back("apple");
    s.push_back("angry");
    s.push_back("bat");
    s.push_back("an");

    sort(s.begin(),s.end());

    for(int i=0;i<s.size()-1;i++){
        int val = Compare(s[i],s[i+1]);
        if(val==1){
            string temp;
            temp = s[i];
            s[i] = s[i+1];
            s[i+1] = temp;
        }
    }

    for(auto c:s){
        cout<<c<<endl;
    }

}