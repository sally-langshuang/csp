// 第3课：if 判断语句
#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "请输入你的考试分数：" << endl;
    cin >> score;

    if (score >= 60) {
        cout << "及格啦，真棒！" << endl;
    } else {
        cout << "还差一点，继续加油！" << endl;
    }

    // if 可以有多个分支
    if (score >= 90) {
        cout << "评级：优秀" << endl;
    } else if (score >= 60) {
        cout << "评级：合格" << endl;
    } else {
        cout << "评级：待努力" << endl;
    }

    return 0;
}
