#include <math.h>
#include <utility>
using namespace std;
int comparePowers(pair<long, long> n1, pair<long, long> n2)
{
    double result1 = n1.second * log(n1.first);
    double result2 = n2.second * log(n2.first);
     
    if(result1 > result2)
      { return -1;}
    else if (result1 == result2)
      { return 0;}
    else { return 1; }
}
