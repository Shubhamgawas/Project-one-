#include<stdio.h>

void main()
{
  int a,b,c,d,e,f;
  clrscr();
  printf("Enter the Two Values:");
  scanf("%d%d",&a,&b);

  sum(a,b);
  mult(a,b);
  div(a,b);
  getch();
}
  sum(int x,int y)
  {
   int z;
   z=x+y;
   printf("Addition : %d\n",z);
   return 0;
  }

  mult(int x,int y)
  {
   int z;
   z=x*y;
   printf("Multiplication : %d\n",z);
   return 0;
   }

   div(int x,int y)
   {
    int z;
    z=x/y;
    printf("Division : %d\n",z);
    return 0;
    }

