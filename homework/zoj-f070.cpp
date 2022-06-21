#include<iostream>
using namespace std;

int main(){
	int a1,b1,a2,b2,a3,b3;
	cin>>a1>>b1>>a2>>b2>>a3>>b3;
	int i=1;
	while(!(i%a1==b1&&i%a2==b2&&i%a3==b3)){
		i++;
	}
	cout<<i<<endl;






	return 0;
}

