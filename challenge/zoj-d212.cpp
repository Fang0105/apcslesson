#include<iostream>
using namespace std;
long long arr[105];

int main(){
	arr[0] = 1;
	arr[1] = 1;
	for(int i=2;i<=103;i++){
		arr[i] = arr[i-1]+arr[i-2];
	}
	int n;
	while(cin>>n){
		cout<<arr[n]<<endl;
	}






	return 0;
}
