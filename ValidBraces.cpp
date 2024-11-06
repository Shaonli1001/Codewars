#include <string>
#include <stack>
#include <map>
using namespace std;

bool valid_braces(const string &braces) 
{
  stack<char> stack;
  map<char,char> mb =
    {
      {')', '('},
      {']', '['},
      {'}', '{'}
    };
  for(char ch : braces)
    {
      if(ch == '(' ||ch == '{' ||ch == '[')
        {stack.push(ch);}
    else
      {
        if(stack.empty() || stack.top() !=mb[ch])
          {
           return false;
          }
      stack.pop();
    }
  }if(stack.empty())
    {
      return true;
  }
   else
   { return false;}
}
