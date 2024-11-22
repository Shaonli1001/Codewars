using namespace std;
string reverse_words(string str)
{
  string rev, res;
  str += ' ';
  for(char ch : str)
    {
     if(ch!= ' ')
       {
        rev+=ch;
     }
    else
      {
        reverse(rev.begin(), rev.end());
          res+=rev;
          res +=' ';
          rev.clear();
      }
  }
  res = res.erase(res.size()-1);
  return res;
}
