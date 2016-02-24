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

// A - B を計算する関数
int subtract_numbers(int a, int b)
{
    return a - b;
}

// A * B を計算する関数
int multiply_numbers(int a, int b)
{
    return a * b;
}

// A / B を計算する関数
int divide_numbers(int a, int b)
{
    if (b == 0) {
        fputs("zero division\n", stderr);
        return 0;
    }
    return a / b;
}



int main()
{
    // 2つの整数値A, Bを標準入力から読み込む
    read_input_numbers();

    // A + Bの結果を表示する
    int add_result = add_numbers(lhs, rhs);
    printf("A + B = %d\n", add_result);

    // A - Bの結果を表示する
    int sub_result = subtract_numbers(lhs, rhs);
    printf("A - B = %d\n", sub_result);

    // A * Bの結果を表示する
    int mul_result = multiply_numbers(lhs, rhs);
    printf("A * B = %d\n", mul_result);

    // A / Bの結果を表示する
    int div_result = divide_numbers(lhs, rhs);
    printf("A / B = %d\n", div_result);


    return 0;
}

