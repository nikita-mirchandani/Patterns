#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;     // no of rows
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i<=j){
                cout<<"* ";
            }else{
                cout<<" ";
            }
        } 
        cout<<endl;
    }
     for(int i=n+1;i<=(2*n)-1;i++){ //6 7 8 9
            for(int j=1;j<=n;j++){
                if(j<=(2*n)-1-i){
                    cout<<" ";
                }else{
                    cout<<"* ";
                }
                
            }
            
            cout<<endl;             
         } 
         
    }
         