#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // Upper half
    for (int i = 0; i < n; i++)
    {
        // Left spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        cout << "*";

        // Middle spaces + right star
        if (i > 0)
        {
            for (int j = 0; j < 2 * i - 1; j++)
            {
                cout << " ";
            }

            cout << "*";
        }

        cout << endl;
    }

    // Lower half
    for (int i = n - 2; i >= 0; i--)
    {
        // Left spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        cout << "*";

        // Middle spaces + right star
        if (i > 0)
        {
            for (int j = 0; j < 2 * i - 1; j++)
            {
                cout << " ";
            }

            cout << "*";
        }

        cout << endl;
    }
}