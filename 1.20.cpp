// 试编写算法求一元多项式 $P_n(x) = \sum\limits_{i=0}^{n}a_ix^i$ 的值 $P_n(x_0)$，并确定算法中每一语句的执行次数和整个算法的时间复杂度。注意选择你认为较好的输入和输出方法。本题的输入为 $a_i (i = 0, 1, \cdots, n)$， $x_0$ 和 $n$，输出为 $P_n(x_0)$。

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, x, p = 0, tmp = 1;
    cin >> n >> x;
    int a[n];
    if (n < 0) {
        cout << "ERROR" << endl;
        main();
    } // O(1)
    for (int i = 0; i <= n; ++i) {
        cin >> a[i];
        p += a[i] * tmp;
        tmp *= x;
    } // O(n)
    cout << p;
    return 0;
}