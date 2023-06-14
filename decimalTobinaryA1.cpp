#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    int digit;
    float ans = 0;
    int i = 0;
    cin >> n;
    while (n != 0)
    {
        digit = n % 2;
        n = n / 2;
        ans = pow(10, i) * digit + ans;
        i++;
    }
    cout << "ans:" << ans << endl;
    return 0;
}