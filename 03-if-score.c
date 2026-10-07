// if文で、60点以上なら10点、それ以外は0点を求める
#include <stdio.h>

int main(void)
{
    int score = 75;
    int point;

    if (score >= 60) {
        point = 10;
        printf("合格\n");
    } else {
        point = 0;
        printf("不合格\n");
    }

    return 0;
}
