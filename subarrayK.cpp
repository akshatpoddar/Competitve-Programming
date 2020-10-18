#include <iostream>
using namespace std;

int main(){
	int n ;
	cin>>n;
	int ar[n];
	for(int i=0; i<n; i++){
		cin>>ar[i];
	}
	int k;
	cin>>k;
	int* rem =(int *)calloc(k, sizeof(int)); 
	int sum = 0;
	for(int i=0; i<n; i++){
		sum+=ar[i];
		rem[(((sum%k)+k)%k)]++;
	}

	int ans = 0;
	ans+=rem[0];
	for(int i=0; i<k; i++){
		if(rem[i]>1)
		ans+=(rem[i]*rem[i]-1)/2;
	}
	cout<<ans<<endl;
}
