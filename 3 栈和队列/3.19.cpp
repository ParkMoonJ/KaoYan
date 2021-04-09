#include <iostream>
using namespace std;
#define MAXSIZE 100

struct Stack{
    char data[MAXSIZE];
    int top;
} S;
char a[MAXSIZE];

void InitStack(Stack &S) {
    S.top = -1;
}

bool Push(Stack &S, char x) {
    if (S.top == MAXSIZE - 1) {
        return false;
    } else {
        ++S.top;
        S.data[S.top] = x;
    }
    return true;
}

bool Pop(Stack &S, char x) {
    if (S.top == -1) {
        return false;
    } else {
        x = S.data[S.top];
        --S.top;
    }
    return true;
}

bool Bracket(char *a) {
    char x;

    InitStack(S);
    for (int i = 0; a[i]; i++)
    {
        if (a[i] == '(' || a[i] == '[' || a[i] == '{') {
            Push(S, a[i]);
            cout << i << ':' << a[i] << endl;
        }
        else if (a[i] == ']')
        {
            Pop(S, x);
            if (x != '[') {
                return false;
            }
        }
        else if (a[i] == ')')
        {
            Pop(S, x);
            if (x != '(') {
                return false;
            }
        }
        else if (a[i] == '}')
        {
            Pop(S, x);
            if (x != '{') {
                return false;
            }
        }
    }
    return true;
}

int main() {
    cin.getline(a, MAXSIZE);
    cout << Bracket(a);
    return 0;
}