#include <iostream>
#include <stack>
using namespace std;
bool matching(char a, char b)
{
    return ((a == '(' && b == ')') || (a == '{' && b == '}') || (a == '[' && b == ']'));
}
bool balanced(string str)
{
    stack<int> s;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[')
            s.push(str[i]);

        else
        {
            if (s.empty() == true)
            {
                return false;
            }
            else if (matching(s.top(), str[i]) == false)
            {
                return false;
            }
            else
                s.pop();
        }
    }
    return s.empty();
}
int main()
{
    string s;
   cout<<"enter the string:";
   cin>>s;
    bool a = balanced(s);
    if (a == true)
    {
        cout << "balanced";
    }
    else
    {
        cout << "not balanced";
    }
    return 0;
}
