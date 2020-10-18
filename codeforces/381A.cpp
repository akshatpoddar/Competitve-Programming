#include <iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	int ar[n];
	int sum=0;
	for(int i=0;i<n;i++){
		cin>>ar[i];
		sum+=ar[i];
	}
	
	int i=0, j=n-1;
	int score1=0;
	while(i<=j){
		if(ar[i]>ar[j]){
			score1+=ar[i];
			i++;
		}else{
			score1+=ar[j];
			j--;
		}
		if(ar[i]>ar[j]) i++; else j--;
	}
	int score2 = sum-score1;
	cout<<score1<<" "<<score2<<endl;

}
