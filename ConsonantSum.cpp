///a lowercase string that has alphabetic characters only and no spaces, return the highest value of consonant substrings

#include <string>
using namespace std;
int solve(const string &s)
{
    int sum = 0;
    int b = 0;
    int l = s.length();
    for (int i = 0; i < l; i++)
    {
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
        {
            sum += (s[i] - 'a' + 1);
        }
        else
        {
            if (sum > b)
            {
                b = sum;
            }
            sum = 0;
        }
    }
    if (sum > b)
    {
        b = sum;
    }
    return b;
}