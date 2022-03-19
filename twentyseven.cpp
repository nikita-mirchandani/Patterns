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
            if(j>n-i+1){
                cout<<"0";
            }else{
                cout<<"1";
            }
        }
        cout<<endl;
    }
}