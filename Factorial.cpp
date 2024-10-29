using namespace std;
long long factorial(int n)
{ 
  long result = 1;
  for(int i = 1;i<= n;i++)
    {
      result = result*(long)i;
    }
  return result; 
}
