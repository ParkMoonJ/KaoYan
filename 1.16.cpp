/*
1.16 试写一算法，自大至小依次输出顺序读入的三个整数 X,Y 和 Z 的值。
*/

#include <iostream>
#include <algorithm>
using namespace std;

/*
#define MAXSIZE 3

bool compare(int a, int b) {
    return a > b;
}

int main() {
    int x[MAXSIZE];
    for (int i = 0; i < MAXSIZE; ++ i) {
        cin >> x[i];
    }
    sort(x, x + MAXSIZE, compare);
    for (int i = 0; i < MAXSIZE; ++ i) {
        cout << x[i] << ' ';
    }
    return 0;
}
*/

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