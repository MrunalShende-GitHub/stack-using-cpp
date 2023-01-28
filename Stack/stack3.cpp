#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> s;
    int n;
    cout << "how many elements you want in the stack:";
    cin >> n;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        s.push(x);
    }
    cout<<endl;
    while(s.empty()==false)
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}