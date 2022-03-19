// Diamond star pattern
//     *     
//    ***
//   *****
//  *******
// *********
// *********
//  *******
//   *****   
//    ***
//     *
#include <iostream>
using namespace std;
int main()
{
    int n,count=1;
    cin >> n; // no of rows
    for (int i = 1; i <= (n+1)/2; i++)
    {
        int UB = ((n+1)/2 +i -1);
        int LB = ((n+1)/2 -i +1);
        for (int j = 1; j <= n; j++) //1 to n 
        {     
                if(j<=UB && j>=LB){
                    cout<<"*";
                }else{
                    cout<<" ";
                }
        }
        cout<<endl;  
    }  
    for (int i = ((n+1)/2)+1; i <= n; i++)
    {                                  //5 6 7
        int LB = (((n+1)/2) - (n - i));//2 3 4
        int UB = ((n+1)/2 + (n - i));  //6 5 4
        for (int j = 1; j <= n; j++)   //1 to n 
        {     
                if(j<=UB && j>=LB){
                    cout<<"*";
                }else{
                    cout<<" ";
                }
        }
        cout<<endl;
        
    }      
   
}