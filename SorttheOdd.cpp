#include <vector>
#include <algorithm>
using namespace std;

class Kata
{
public:
    vector<int> sortArray(vector<int> array)
    {
        vector<int> odd;
        int length = array.size();
        for (int i = 0; i < length; i++)
        {
            if (array[i] % 2 != 0)
            {
                odd.push_back(array[i]);
            }
        }
        sort(odd.begin(), odd.end());
        reverse(odd.begin(), odd.end());
        for (int i = 0; i < length; i++)
        {
            if (array[i] % 2 != 0)
            {
                array[i] = odd.back();
                odd.pop_back();
            }
        }

        return array;
    }
};