#include <iostream>
#include <math.h>
using namespace std;

int sieve(int a, int b){
	bool ar[max(a,b)+1];
	memset(ar, true, sizeof(ar));
	for(int i= min(a,b); i<=sqrt(max(a,b)); i++){
		if(ar[i] == true){

			for(int j=i*i; j<=max(a,b); j+=i){
				ar[j] = false;
			}
		}
	}
	int count = 0;
	for(int i=min(a,b); i<=max(a,b); i++){
		count++;
	}
	return count;
}

int main(){
	int a, b;
	cout<<"Please enter range of numbers to find prime between : ";
	cin>>a;
	cin>>b;
	cout<<sieve(a,b);
}	
