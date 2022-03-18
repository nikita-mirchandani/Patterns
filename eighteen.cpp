#include <iostream>
using namespace std;

int main(){
	int r,c=1;
    cout<<"\nEnter Rows: ";
    cin>>r;

	for(int i=1;i<=r;i++){
		for(int j=1;j<=i;j++){
			cout<<" "<<c<<" ";
			c++;
		}
		cout<<"\n";
	}
	return 0;
}
