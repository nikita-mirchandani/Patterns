#include <iostream>
using namespace std;

int main() {
    int r;
    cout<<"\nEnter Rows: ";
    cin>>r;
    for(int i=1;i<=r;i++)
    {
        int k=0,p=0;
        for(int j=1;j<=i;j++){
            if((i+1)%2 == 0){   //row(even) , o/p start from 1
                if(k == 0)
                {
                    cout<<1;
                    k++;
                }
                else{
                    cout<<0;
                    k--;   
                }
            }else{  //row(odd) , 0/p start from 0 
                if(p == 0)
                {
                    cout<<0;
                    p++;
                }
                else{
                    cout<<1;
                    p--;   
                }
            }
        }
        cout<<"\n";
    }
}
