// 试编写算法，计算 $i! \cdot 2^i (i = 0, 1, \cdots, n - 1)$ 的值并分别存入数组 `a[arrsize]` 的各个分量中。假设计算机允许的整数最大值为 `MAXINT`，则当 $n > arrsize$ 或对某个 $k (0 \le k \le n - 1)$ 使 $k! \cdot 2^k > MAXINT$ 时，应按出错处理。注意选择你认为较好的出错处理方法。

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

#define ARRSIZE 20
#define MAXINT 1000000000

int a[ARRSIZE];

int main() {
    a[0] = 1;
    cout << a[0];
    for (int i = 1; a[i - 1] <= MAXINT / 2 / i; ++i) {
        a[i] = a[i - 1] * i * 2;
        cout << a[i] << endl;
    }
    cout << "OVERFLOW";
    return 0;
}