#include <bits/stdc++.h>

#define ll long long

using namespace std;



int main() {
    int a, b, c;//题目给出的a,b,c
    ll S1, S2;//Alice的面积和Bob的面积
	scanf("%d%d%d", &a, &b, &c);//输入
	
	S1 = 1ll * a * a;	
    S2 = 1ll * b * c;//算出两者的面积，注意强制转换
	if (S1 > S2) cout << "Alice" << endl;//比较，并输出
			else cout << "Bob" << endl;
	
	return 0;//结束
}
