// 第9课：字符串 string
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    cout << "请输入你的名字：" << endl;
    cin >> name;    // 输入的字符串里不能有空格

    cout << "你好，" << name << "！" << endl;
    cout << "你的名字一共有 " << name.length() << " 个字符" << endl;

    // 字符串也可以用下标访问每一个字符
    cout << "第一个字符是：" << name[0] << endl;

    // 字符串拼接
    string greeting = "尊敬的 " + name + "，欢迎学习编程！";
    cout << greeting << endl;

    return 0;
}
