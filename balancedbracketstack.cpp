#include <iostream>
#include <stack>
using namespace std;

bool checkBalanced(string str)
{
    stack<char> s;

    for(int i=0;i<str.length();i++)
    {
        char ch = str[i];

        // opening brackets
        if(ch=='(' || ch=='{' || ch=='[')
        {
            s.push(ch);
        }

        // closing brackets
        else if(ch==')' || ch=='}' || ch==']')
        {
            if(s.empty())
                return false;

            char top = s.top();
            s.pop();

            if((ch==')' && top!='(') ||
               (ch=='}' && top!='{') ||
               (ch==']' && top!='['))
            {
                return false;
            }
        }
    }

    return s.empty();
}

int main()
{
    string str;

    cout<<"Enter bracket string: ";
    cin>>str;

    if(checkBalanced(str))
        cout<<"Balanced Brackets";
    else
        cout<<"Not Balanced";
}