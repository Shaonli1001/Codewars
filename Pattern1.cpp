#include<string>
using namespace std;
class Accumul
{
public:
    static string accum(const string &s)
  {
    string result;
    for(int i =0;i<s.length(); i++)
      {
        result+=toupper(s[i]);
      for(int j =2;j<=i+1;j++ )
        {
            result += tolower(s[i]);
        }
      if(i!=s.length()-1) 
        {result += '-';}
    }
    return result;
  }
};
