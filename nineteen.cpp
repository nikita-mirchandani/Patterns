#include <iostream>
using namespace std;

int main(){
	int r;
    cout<<"\nEnter Rows: ";
    cin>>r;
    
	int c=r;
	for(int i=1;i<=r;i++){
		for(int j=r;j>=i;j--){
			cout<<" "<<c<<" ";
		}
		c--;
		cout<<"\n";
	}
	return 0;
}
