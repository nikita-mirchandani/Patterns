#include <iostream>
using namespace std;

int main(){
	int r,n=1,p=0;
	cout<<"\nEnter Rows (Odd) : ";
    cin>>r;
   	for(int i=1;i<=r;i++){
   		int k=(r+1)/2;
   		if(n<=k){
   			for(int j=1;j<=i;j++){
   				cout<<"*";	
			}
			n++;
			cout<<"\n";
		}else{
	   		for(int j=1;j<=(r-k)-p;j++){
				cout<<"*";				
			}
			p++;
			cout<<"\n";   			
		}
	}
	return 0;
}
