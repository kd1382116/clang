#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// スタート地点の座標
const int SX = 1;
const int SY = 1;
// ゴール地点の座標
const int GX = 8;
const int GY = 1;
// 迷路データ
int map[7][10] = {
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 0, 0, 0, 0, 0, 1, 0, 0, 1},
    {1, 0, 1, 0, 1, 0, 0, 0, 1, 1},
    {1, 0, 0, 1, 0, 0, 0, 1, 0, 1},
    {1, 1, 0, 1, 0, 1, 0, 1, 0, 1},
    {1, 0, 0, 0, 0, 1, 0, 0, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
};

#define QUEUESIZE 46 // キューサイズ
int queue[QUEUESIZE]; // キュー領域用配列
int head = 0; // キュー先頭データのポインタ
int tail = 0; // キュー終端データのポインタ

// 関数プロトタイプ
void DrawMaze(int x, int y);
int enqueue(int d);
int dequeue(int* pd);
int susumu(int x, int y);

// メイン関数
int main() {
    // 初期の状態を表示
    system("cls"); // 画面クリア
    printf("初期の状態を表示\n");
    DrawMaze(-1, -1); // 迷路表示(探索中では無いので引数はダミー(-1)を設定)
    printf("「Enter」キーを押してください: 処理続行\n");
    getch(); // Enterキーが押されるまで一時停止

    susumu(SX, SY); // 経路探索関数をコール

    // 最後の状態を表示
    system("cls"); // 画面クリア
    printf("最後の状態を表示\n");
    DrawMaze(-1, -1); // 迷路表示(探索中では無いので引数はダミー(-1)を設定)
    return 0;
}

// 迷路描画関数
void DrawMaze(int x, int y) {
    int i, j;
    for (i = 0; i < 7; i++) { // 行数分の繰り返し
        for (j = 0; j < 10; j++) { // 列数分の繰り返し
            // 迷路描画
            if (i == y && j == x) {
                printf("人"); // 探索中の位置
            }
            else if (i == SY && j == SX) {
                printf("Ｓ"); // スタート地点
            }
            else if (i == GY && j == GX) {
                printf("Ｇ"); // ゴール地点
            }
            else if (map[i][j] == 1) {
                printf("四"); // 壁
            }
            else if (map[i][j] == 2) {
                printf("・"); // 通ったところの目印
            }
            else {
                printf("　"); // 通路
            }
        }
        printf("\n");
    }
}

// キューにデータを入れる(エンキューする)関数
int enqueue(int d) {
    if ((tail + 1) % QUEUESIZE == head) { return -1; } // キューが一杯のとき
    queue[tail] = d;
    tail++;
    tail = tail % QUEUESIZE;
    return 0;
}

// キューからデータを取り出す(デキューする)関数
int dequeue(int* pd) {
    if (head == tail) { return -1; } // キューが空のとき
    *pd = queue[head];
    queue[head] = 0; // 確認しやすくするため
    head++;
    head = head % QUEUESIZE;
    return 0;
}

// 道を進む関数
int susumu(int x, int y) {
    while (1) {
        // 探索途中の状況を表示
        system("cls"); // 画面クリア
        printf("探索途中の状況を表示 「人」が探索中の位置\n");
        DrawMaze(x, y); // 迷路表示(途中経過)
        printf("「Enter」キーを押してください: 処理続行\n");
        getch(); // Enterキーが押されるまで一時停止

        map[y][x] = 2; // 通ったところの目印として2を置く
        if (x == GX && y == GY) { return 0; } // ゴールした時

        // 進める方向をチェックする
        if (map[y - 1][x] == 0) { // 上
            enqueue(x);
            enqueue(y - 1);
        }
        if (map[y + 1][x] == 0) { // 下
            enqueue(x);
            enqueue(y + 1);
        }
        if (map[y][x - 1] == 0) { // 左
            enqueue(x - 1);
            enqueue(y);
        }
        if (map[y][x + 1] == 0) { // 右
            enqueue(x + 1);
            enqueue(y);
        }

        // 次の位置をキューから取り出す
        dequeue(&x);
        if (dequeue(&y) == -1) { return -1; } // キューが空になったとき (出口に到達できなかったとき)
    }
}