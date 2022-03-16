#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int k = i + (i - 1);

        for (int j = k; j > 0; j = j - 2)
        {
            cout << j <<" ";
        }

        cout << endl;
    }
}
