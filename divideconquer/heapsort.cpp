#include <iostream>
using namespace std;

void heapify(int ar[] ,int n, int i){
	int largest = i; 
	int left = 2*i;
	int right = (2*i)+1;

	if((left<n) && (ar[largest]<ar[left])) largest=left;
	if((right<n) && (ar[largest]<ar[right])) largest=right;

	if(largest!=i){
		swap(ar[largest], ar[i]);
		heapify(ar, n, largest);
	}
}
		
void heapsort(int ar[], int len){
	for(int i =len/2; i>=0; i--){
		heapify(ar, len, i);
	}
	for(int i=len-1; i>0; i--){
		swap(ar[0], ar[i]);
		heapify(ar, i, 0);
	}
}

int main(){
	int n;
	cout<<"Enter length of array";
	cin>>n;
	int ar[n];
	for(int i=0; i<n; i++){
		cin>>ar[i];
	}
	heapsort(ar, n);	
	for(int i=0; i<n; i++){
		cout<<ar[i]<<" ";
	}
}
