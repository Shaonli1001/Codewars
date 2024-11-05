#include <string>
#include <vector>
using namespace std;
vector<string> solution(const string &s)
{
   vector<string> result;
   int length = s.length();
    for(int i = 0;i<length;i+=2)
      {
       if(i+1<length)
         {
        result.push_back(s.substr(i, 2));
        }
      else
        {
          result.push_back(s.substr(i, 1) + "_");
      }
}
    return result; 
}
