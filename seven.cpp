#include <iostream>
using namespace std;

int main(){
	int r;
	cout<<"\nEnter Rows : ";
	cin>>r;
	
	for(int i=1;i<=r;i++){
		for(int j=1;j<=r;j++){
			if(i==1 || j==1){
				cout<<"*";
			}
			else if(j==(r-i)+1){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		cout<<"\n";
	}	
	return 0;
}
