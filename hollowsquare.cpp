#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number:";
    cin >> n;
    for (int row = 1; row <= n; row++)
    {
        if (row == 1 || row == 6)
        {
            for (int col = 1; col <= n; col++)
            {
                cout << "*";
            }
        }
        else
        {
            cout << "*";
            for (int col = 1; col <= n - 2; col++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}