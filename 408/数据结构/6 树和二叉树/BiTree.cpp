#include <iostream>
#include <vector>
using namespace std;

struct ThreadNode {
    int data;
    ThreadNode *lchild, *rchild;
    int ltag, rtag;
};

void ThreadNode::