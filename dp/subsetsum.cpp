#include <iostream>
using namespace std;

bool subsum(int ar[], int n, int sum){
	int dp[n+1][sum+1];
	for(int i=0; i<=n; i++){
		for(int j=0; j<=sum; j++){
			if(i==0) dp[i][j]=false;
			else if(j==0) dp[i][j]=true;
			else if(ar[i-1]<=j) dp[i][j]=(dp[i-1][j])||(dp[i-1][j-ar[i]]);
			else dp[i][j]=dp[i-1][j];
		}
	}
	return dp[n][sum];
}



int main(){
	cout<<"Enter number of elements in array: ";
	int n ;
	cin>>n;
	int ar[n];
	for(int i=0; i<n; i++){
		cin>>ar[i];
	}
	cout<<"Enter sum: ";
	int sum;
	cin>>sum;
	bool result = subsum(ar,n,sum);
	if(result) cout<<"Subset found"<<endl;
	else cout<<"Not found"<<endl;
}	


