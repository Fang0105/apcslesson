#include<iostream>
using namespace std;

int cmp(int a,int b){
	if(a>b){
		return a;
	}else{
		return b;
	}
}

int main(){

	int a,b;
	cin>>a>>b;
	cout<<cmp(a,b)<<endl;





	return 0;
}

