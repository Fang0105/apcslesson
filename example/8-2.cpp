#include<iostream>
using namespace std;

void fun(int a){
	if(a%3==0){
		cout<<a/3<<endl;
	}else if(a%3==1){
		cout<<a*3<<endl;
	}else{
		cout<<a+3<<endl;
	}
}

int main(){
	int n;
	cin>>n;
	while(n--){
		int a;
		cin>>a;
		fun(a);
	}






	return 0;
}

