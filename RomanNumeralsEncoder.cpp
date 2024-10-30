#include <string>
#include <map>
using namespace std;

string solution(int number)
{
  map<int,string,greater<int>> romanSymbol = 
  {
     {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
      {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
      {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"},
      {1, "I"}
  };
  
  string result;
  
  for(auto& [value,symbol] : romanSymbol)
  {
    while(number>=value)
    {
      result+=symbol;
      number-=value;
    }
  }
  
  return result;
}
