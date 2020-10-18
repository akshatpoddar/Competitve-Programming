#include <iostream>
#include <math.h>
#include <vector>
using namespace std;



int goldmine(vector<vector<int> > ar){
	vector<vector<int> > dp(ar.size(), vector<int>(ar[0].size(), 0));
	for(int j=dp[0].size()-1;j>=0;j--){
		for(int i=0 ;i<dp.size();i++ ){
			if(j==ar[0].size()-1) dp[i][j]=ar[i][j];
			else if(i==0) dp[i][j]=ar[i][j]+max(dp[i][j+1], dp[i+1][j+1]);
			else if(i==ar.size()-1) dp[i][j]=ar[i][j]+max(dp[i][j+1],dp[i-1][j+1]);
			else dp[i][j]=ar[i][j]+max(dp[i][j+1], max(dp[i+1][j+1], dp[i-1][j+1]));
		}		
	}			
	int max=dp[0][0];
	for(int i=1;i<dp.size();i++){
		max=max<dp[i][0]?dp[i][0]:max;
	}

	cout<<"-----------------------"<<endl;
	for(int i=0;i<dp.size();i++){
		for(int j=0;j<dp[0].size();j++ ){
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}	

	return max;
}

int main(){
	int n,m;
	cin>>n>>m;
	vector<vector<int> > ar(n,vector<int>(m,0));
	for(int i=0; i<n;i++){
		for(int j=0;j<m;j++){
			cin>>ar[i][j];
		}
	}
	int max = goldmine(ar);
	cout<<max<<endl;
}
