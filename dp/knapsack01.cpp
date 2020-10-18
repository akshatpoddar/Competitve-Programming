#include <iostream>
using namespace std;



int knapsack(int wt[], int val[], int n, int W){
	int dp[n+1][W+1];
	for(int i=0; i<=n; i++){
		for(int j=0; j<=W; j++){
			if(i==0|j==0){
				dp[i][j]=0;
			}
			else if(wt[i-1]>W){
				dp[i][j] = dp[i-1][j];
			}
			else{
				dp[i][j] = max(dp[i-1][j], val[i-1]+dp[i-1][j-wt[i-1]]);
			}
		}
	}
	return dp[n][W];
}

int main(){
	cout<<"Enter length of array : ";
	int  n;
	cin>>n;
	int val[n], wt[n];
	for(int i=0; i<n; i++){
		cin>>val[i];
	}		

	for(int i=0; i<n; i++){
		cin>>wt[i];
	}		
	cout<<"Enter max weight : ";
	int W;
	cin>>W;
	int ans = knapsack(wt, val, n, W);
	cout<<ans<<endl;
}
	
