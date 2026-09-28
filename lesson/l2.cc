// 第2课：变量 和 输入输出
#include <iostream>
using namespace std;

int main() {
    int age;           // 定义一个整数变量，用来存放年龄
    cout << "请输入你的年龄：" << endl;
    cin >> age;         // 从键盘读入一个数字，存进 age

    int nextYearAge = age + 1;   // 变量可以参与计算
    cout << "你今年 " << age << " 岁" << endl;
    cout << "明年你就 " << nextYearAge << " 岁啦！" << endl;

    return 0;
}
