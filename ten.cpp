#include <iostream>
using namespace std;

int main(){
	int r,c;
    cout<<"\nEnter Rows: ";
    cin>>r;
	for(int i=1;i<=r;i++){
		int n=0,k=i;
		for(int j=1;j<=i+(i-1);j++){
			if(j<=i){
				cout<<char(65+n)<<" ";
				n++;
			}else{
				cout<<char((65+(k-1))-1)<<" ";	
				k--;
			}			
		}
		cout<<"\n";
	}   
}
