#include <iostream>
using namespace std;

int main(){
	int r;
	cout<<"\nEnter Rows : ";
	cin>>r;
	
	for(int i=1;i<=r;i++){
		for(int j=1;j<=r+(r-1);j++){
			if(j<=r-i || j>=r+i){
				cout<<" ";
			}else{
				cout<<"*";
			}
		}
		cout<<"\n";
	}
	return 0;
}
