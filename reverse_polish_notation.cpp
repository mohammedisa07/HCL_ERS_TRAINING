#include <iostream>
#include <stack>
#include <string>
using namespace std;

int evaluateRPN(string tokens[], int n)
{
    stack<int> st;

    for(int i = 0; i < n; i++)
    {
        string t = tokens[i];

        if(t == "+" || t == "-" || t == "*" || t == "/")
        {
            int b = st.top();
            st.pop();

            int a = st.top();
            st.pop();

            int result;

            if(t == "+")
                result = a + b;
            else if(t == "-")
                result = a - b;
            else if(t == "*")
                result = a * b;
            else
                result = a / b;

            st.push(result);
        }
        else
        {
            st.push(stoi(t));
        }
    }

    return st.top();
}

int main()
{
    int n;

    cout<<"Enter number of tokens: ";
    cin>>n;

    string tokens[n];

    cout<<"Enter postfix expression tokens:\n";

    for(int i=0;i<n;i++)
        cin>>tokens[i];

    int result = evaluateRPN(tokens,n);

    cout<<"\nResult = "<<result;
}