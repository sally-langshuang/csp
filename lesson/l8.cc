// 第8课：嵌套循环（循环里面套循环）
#include <iostream>
using namespace std;

int main() {
    // 九九乘法表
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << "x" << i << "=" << i * j << "\t";
        }
        cout << endl;   // 每打完一行，换行
    }
    cout << endl;

    // 打印一个三角形
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
