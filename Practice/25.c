
#include<stdio.h>
#include<math.h>
 
unsigned int getFirstSetBitPos(int n)
{
   	int i = 0;
	while (n) 
		if (1 & (n >> i))
			return i + 1;
		else 
			i++;
}
 
int main()
{
    int n = 15;
    printf("%u", getFirstSetBitPos(n));
   
    return 0;
}
