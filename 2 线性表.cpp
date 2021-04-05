#include <iostream>
#include <stdio.h>
using namespace std;

// 线性表

// ---线性表的静态分配顺序存储结构---
#define MAXSIZE 50 // 定义线性表最大长度
typedef struct {
    int data[MAXSIZE]; // 顺序表的元素
    int length; // 顺序表当前长度
} SqList;

// ---线性表的动态分配顺序存储结构钢---
#define INITSIZE 100 // 线性表存储空间的初始分配量
#define LISTINCREMENT 10 // 线性表存储空间的分配增量
typedef struct 线性表 {
    int *data1; // 存储空间基址
    int MAXSIZE1, length1;
} SqList1;

int main() {
    return 0;
}