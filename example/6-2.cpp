#include<iostream>
using namespace std;

int main(){
	int n,m,p;
	cin>>n>>m>>p;
	int arr[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	} 
	while(p--){
		int x,y;
		cin>>x>>y;
		cout<<arr[x][y]<<endl;
	}






	return 0;
}

