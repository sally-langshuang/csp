#include <stdio.h>
#include <stdlib.h>

// ---- 全局变量：会分布在不同 section ----
int g_initialized = 100;         // 已初始化非零 -> .data
int g_uninitialized;             // 未初始化(默认0)  -> .bss
int g_arr_bss[1000];             // 未初始化数组     -> .bss
const char* g_string = "Hello";  // "Hello\0"字符串字面量 -> .rodata；指针本身 -> .data
const int g_const_val = 42;      // const且已初始化   -> .rodata

int main() {
    
}