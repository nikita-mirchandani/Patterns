// hollow triangle
#include <iostream>
using namespace std;
int main()
{
    int n,count=1;
    cin >> n; // no of rows
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++) //1 to n 
        {     
            if(i==n-j+1 || i==n){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }

        for (int j = n+1; j <= (2*n)-1; j++) //nto 2n-1
        {     
            if(i==j-n+1 || i==n){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}