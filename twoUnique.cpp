#include <iostream>
using namespace std;

void printUnique(int ar[], int n){
	int x=ar[0];
	for(int i=1;i<n;i++){
		x=ar[i]^x;
	}
	int val=x;
	int i=0;
	while(val>0){
		if(val&1){
			break;
		}
		val=val>>1;
		i++;
	}
	int mask=1<<i;
	int res=0;
	for(int i=0;i<n;i++){
		if(ar[i]&mask) res=res^ar[i]; 
	}
	int a=res^x;
	cout<<res<<" "<<a<<endl;
}

int main(){
	int n;
	cout<<"Enter number of array elements: ";
	cin>>n;
	int ar[n];
	for(int i=0; i<n;i++){
		cin>>ar[i];
	}
	printUnique(ar, n);

}
