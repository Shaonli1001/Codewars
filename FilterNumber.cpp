#include <string>
using namespace  std;

long long filter_string(const string &value)
{
    long n = 0;
    int l = value.length();
    for(int i =0; i<l;i++)
      {
        if(isdigit(value[i]))
          {
            n = n*10 + (value[i]- '0');
          }
      }
    return n;
}
