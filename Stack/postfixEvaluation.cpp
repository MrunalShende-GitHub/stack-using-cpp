#include <iostream>
#include <stack>
using namespace std;

int postfixEvaluation(string postfix)
{
    stack<int> st;
    for (int i = 0; i < postfix.length(); i++)
    {
        if (isdigit(postfix[i]))
        {
            int num = 0;
            while (i < postfix.length() && isdigit(postfix[i]))
            {
                num = num * 10 + (postfix[i] - '0');
                i++;
            }
            i--;
            st.push(num);
        }
        else
        {
            if (st.empty())
            {
                cout << "Invalid expression" << endl;
                return 0;
            }
            int op2 = st.top();
            st.pop();
            if (st.empty())
            {
                cout << "Invalid expression" << endl;
                return 0;
            }
            int op1 = st.top();
            st.pop();

            switch (postfix[i])
            {
            case '+':
                st.push(op1 + op2);
                break;
            case '-':
                st.push(op1 - op2);
                break;
            case '*':
                st.push(op1 * op2);
                break;
            case '/':
                if (op2 == 0)
                {
                    cout << "Can't divide by zero" << endl;
                    return 0;
                }
                st.push(op1 / op2);
                break;
            default:
                cout << "Invalid operator" << endl;
                return 0;
            }
        }
    }
    if (st.size() != 1)
    {
        cout << "Invalid expression" << endl;
        return 0;
    }
    return st.top();
}

int main()
{
    int n;
    string postfix;
    cout<<"Enter the postfix Expression for Evaluation:";
    cin>>postfix;
    n = postfixEvaluation(postfix);
    cout<<"result: "<< n << endl;
    return 0;
}