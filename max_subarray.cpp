#include<iostream>
#include<stdlib.h>

using namespace std;

int subarray_sum(int a[],int n){
	
	int current=a[0];
	int maximum=a[0];
	
	for(int i=1;i<n;i++){
	if(a[i]>current+a[i]){
		current=a[i];
	}else{
	
	current=current+a[i];
}

if(maximum<current){
	maximum=current;
}
	
	}
	return maximum;
}

int main(){
	int a[]={-2,1,-3,4,-1,2,1,-5,4};
	int n=9;
	int max_sum=subarray_sum(a,n);
	cout<<"the maximum sum = "<<max_sum;
	return 0;
}
