// #include <bits/stdc++.h>
#include <iostream>
using namespace std;


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

#include <iostream>
#include <iomanip>
void hex() {
    int n = 42;
    cout << showbase << n << endl;
    cout << showbase << dec << n << endl;
    cout << showbase << oct << n << endl;
    cout << hex << n << endl;
    cout << showbase << uppercase << n << endl;
}

int main() {
    hex();
    return 0;
}

void modify(int& x) {
    x=100;
    cout << "&x=" << &x << endl;
}

void modify2(int* x) {
    *x=200;
    cout << "&x=" << &x << endl;
}

int point() {
    int a = 10;
    int& aa = a;
    int* pa = &a;
    cout << "a=" << a << " aa=" << aa << " *pa=" << *pa << " &a=" << &a << " &aa=" << &aa << " pa=" << pa << " &pa=" << &pa <<  endl;
    *pa = 11;
    cout << "a=" << a << " aa=" << aa << " *pa=" << *pa << " &a=" << &a << " &aa=" << &aa << " pa=" << pa << " &pa=" << &pa <<  endl;
    a = 12;
    cout << "a=" << a << " aa=" << aa << " *pa=" << *pa << " &a=" << &a << " &aa=" << &aa << " pa=" << pa << " &pa=" << &pa <<  endl;
    modify(a);
    cout << "a=" << a << " aa=" << aa << " *pa=" << *pa << " &a=" << &a << " &aa=" << &aa << " pa=" << pa << " &pa=" << &pa <<  endl;
    modify2(pa);
    cout << "a=" << a << " aa=" << aa << " *pa=" << *pa << " &a=" << &a << " &aa=" << &aa << " pa=" << pa <<  " &pa=" << &pa << endl;
    
    return 0;
}

