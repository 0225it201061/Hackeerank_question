#include<bits/stdc++.h>
using namespace std;
typedef long long ll;





int main(){
	ll s[5];
	ll d = 0;
	for(int i =0;i<5; i++){
		cin>>s[i];
		d+=s[i];
		
	}
	sort(s,s+5);
	    cout << d-s[4] << " " << d-s[0] << endl;
	
}
