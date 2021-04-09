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

bool StackEmpty(Stack S) {
    if (S.top == -1) {
        return true;
    } else {
        return false;
    }
}

bool BracketsCheck(char *str) {
    Stack S;
    char e;
    InitStack(S);
    int i = 0;
    while (str[i] != '\0') {
        switch(str[i]) {
            case '(':
                Push(S, '(');
                break;
            case '[':
                Push(S, '[');
                break;
            case '{':
                Push(S, '{');
                break;
            case ')':
                Pop(S, e);
                if (e != '(') {
                    return false;
                }
                break;
            case ']':
                Pop(S, e);
                if (e != '[') {
                    return false;
                }
                break;
            case '}':
                Pop(S, e);
                if (e != '{') {
                    return false;
                }
                break;
        }
        i++;
    }
    if(!StackEmpty(S)) {
        return false;
    } else {
        return true;
    }
}

int main() {
    cin.getline(a, MAXSIZE);
    cout << BracketsCheck(a);
    return 0;
}