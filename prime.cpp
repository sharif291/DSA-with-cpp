#include <iostream>
using namespace std;
int main()
{
    cout << "enter n.";
    int n;

    cin >> n;
    // cout << "n is " << n << endl;
    bool flag = true;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = false;
        }
    }
    if (flag)
    {
        cout << "Number " << n << " is prime";
    }
    else
    {
        cout << "Number " << n << " is not prime";
    }
    return 0;
}