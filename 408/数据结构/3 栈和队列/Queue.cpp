#include <iostream>
using namespace std;
#define MAXSIZE 100

struct Queue {
    ElemType data[MAXSIZE];
    int front, rear;
} Q;

void InitQueue(Queue &Q) {
    Q.front = 0;
    Q.rear = 0;
}

void ClearQueue(Queue &Q) {
    while (Q.rear > Q.front) {
        Q.data[Q.rear] = NULL;
    }
}

bool QueueEmpty(Queue Q) {
    return Q.rear == Q.front;
}

int QueueLength(Queue Q) {
    return Q.rear;
}

bool GetHead(Queue Q, ElemType &e) {
    if (Q.rear == Q.front) {
        return false;
    } else {
        e = Q.data[Q.front];
        Q.front++;
        return true;
    }
}

bool EnQueue(Queue &Q, ElemType e) {
    if (Q.rear >= MAXSIZE - 1) {
        return false;
    } else {
        Q.data[Q.rear] = e;
        ++Q.rear;
        return true;
    }
}

bool DeQueue(Queue &Q, ElemType &e) {
    if (Q.rear == Q.front) {
        return false;
    } else {
        e = Q.data[Q.front];
        ++Q.front;
        return true;
    }
}

bool QueueTraverse(Queue Q, visit()) {
    if (Q.rear == Q.front) {
        return false;
    } else {
        for (int i = Q.front; i < Q.rear; i++) {
            visit(Q.data[i]);
        }
    }
}

int main() {
    return 0;
}