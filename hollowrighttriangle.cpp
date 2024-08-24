#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number:";
    cin >> n;
    for (int row = 1; row <= n; row++)
    {

        for (int col = 1; col <= row; col++)
        {
            if (col == 1 || row == col || row == n)
            {
                cout << "*";
            }

            else

                cout << " ";
        }
        cout << endl;
    }
    return 0;
}
