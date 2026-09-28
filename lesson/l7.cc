// 第7课：函数
#include <iostream>
using namespace std;

// 自己写一个函数：判断一个数是不是偶数
bool isEven(int x) {
    if (x % 2 == 0) {
        return true;
    } else {
        return false;
    }
}

// 自己写一个函数：求两个数中较大的那个
int getMax(int a, int b) {
    if (a > b) {
        return a;
    }
    return b;
}

int main() {
    int num;
    cout << "请输入一个整数：" << endl;
    cin >> num;

    if (isEven(num)) {
        cout << num << " 是偶数" << endl;
    } else {
        cout << num << " 是奇数" << endl;
    }

    int a = 7, b = 12;
    cout << a << " 和 " << b << " 中较大的是 " << getMax(a, b) << endl;

    return 0;
}
