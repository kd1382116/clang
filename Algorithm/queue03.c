#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// �X�^�[�g�n�_�̍��W
const int SX = 1;
const int SY = 1;
// �S�[���n�_�̍��W
const int GX = 8;
const int GY = 1;
// ���H�f�[�^
int map[7][10] = {
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 0, 0, 0, 0, 0, 1, 0, 0, 1},
    {1, 0, 1, 0, 1, 0, 0, 0, 1, 1},
    {1, 0, 0, 1, 0, 0, 0, 1, 0, 1},
    {1, 1, 0, 1, 0, 1, 0, 1, 0, 1},
    {1, 0, 0, 0, 0, 1, 0, 0, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
};

#define QUEUESIZE 46 // �L���[�T�C�Y
int queue[QUEUESIZE]; // �L���[�̈�p�z��
int head = 0; // �L���[�擪�f�[�^�̃|�C���^
int tail = 0; // �L���[�I�[�f�[�^�̃|�C���^

// �֐��v���g�^�C�v
void DrawMaze(int x, int y);
int enqueue(int d);
int dequeue(int* pd);
int susumu(int x, int y);

// ���C���֐�
int main() {
    // �����̏�Ԃ�\��
    system("cls"); // ��ʃN���A
    printf("�����̏�Ԃ�\��\n");
    DrawMaze(-1, -1); // ���H�\��(�T�����ł͖����̂ň����̓_�~�[(-1)��ݒ�)
    printf("�uEnter�v�L�[�������Ă�������: �������s\n");
    getch(); // Enter�L�[���������܂ňꎞ��~

    susumu(SX, SY); // �o�H�T���֐����R�[��

    // �Ō�̏�Ԃ�\��
    system("cls"); // ��ʃN���A
    printf("�Ō�̏�Ԃ�\��\n");
    DrawMaze(-1, -1); // ���H�\��(�T�����ł͖����̂ň����̓_�~�[(-1)��ݒ�)
    return 0;
}

// ���H�`��֐�
void DrawMaze(int x, int y) {
    int i, j;
    for (i = 0; i < 7; i++) { // �s�����̌J��Ԃ�
        for (j = 0; j < 10; j++) { // �񐔕��̌J��Ԃ�
            // ���H�`��
            if (i == y && j == x) {
                printf("�l"); // �T�����̈ʒu
            }
            else if (i == SY && j == SX) {
                printf("�r"); // �X�^�[�g�n�_
            }
            else if (i == GY && j == GX) {
                printf("�f"); // �S�[���n�_
            }
            else if (map[i][j] == 1) {
                printf("�l"); // ��
            }
            else if (map[i][j] == 2) {
                printf("�E"); // �ʂ����Ƃ���̖ڈ�
            }
            else {
                printf("�@"); // �ʘH
            }
        }
        printf("\n");
    }
}

// �L���[�Ƀf�[�^������(�G���L���[����)�֐�
int enqueue(int d) {
    if ((tail + 1) % QUEUESIZE == head) { return -1; } // �L���[����t�̂Ƃ�
    queue[tail] = d;
    tail++;
    tail = tail % QUEUESIZE;
    return 0;
}

// �L���[����f�[�^�����o��(�f�L���[����)�֐�
int dequeue(int* pd) {
    if (head == tail) { return -1; } // �L���[����̂Ƃ�
    *pd = queue[head];
    queue[head] = 0; // �m�F���₷�����邽��
    head++;
    head = head % QUEUESIZE;
    return 0;
}

// ����i�ފ֐�
int susumu(int x, int y) {
    while (1) {
        // �T���r���̏󋵂�\��
        system("cls"); // ��ʃN���A
        printf("�T���r���̏󋵂�\�� �u�l�v���T�����̈ʒu\n");
        DrawMaze(x, y); // ���H�\��(�r���o��)
        printf("�uEnter�v�L�[�������Ă�������: �������s\n");
        getch(); // Enter�L�[���������܂ňꎞ��~

        map[y][x] = 2; // �ʂ����Ƃ���̖ڈ�Ƃ���2��u��
        if (x == GX && y == GY) { return 0; } // �S�[��������

        // �i�߂�������`�F�b�N����
        if (map[y - 1][x] == 0) { // ��
            enqueue(x);
            enqueue(y - 1);
        }
        if (map[y + 1][x] == 0) { // ��
            enqueue(x);
            enqueue(y + 1);
        }
        if (map[y][x - 1] == 0) { // ��
            enqueue(x - 1);
            enqueue(y);
        }
        if (map[y][x + 1] == 0) { // �E
            enqueue(x + 1);
            enqueue(y);
        }

        // ���̈ʒu���L���[������o��
        dequeue(&x);
        if (dequeue(&y) == -1) { return -1; } // �L���[����ɂȂ����Ƃ� (�o���ɓ��B�ł��Ȃ������Ƃ�)
    }
}