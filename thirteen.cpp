#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n; // no of rows
    for (int i = 1; i <= n/2 ; i++) 
    {
          for (int j = 1; j <= n ; j++){
              if(j<=i || j>=n+1-i){ //i, j =1 
                  cout<<"*";
              }else{
                  cout<<" ";
              }
          }
          cout<<endl;
    }
     for (int i = n/2 + 1; i <= n ; i++) 
    {
          for (int j = 1; j <= n ; j++){
              if(j>=i || j<=n+1-i){ //i, j =1 
                  cout<<"*";
              }else{
                  cout<<" ";
              }
          }
          cout<<endl;
    }
}
