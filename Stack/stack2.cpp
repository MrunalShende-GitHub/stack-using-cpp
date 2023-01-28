#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> s;
    int n;
   cout<<"how many elements you want in the stack:";
   cin>>n;
   int x;
for(int i=0;i<n;i++)
{
    cin>>x;
    s.push(x);
}
    cout << s.size() << endl;
    cout << s.top() << endl;
    s.pop();
    cout << s.size() << endl;
    cout << s.top() << endl;

    return 0;
}