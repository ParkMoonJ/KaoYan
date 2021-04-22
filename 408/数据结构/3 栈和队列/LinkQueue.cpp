#include <iostream>
using namespace std;

typedef struct LinkNode {
    ElemType data;
    struct LinkNode *next;
} L; // 链式队列节点

struct LinkQueue {
    LinkNode *front, *rear; // 链式队列指针
}; // 链式队列

void InitQueue(LinkQueue &Q) {
    Q.front = Q.rear = (LinkNode *)malloc(sizeof(LinkNode)); // 建立头节点
    if(!Q.front) {
        exit(0);
    } // 存储分配失败
    Q.front->next = NULL; // 初始为空
} // 构造一个空队列 Q

void DestroyQueue(LinkQueue &Q) {
    while (Q.front) {
        Q.rear = Q.front->next;
        free(Q.front);
        Q.front = Q.rear;
    }
} // 销毁队列 Q，Q 不再存在



bool QueueEmpty(LinkQueue Q) {
    return Q.front == Q.rear;
}

int QueueLength(LinkQueue Q) {
    int i = 0;
    while (Q.front != Q.rear) {
        Q.front = Q.front->next;
        i++;
    }
    return i;
}

bool GetHead(LinkQueue Q, ElemType &e) {
    if (Q.front == Q.rear) {
        return false;
    } else {
        e = Q.front->next;
        return true;
    }
}

void EnQueue(LinkQueue &Q, ElemType e) {
    LinkNode *p = (LinkNode *)malloc(sizeof(LinkNode));
    if (!p) {
        exit(0); // 存储分配失败
    }
    p->data = e;
    p->next = NULL;
    Q.rear->next = p;
    Q.rear = p;
} // 插入元素 e 为 Q 的新的队尾元素

bool DeQueue(LinkQueue &Q, ElemType &e) {
    if (Q.front == Q.rear) {
        return false;
    } else {
        LinkNode *p = Q.front->next;
        e = p->data;
        Q.front->next = p->next;
        if (Q.rear == p) {
            Q.rear = Q.front;
        } // 当队列最后一个元素被删后，队列尾指针也丢失了，因此需对队尾指针重新赋值（指向头节点）
        free(p);
        return true;
    }
} // 若队列不空，则删除 Q 的队头元素，用 e 返回其值