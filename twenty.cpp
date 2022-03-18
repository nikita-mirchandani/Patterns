#include <iostream>
using namespace std;

int main(){
	int r;
    cout<<"\nEnter Rows (Odd) : ";
    cin>>r;
    
	int mid = (r+1)/2;
	
	for(int i=1;i<=r;i++){
		for(int j=1;j<=r;j++){
			if(i==mid || j==mid){
				cout<<" + ";
			}
			else{
				cout<<"   ";
			}
		}
		cout<<"\n";
	}
	return 0;
}
