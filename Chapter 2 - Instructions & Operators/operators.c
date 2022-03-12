#include <stdio.h>
int main()
{
    int x = 2, y = 3, z = 3, k = 1;
    printf("%d", 3 * x / y - z + k);
    // 6/y-z+k
    // 2-z+k
    //-1+k
    // 0

    // top priority will be given to * / %
    // on second we have + -
    // and at last is =
    return 0;
}