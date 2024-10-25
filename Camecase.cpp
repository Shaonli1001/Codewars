#include <string>
#include <iostream>
using namespace std;

string to_camel_case(string text)
{
    int l = text.length();
    for (int i = 0; i < l; i++)
    {
        if (text[i] == '-' || text[i] == '_')
        {
            text[i + 1] = toupper(text[i + 1]);
            text.erase(text.begin() + i);
        }
    }
    return text;
}