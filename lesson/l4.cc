// 第4课：for 循环
#include <iostream>
using namespace std;

int main() {
    // 打印 1 到 10
    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
    }
    cout << endl;

    // 计算 1 加到 100 的和
    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        sum = sum + i;
    }
    cout << "1加到100的和是：" << sum << endl;

    return 0;
}
