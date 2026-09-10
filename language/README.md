# 数据类型整理

## 1. 整数类型

| 类型 | 字节数 | 取值范围 | 说明 |
|---|---|---|---|
| `int` | 4 字节 | 约 -2^31 ~ 2^31-1（约 ±21亿） | 最常用整数类型 |
| `long long` | 8 字节 | 约 -2^63 ~ 2^63-1（约 ±922京） | **考试高频**，防溢出必用 |
| `short` | 2 字节 | -32768 ~ 32767 | 较少用 |
| `unsigned int` | 4 字节 | 0 ~ 2^32-1 | 无符号，只表示非负数 |
| `unsigned long long` | 8 字节 | 0 ~ 2^64-1 | 无符号大整数 |

```cpp
int a = 100;
long long b = 10000000000LL;   // 超过 int 范围要加 LL 后缀
unsigned int c = 4000000000U;
```

### ⚠️ 高频丢分点：`int` 相乘溢出

```cpp
int a = 100000, b = 100000;
int c = a * b;                      // ❌ 溢出！10^10 超出 int 范围
long long c = (long long)a * b;     // ✅ 先强转再相乘
```

---

## 2. 浮点数类型

| 类型 | 字节数 | 精度 |
|---|---|---|
| `float` | 4 字节 | 约 6~7 位有效数字 |
| `double` | 8 字节 | 约 15~16 位有效数字，**考试主用** |
| `long double` | 8/16 字节（平台相关） | 更高精度，较少用 |

```cpp
double d = 3.14159265358979;
```

---

## 3. 字符类型

```cpp
char c = 'A';   // 1 字节，本质是小整数（ASCII码）
```

常见用法：
- 读取单个字符（地图符号 `'#'`、`'.'` 等）
- 字符与整数互转

```cpp
char c = 'a';
int diff = c - 'a';   // 字符转索引的常见套路
```

---

## 4. 布尔类型

```cpp
bool flag = true;               // 1 字节，true(1) / false(0)
bool visited[100005] = {false}; // 常用于标记数组（DFS/BFS 状态记录）
```

---

## 5. 字符串类型

| 类型 | 说明 |
|---|---|
| `char[]` / `char*` | C 风格字符串，考试中较少直接用 |
| `std::string` | **主流用法**，需 `#include <string>` |

```cpp
string s;
cin >> s;
cout << s.length() << endl;
```

---

## 6. 数组

```cpp
int arr[100005];         // 一维数组：数列、邻接表等
int grid[1005][1005];    // 二维数组：矩阵、迷宫
```

### ⚠️ 高频丢分点：数组越界

数据范围如 $n \le 10^5$，数组要开够（建议多开一点保险，如 `n+5`），否则 RE（Runtime Error）。

---

## 7. STL 容器类型（CSP-S 更常考）

| 容器 | 用途 |
|---|---|
| `vector<int>` | 动态数组 |
| `queue<int>` | 队列（BFS 常用） |
| `stack<int>` | 栈（DFS / 表达式求值） |
| `priority_queue<int>` | 优先队列/堆（Dijkstra、贪心，默认大顶堆） |
| `map<K,V>` / `set<T>` | 有序映射 / 集合 |
| `pair<A,B>` | 二元组，常配合 `vector<pair<int,int>>` 存边 |

```cpp
#include <vector>
#include <queue>
#include <map>

vector<int> v = {1, 2, 3};
queue<int> q;
priority_queue<int> pq;
map<string, int> mp;
pair<int, int> p = {1, 2};
```

---

## 8. 引用 / 指针（CSP-S 涉及）

```cpp
int& r = a;    // 引用，函数传参常用
int* p = &a;   // 指针，链表节点、动态数组常用（CSP中更常用静态数组模拟）
```

---

## 9. 结构体（CSP-S 图论题常见）

```cpp
struct Edge {
    int to, weight;
};

vector<Edge> graph[100005];   // 邻接表
```

---

## CSP-J / CSP-S 范围对比

| 阶段 | 侧重内容 |
|---|---|
| **CSP-J（入门级）** | `int` / `long long` / `double` / `char` / `bool` / `string` / 一维二维数组 |
| **CSP-S（提高级）** | 在 J 组基础上，加上 STL 容器（`vector`/`queue`/`priority_queue`/`map`/`set`/`pair`）、`struct`、指针基础（链表/图论邻接表） |

---

## 总结口诀

> 整数类（`int`/`long long`，重点防溢出）→ 浮点类（`double`）→ `char`/`bool` → `string`/数组（一维二维）→ 结构体 `struct` → STL 容器（`vector`/`queue`/`priority_queue`/`map`/`set`/`pair`）

# 取地址 &
```
&变量
```
# 解引用 *
```
*指针变量
```

# 指针
类型声明 
```类型名* point = &var;```

```
int a = 10;
int* p = &a;
*p = 20;
```
p是存放a的地址的变量

# 引用
类型声明 
```类型名& ref = var;```
```
int a = 10;
int& r = a;
r = 20;
```
r是a的别名

# 函数
```
返回类型 函数名(参数列表) {
    // 函数体
    return 返回值;   // 如果返回类型是 void，可以省略 return，或写 return;
}
```
```
int add(int a, int b) {
    return a + b;
}
```
```
// 声明（只有函数签名，没有函数体，末尾加分号）
int add(int a, int b);

int main() {
    int r = add(3, 4);   // 这里只需要"声明"就能通过编译，链接时才需要真正的定义
    return 0;
}

// 定义（真正的实现，写在后面也行）
int add(int a, int b) {
    return a + b;
}
```
### 参数
```
void byValue(int x)   { x = 100; }        // 传值：拷贝，不影响外部
void byRef(int& x)    { x = 100; }        // 传引用：直接修改外部变量
void byPtr(int* x)    { if (x) *x = 100; } // 传指针：通过地址修改外部变量
```
#### 默认参数
默认参数必须从右往左连续设置，不能中间空一个：
```
void greet(std::string name, std::string greeting = "Hello") {
    std::cout << greeting << ", " << name << "!" << std::endl;
}

greet("Alice");              // Hello, Alice!  (greeting 用默认值)
greet("Bob", "Hi");           // Hi, Bob!       (显式传入覆盖默认值)
```
### 函数重载 overloading
多个函数用同一个名字，只要参数列表（类型或个数）不同，编译器会根据调用时传入的实参自动选择匹配的版本
```
int add(int a, int b)       { return a + b; }
double add(double a, double b) { return a + b; }
int add(int a, int b, int c)   { return a + b + c; }

add(1, 2);        // 调用第一个：int 版本
add(1.5, 2.5);    // 调用第二个：double 版本
add(1, 2, 3);     // 调用第三个：三参数版本
```

# 命名空间
```
namespace MyLib {
    void print() {
        cout << "Hello from MyLib\n";
    }
    int version = 1;

    class Widget {
    public:
        void show() { cout << "Widget\n"; }
    };
}

using namespace MyLib;

int main() {
    print();
    return 0;
}
```