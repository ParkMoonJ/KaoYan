#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
#define MAXSIZE 100

struct Stack{
    char data[MAXSIZE];
    int top;
} S;

char a[MAXSIZE];

void InitStack(Stack &S) {
    char data[MAXSIZE] = {};
    int top = -1;
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

bool Bracket(char *a, int i) {
    char x;

    InitStack(S);
    for (int j = 0; j == i; j++)
    {
        if (a[j] == '(' || a[j] == '[' || a[j] == '{') {
            Push(S, a[j]);
        } else if (a[j] == ']') {
            Pop(S, x);
            if (x != '[') {
                return false;
            }
        } else if (a[j] == ')') {
            Pop(S, x);
            if (x != '(') {
                return false;
            }
        } else if (a[j] == '}') {
            Pop(S, x);
            if (x != '{') {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int i = 0;
    while ((a[i] = cin.get()) != '\n') {
        ++i;
    }
    cout << Bracket(a, i - 1);
    return 0;
}