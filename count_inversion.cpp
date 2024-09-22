#include<iostream>
#include<stdlib.h>

using namespace std;

int count_inversion(int a[],int n){
	int count=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j] && i<j){
				count++;
			}
		}
	}
	return count;
}

int main(){
	int a[]={7,8,6,3};
	int n=4;
	int pair=count_inversion(a,n);
	cout<<pair;
}
