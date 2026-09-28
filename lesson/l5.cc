// 第5课：while 循环
#include <iostream>
using namespace std;

int main() {
    // while 循环：数不清次数的时候用它
    int n;
    cout << "请输入一个正整数：" << endl;
    cin >> n;

    int count = 0;
    while (n > 0) {
        n = n / 10;    // 每次去掉最后一位
        count++;
    }
    cout << "这个数一共有 " << count << " 位" << endl;

    // 倒计时
    int t = 5;
    while (t > 0) {
        cout << t << "..." << endl;
        t--;
    }
    cout << "发射！" << endl;

    return 0;
}
