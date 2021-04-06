/*
已知 $k$ 阶斐波那契数列的定义为

$$
f_0 = 0，f_1 = 0，\cdots，f_{k-2} = 0，f_{k-1} = 1;
\\
f_n = f_{n-1} + f_{n-2} + \cdots + f_{n-k}，n = k, k + 1, \cdots
$$

试编写求 $k$ 阶斐波那契数列的第 $m$ 项值的函数算法，$k$ 和 $m$ 均以值调用的形式在函数参数表中出现。
*/

#include <iostream>
#include <algorithm>
using namespace std;

int GetElem_Fibonacci(int k, int m) {
    int Fibonacci[m];
    for (int i = 0; i < k - 1; ++i) {
        Fibonacci[i] = 0;
        // cout << i << ": " << Fibonacci[i] << endl;
    }
    Fibonacci[k - 1] = 1;
    // cout << k - 1 << ": " << Fibonacci[k - 1] << endl;
    for (int i = k; i < m; ++i)
    {
        Fibonacci[i] = 0;
        for (int tmp = 1; tmp <= k; ++tmp) {
            Fibonacci[i] += Fibonacci[i - tmp];
            /*
            if (tmp == k) {
                cout << i << ": " << Fibonacci[i] << endl;
            }
            */
        }
    }
    return Fibonacci[m - 1];
}

int main() {
    int k, m;
    cin >> k >> m;
    if (k < 1 || m < 1) {
        cout << "ERROR" << endl;
        main();
    } else if (m < k) {
        cout << 0;
    } else if (m == k) {
        cout << 1;
    } else {
        cout << GetElem_Fibonacci(k, m);
    }
    return 0;
}