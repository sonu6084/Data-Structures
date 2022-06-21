#include<iostream>
using namespace std;
#define ll long long

int main(){
    ll primes[] = {2,3,5,7,11,13,17,19};

	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll subsets = (1<<8)-1; //number of subsets 

		ll ans = 0;
		for(ll i=1;i<=subsets;i++){
			ll denom = 1ll; //1ll means 1 in long long
			// cout<<1ll<<endl; 

			ll setBits = __builtin_popcount(i);

			for(ll j=0;j<8;j++){
				// cout<<i<<" ";
				// cout<<(1<<j)<<" ";
				// cout<<j<<" ";
				// cout<<(i && 1<<j)<<endl;
				
				if(i&(1<<j)){
					//bit i is set 
					denom*=primes[j];
				}
			}
				// cout<<"Start";
				// cout<<setBits<<" "<<(setBits&1)<<endl;
				// cout<<denom<<endl;
				if(setBits&1){
					ans+=n/denom;
				}
				else{
					ans-=n/denom;
				}
			
			
			

		}
		cout<<ans<<endl;
	}
    
}