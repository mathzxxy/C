#include <stdio.h>
//Conversão de char para int:
int main() {
    char pt1;
    int pt2;

    printf("Digite a opção desejada: ");
    scanf("%c%i",&pt1,&pt2);

    int intPt1 = pt1;
    intPt1 = (intPt1 * 10) + pt2;

    printf("%d", intPt1);

    return 0;
}