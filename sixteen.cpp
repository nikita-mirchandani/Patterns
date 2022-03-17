#include <iostream>
using namespace std;

int main(){
	int r,num=1;
	cout<<"\nEnter Rows : ";
    cin>>r;
    
    for(int i=1;i<=r;i++){
    	for(int j=1;j<=r;j++){
    		if(j<(r-i)+1){
    			cout<<"  "; 
			}else{
				cout<<num<<" ";
				num++;
			}
		}
		cout<<"\n";    
	}
	return 0;
}
