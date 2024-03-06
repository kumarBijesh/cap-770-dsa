#include <iostream>
#include <cstring>
#define MAX 20
using namespace std;

struct stack
{
    char stk[MAX];
    int top;
}s;

void push(char item)
{
    if (s.top == (MAX - 1))
        cout << "Stack is Full\n";
    else
    {
        s.top = s.top + 1; // Push the char and increment top
        s.stk[s.top] = item;
    }
}

void pop()
{
    if (s.top == -1)
    {
    cout << "Stack is Empty\n";
    }
    else
    {
        s.top = s.top - 1; // Pop the char and decrement top
    }
}

int main()
{
    char exp[MAX];
    int i = 0;
    s.top = -1;
    cout << "\nINPUT THE EXPRESSION : ";
    cin >> exp;
    for (i = 0; i < strlen(exp); i++)
    {
        if (exp[i] == '(' || exp[i] == '[' || exp[i] == '{')
        {
            push(exp[i]); // Push the open bracket
            continue;
        }
        else if (exp[i] == ')' || exp[i] == ']' || exp[i] == '}') // If a closed bracket is encountered
        {
            if (exp[i] == ')')
            {
                if (s.stk[s.top] == '(')
                {
                    pop(); // Pop the stack until closed bracket is found
                }
                else
                {
                    cout << "\nUNBALANCED EXPRESSION\n";
                    break;
                }
            }
            if (exp[i] == ']')
            {
                if (s.stk[s.top] == '[')
                {
                    pop(); // Pop the stack until closed bracket is found
                }
                else
                {
                    cout << "\nUNBALANCED EXPRESSION\n";
                    break;
                }
            }
            if (exp[i] == '}')
            {
                if (s.stk[s.top] == '{')
                {
                    pop(); // Pop the stack until closed bracket is found
                }
                else
                {
                    cout << "\nUNBALANCED EXPRESSION\n";
                    break;
                }
            }
        }
    }
    if (s.top == -1)
    {
        cout << "\nBALANCED EXPRESSION\n"; // Finally if the stack is empty, display that the expression is balanced
    }
    else
    {
        cout<<"\nUNBLANCED EXPRESSION\n";
    }
    return 0;
}
