#include<bits/stdc++.h>
using namespace std;


// a+b = a*b
// b = a*b - a ==> b = (b-1)a ==> a = (b-1)/b
int main(){
    vector<float> a = {1,2,3,4,5,6,7,0.9,10};
    unordered_map<float,float> um;
    float number1 , number2;
    for(int i=0;i<a.size();i++){
        float num = (a[i]-1)/a[i];
        cout<<a[i]<<" "<<num<<endl;

        if(um.find(a[i]) == um.end()){
            um[num] = a[i];
            cout<<num<<" "<<a[i]<<" hfdhsiuf"<<endl;
        }
        else{
            number1 = a[i];
            number2 = um[a[i]];
            break;
        }

    }
    cout<<number1<<" "<<number2<<" ans";
    
}