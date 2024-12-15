#include <cmath>
using namespace std;

class StepInPrimes
{
public:
  static bool isPrime(long long a)
    {
    int c=0;
      for (long long i = 1; i <= sqrt(a); i++)
      {
        if(a%i==0)
          c++;
      }
    if(c>1)
      return false;
    else
      return true;
  }
    // if there are no such primes return {0, 0}
    static pair <long long, long long> step(int g, long long m, long long n)
  {
    pair <long long, long long> a;
    for(long long i = m;i<n-g;i++)
      {
         if(isPrime(i) && isPrime(i+g))
           {
              a.first=i;
              a.second=i+g;
              return a; 
         }
    }

    return {0,0};
  }
};
