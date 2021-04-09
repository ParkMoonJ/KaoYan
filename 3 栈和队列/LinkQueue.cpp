#include <iostream>
using namespace std;

struct LinkNode {
    ElemType data;
    struct LinkNode *next;
}; // 链式队列节点

struct LinkQueue {
    LinkNode *front, *rear; // 链式队列指针
}; // 链式队列
