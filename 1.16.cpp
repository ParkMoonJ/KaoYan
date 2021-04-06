// 1.16 试写一算法，自大至小依次输出顺序读入的三个整数 X,Y 和 Z 的值。

#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int tmp;
    tmp = a;
    a = b;
    b = tmp; 
}

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    if (x < y) swap(x, y);
    if (y < z) swap(y, z);
    if (x < y) swap(x, y);
    cout << x << ' ' << y << ' ' << z << endl;
    return 0;
}