#include <iostream>

using namespace std;

int findMaxSub(int ar[], int n){
	int curmax = ar[0];
	int maxsofar = ar[0];
	for(int i=1; i<n; i++){
		curmax = max(ar[i], ar[i]+curmax);
		maxsofar = max(curmax, maxsofar);
	}
	return maxsofar;
}

int main(){
	int n;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++) cin>>ar[i];
	int maxSum = findMaxSub(ar, n);
	cout<<maxSum;
}
