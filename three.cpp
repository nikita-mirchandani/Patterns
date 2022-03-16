#include <iostream>
using namespace std;

int main() {
    int r,c;
    cout<<"\nEnter Rows: ";
    cin>>r;
    cout<<"\nEnter Cols: ";
    cin>>c;
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++){
            if(i==1 || j==1 || i==r ){
                cout<<"* ";
            }
            else if(j==c){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<"\n";
    }
}
