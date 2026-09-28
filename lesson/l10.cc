// 第10课：综合练习——把前面学的知识点都用起来
// 数组 + 循环 + 函数：给数字排序
#include <iostream>
using namespace std;

// 打印数组的函数
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// 冒泡排序：每一轮把最大的数字往后“冒泡”
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // 交换 arr[j] 和 arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    const int n = 6;
    int nums[n];

    cout << "请输入" << n << "个整数：" << endl;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "排序前：";
    printArray(nums, n);

    bubbleSort(nums, n);

    cout << "排序后：";
    printArray(nums, n);

    return 0;
}
