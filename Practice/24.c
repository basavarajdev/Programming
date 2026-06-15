
#include<stdio.h>

int main() {
   void (*p)();
   int (*q)();
   int (*r)();
   p = clrscr;
   q = getch;
   r = puts;
   (*p)();
   (*r)("cquestionbank.blogspot.com");
   (*q)();
   return 0;
}

