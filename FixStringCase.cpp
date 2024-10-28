#include <string>
using namespace std;

string solve(const string& str)
{
  int lc= 0;
  int uc= 0;
  string result;
  int l = str.length();
  for(int i = 0;i<l;i++)
    {
      int c = (int)str[i];
     if(c>=65 && c<=90)
       {
        uc++;
      }
      else if(c>=97 && c<=122)
        {
         lc++;
      }
    }
  result = str;
  if(uc>lc)
    {
      transform(result.begin(), result.end(), result.begin(), ::toupper);
    }
  else
    {
      transform(result.begin(), result.end(), result.begin(), ::tolower);
    }
  
  return result;
}
