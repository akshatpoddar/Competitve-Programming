#include <iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	int ar[] = {100,20,10,5,1};
	int sum=n;
	int i=0;
	int count=0;
	while(sum!=0){
		if(sum-ar[i]<0){ i++; continue;}
		sum -= ar[i];
		count++;
	}
	cout<<count;
}

