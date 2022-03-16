#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;     // no of rows

    for (int i = n; i >= 1; i--)
    {                        // 5 4 3 2 1
        int k = i + (i - 1); // 9 7 5 3 1

        for (int p = 0; p <= n - 1; p++)
        {
            if (n - i - p >= 1)
            {
                cout << " ";
            }
        }
        for (int j = k; j >= 1; j--)
        {
            {
                cout << "*";
            }
        }

        cout << endl;
    }
}
