#include <iostream>
#include <string>
using namespace std;

int len(string s){
	return s.length();
}

int lcs(string str, string str2){
	int dp[len(str)+1][ len(str2)+1];
	for(int i=0; i<=len(str); i++){
		for(int j=0; j<=len(str2); j++){
			if(i==0||j==0) dp[i][j] = 0;
			else if(str[i-1]==str2[j-1]) dp[i][j] = 1 + dp[i-1][j-1];
			else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
		}
	}
	return dp[len(str)][ len(str2)];
}


int main(){
	cout<<"Enter string ";
	string str;
	cin>>str;
	cout<<"Enter string 2 ";
	string str2;
	cin>>str2;
	int max=lcs(str, str2);
	cout<<max<<endl;
}
