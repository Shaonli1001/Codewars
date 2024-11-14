#include <cstdint>
#include <string>
using namespace std;

string decToBinary(uint64_t);

string add_binary(uint64_t a, uint64_t b) 
{
  
  uint64_t result = a +b;
  
    return decToBinary(result);
}

string decToBinary(uint64_t n)
  {
    string binary;
    while (n > 0) 
    {
      if(n%2 == 0)
        {binary = '0' + binary;}
      else
        {binary = '1' + binary;}
        n = n / 2;
  }
   if(binary.empty())
     {return "0";}
  else
    {return binary;}
  }
