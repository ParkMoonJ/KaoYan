#include <iostream>
using namespace std;

#define MAXSIZE 100

struct Stack{
    ElemType data[MAXSIZE];
    int top;
} S;

void InitStack(Stack &S) {
    S.top = -1;
}

void ClearStack(Stack &S) {
    while (S.top > -1) {
        S.data[S.top] = NULL;
    }
}

bool StackEmpty(Stack S) {
    return !(S.top + 1);
}

int StackLength(Stack S) {
    return S.top + 1;
}

bool GetTop(Stack S, ElemType &e) {
    if (S.top == -1) {
        return false;
    } else {
        e = S.data[S.top];
    }
}

bool Push(Stack &S, ElemType e) {
    if (S.top == MAXSIZE - 1) {
        return false;
    } else {
        ++S.top;
        S.data[S.top] = e;
    }
    return true;
}

bool Pop(Stack &S, ElemType e) {
    if (S.top == -1) {
        return false;
    } else {
        e = S.data[S.top];
        --S.top;
    }
    return true;
}

bool StackTraverse(Stack S, visit()) {
    if (S.top == -1) {
        return false;
    } else {
        for (int tmp = 0; tmp <= S.top; tmp++) {
            visit(S.data[tmp]);
        }
    }
}

int main() {
    return 0;
}