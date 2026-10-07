// 偶数番目はウサギ、奇数番目はカメを三項演算子で選んで表示する（課題の出発点）
#include <stdio.h>

int main(void)
{
    int i;

    for (i = 1; i <= 20; i++) {
        printf("%2d: %s\n", i, (i % 2 == 0) ? (i % 10 == 0 ? "休憩するウサギ" : "ウサギ") : "カメ");
    }
    return 0;
}
