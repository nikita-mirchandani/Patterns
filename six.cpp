#include <iostream>
using namespace std;

int main(){
	int r;
	cout<<"\nEnter Rows : ";
	cin>>r;
	
	for(int i=1;i<=r;i++){
		for(int j=1;j<=r+(r-1);j++){
			if(i==1){	//first row
				if(j>=r && j<=(2*r)-1){
					cout<<" * ";
				}else{
					cout<<"   ";
				}
			}
			else if(i==r){ 	//last row
				if(j>=1 && j<=r){
					cout<<" * ";
				}else{
					cout<<"   ";
				}
			}
			else if(i>1 && i<r){	//middle rows
				if(j==(r-i)+1 || j==(r-i)+r){	
					cout<<" * ";					
				}else{
					cout<<"   ";
				}
			}
		}
		cout<<"\n";
	}
	return 0;
}
