#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int dice1, dice2;
    int total;

    // 乱数のシードを設定
    srand(time(NULL));

    // さいころを2回降る
    dice1 = rand() % 6 + 1; // 1から6までの乱数を生成
    dice2 = rand() % 6 + 1; // 1から6までの乱数を生成

    // 合計を計算
    total = dice1 + dice2;

    // 結果を出力
    printf("Rolling dice...\n");
    printf("Die 1: %d\n",dice1);
    printf("Die 2: %d\n",dice2);
    printf("Total value: %d\n",total);

    return 0;
}
