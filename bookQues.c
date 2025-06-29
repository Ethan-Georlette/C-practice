#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    unsigned char *p, temp;
    if (!scanf("%d", &i))
    {
        fprintf(stderr, "wrong input\n");
        exit(1);
    }
    p = (unsigned char *)calloc(i, sizeof(unsigned char));
    for (j = i; j; j--)
        *(p + j) = j;
    for (j = i; j; j--)
        printf("%d \t", (int)(*(p + j)));
    putchar('\n');
    for (j = i; j; j--)
        *(p + i) = (temp = p[i] << 2) && (temp >> 2);
    for (; j; j--)
        printf("%d \t", (int)(*(p+j)));
    return 1;
}
