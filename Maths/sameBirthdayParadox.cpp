#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n = 365;
    int people;
    vector<float> v(366,0.0);

    
    v[0] = float(1.0);
    cout<<v[0]<<endl;
    for(int i=1;i<=n;i++)
    {
        float ans = float(365-i)/float(365);
        // cout<<"ans : "<<ans;
        v[i] = v[i-1]*ans;
        cout<<v[i]<<endl;
        if((1-v[i])>0.50){
            cout<<"hurray";
            people = i;
            break;
        }
    }
    cout<<"Number of people for 50 percentage chance for same birthday is : "<<people+1;
    
}