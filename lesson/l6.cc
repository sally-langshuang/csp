// 第6课：数组
#include <iostream>
using namespace std;

int main() {
    int scores[5];   // 定义一个能放5个整数的数组

    cout << "请输入5个同学的分数：" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> scores[i];    // 数组下标从0开始
    }

    int sum = 0;
    int maxScore = scores[0];
    for (int i = 0; i < 5; i++) {
        sum = sum + scores[i];
        if (scores[i] > maxScore) {
            maxScore = scores[i];
        }
    }

    cout << "总分是：" << sum << endl;
    cout << "平均分是：" << sum / 5 << endl;
    cout << "最高分是：" << maxScore << endl;

    return 0;
}
