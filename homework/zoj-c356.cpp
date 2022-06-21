#include<iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int n;
	cin>>n;
	int k=0;
	for(int i=0;i<n*n;i++){
		char c;
		cin>>c;
		if(i==n*k+k){
			k++;
			cout<<c;
		}
	}
	cout<<endl;




	return 0;
}

