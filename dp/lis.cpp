#include <iostream>
using namespace std;

int lis(int ar[], int n){
	int dp[n+1][n+1];
	for(int i=0; i<=n; i++){
		for(int j=0; j<=n; j++){
			if(i==0||j==0) dp[i][j]=0;
			else if(ar[i]>ar[j]) dp[i][j]= dp[i-1][j-1]+1;
			else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
		}
	}

	return dp[n][n];
}

int main(){
	cout<<"Enter length of array: ";
	int n;
	cin>>n;
	int ar[n];
	for(int i=0; i<n;i++){
		cin>>ar[i];
	}
	int max = lis(ar, n);
	cout<<max<<endl;
}
	

