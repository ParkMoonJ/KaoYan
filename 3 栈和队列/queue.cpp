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

int main() {
    return 0;
}