#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		cout<<a<<" "<<b<<" "<<c<<" "<<d<<" ";
		if(b-a==c-b){
			cout<<d+b-a<<endl;
		}else{
			cout<<d*b/a<<endl;
		}
	}
	






	return 0;
}

