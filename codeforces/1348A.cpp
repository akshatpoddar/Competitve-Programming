#include <iostream>
#include <math.h>

using namespace std;

void solve(int n){
	int i=0;
	int j=n-1;
	int lsum=0;
	while(i<n/2){
		lsum+=pow(2,j);
		j--;
		i++;
	}
	int rsum=pow(2,n);
	while(j>=1){
		rsum+=pow(2,j);
		j--;
	}
	cout<<rsum-lsum<<endl;
}

int main(){
	int n;
	cin>>n;
	int ar[n];
	for(int i=0; i<n;i ++){
		cin>>ar[i];
	}
	
	for(int i=0; i<n; i++){
		solve(ar[i]);
	}
}
