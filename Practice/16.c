
#include <stdio.h>
void fun()
{
    // static variables get the default value as 0.
    static int x = 10;
    printf("%d ", x);
    x = x + 1;
}
 
int main()
{
    fun();
    fun();
    return 0;
}
