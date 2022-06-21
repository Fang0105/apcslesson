#include<iostream>
using namespace std;

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	int sum = 0;
	for(int i=a;i<=b;i++){
		if(i%c==0){
			sum+=i;
		}
	}
	cout<<sum<<endl;






	return 0;
}

