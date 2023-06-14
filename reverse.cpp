#include <iostream>
using namespace std;

class Solution
{
public:
    int reverse(int x)
    {
        int ans = 0;
        int digit;
        while (x != 0)
        {
            digit = x % 10;
            if (ans < INT_MIN/10 || ans > INT_MAX/10)
            {
                return 0;
            }
            ans = ans * 10 + digit;
            x = x / 10;
        }
        return ans;
    }
};

int main()
{
    Solution a;
    cout << a.reverse(12345);
    return 0;
}