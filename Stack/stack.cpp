#include <iostream>
using namespace std;

const int MAX = 5;
int st[MAX], top = -1;
void push(int val, int &top, int st[]);
int pop(int &top, int st[]);
int peek(int top, int st[]);
void display(int top, int st[]);
int main()
{
    int val, option;
    do
    {
        cout << "Main menu" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Display" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter option: ";
        cin >> option;
        switch (option)
        {
        case 1:
            cout << "Enter value to push: ";
            cin >> val;
            push(val, top, st);
            break;
        case 2:
            val = pop(top, st);
            if (val != -1)
            {
                cout << "Popped value is: " << val << endl;
            }
            break;
        case 3:
            val = peek(top, st);
            if (val != -1)
            {
                cout << "Top value is: " << val << endl;
            }
            break;
        case 4:
            display(top, st);
            break;
        case 5:
            cout << "Exiting" << endl;
            break;
        default:
            cout << "Invalid option" << endl;
        }
    } while (option != 5);
}
void push(int val, int &top, int st[])
{
    if (top == MAX - 1)
    {
        cout << "Stack is full" << endl;
    }
    else
    {
        top++;
        st[top] = val;
    }
}

int pop(int &top, int st[])
{
    if (top == -1)
    {
        cout << "Stack is empty" << endl;
        return -1;
    }
    else
    {
        int val = st[top];
        top--;
        return val;
    }
}

int peek(int top, int st[])
{
    if (top == -1)
    {
        cout << "Stack is empty" << endl;
        return -1;
    }
    else
    {
        return st[top];
    }
}

void display(int top, int st[])
{
    if (top == -1)
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        for (int i = top; i >= 0; i--)
        {
            cout << "   " << st[i] << endl;
        }
    }
}