// �W�����͂���2�̐����l��ǂݍ��݁A�������̉��Z���ʂ��o�͂���v���O�����B

#include "stdafx.h"

// �O���[�o���ϐ�
int lhs;  // ���Ӓl
int rhs;  // �E�Ӓl

// 2�̐��l��ǂݍ���
void read_input_numbers()
{
    scanf_s("%d%d", &lhs, &rhs);
}

// A + B ���v�Z����֐�
int add_numbers(int a, int b)
{
    return a + b;
}


int main()
{
    // 2�̐����lA, B��W�����͂���ǂݍ���
    read_input_numbers();

    // A + B�̌��ʂ�\������
    int add_result = add_numbers(lhs, rhs);
    printf("A + B = %d\n", add_result);


    return 0;
}

