#include <stdio.h>

int main(void)
{

    float a, b;
    printf("분자를 입력하세요 : ");
    scanf("%f", &a);
    printf("분모를 입력하세요 : ");
    scanf("%f", &b);

    printf("나누기의 결과는 %f\n입니다.", (float)a/b);

    return 0;
}
