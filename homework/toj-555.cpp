#include<iostream>
using namespace std;

int main(){
	long long n;
	cin>>n;
	long long sum = 0;
	while(n--){
		long long a;
		cin>>a;
		sum+=a;
	}
	long long t;
	cin>>t;
	while(t--){
		long long b,e,k;
		cin>>b>>e>>k;
		sum+=(e-b+1)*k;
		cout<<sum<<endl;
	}
	






	return 0;
}

