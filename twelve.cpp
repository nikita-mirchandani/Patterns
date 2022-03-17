// hollow diamond for even number
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n; // no of rows
    for (int i = 1; i <= n/2 ; i++) //1 TO 5 ROWS
    {
        for (int j = 1; j <= n-1 ; j++) // 1 TO 9 COL
        {
            
            int LB = (n / 2) - i + 1; // 5 4
            int UB = (n / 2) + i - 1; // 5 6
            if (j == LB || j == UB)
            {
                cout << "* ";
            }
            else
            {
                cout << " ";
            }
        }
        cout<<endl;
    }
    for (int i = (n/2 + 1); i <= n  ; i++) // 6 TO 10
    {
        for (int j = 1; j <= n-1 ; j++)// 1 TO 9 COL
        {
            int LB = i-(n/2); 
            int UB = n-LB; 
            if (j == LB || j == UB)
            {
                    cout <<"* ";
            }
            else
            {
                cout <<" ";
            }
        }
        cout<<endl;
    }
}