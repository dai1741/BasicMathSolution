// 標準入力から2つの整数値を読み込み、いくつかの演算結果を出力するプログラム。

#include "stdafx.h"

// グローバル変数
int lhs;  // 左辺値
int rhs;  // 右辺値

// 2つの数値を読み込む
void read_input_numbers()
{
    scanf_s("%d%d", &lhs, &rhs);
}

// A + B を計算する関数
int add_numbers(int a, int b)
{
    return a + b;
}


int main()
{
    // 2つの整数値A, Bを標準入力から読み込む
    read_input_numbers();

    // A + Bの結果を表示する
    int add_result = add_numbers(lhs, rhs);
    printf("A + B = %d\n", add_result);


    return 0;
}

