#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for (int i = 2; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int n;
    cout << "enter the value of n:";
    cin >> n;

    int result = factorial(n);
    cout << result << endl;
}