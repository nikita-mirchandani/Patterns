//solid rhombus
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n; // no of rows
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (2 * n) - 1; j++)
        {
            int LB = n - i + 1;
            int UB = (2 * n) - i;
            if(j>=LB && j<=UB){
                cout <<"* ";
            }else{
                cout<<" ";
            }
        }
        cout << endl;
    }
}