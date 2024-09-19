#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "enter the value of a:";
    cin >> a;
    switch (a)
    {
    case 1:
        cout << "science";
        break;
    case 2:
        cout << "hindi";
        break;

    case 3:
        cout << "english";
        break;

    case 4:
        cout << "computer";
        break;
    case 5:
        cout << "sanskrit";
        break;
    default:
        cout << "write a appropriate number";
    }
}