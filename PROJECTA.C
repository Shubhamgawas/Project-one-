#include<stdio.h>
void sum(int x,int y)
  {
   int z;
   z=x+y;
   printf("Addition : %d\n",z);
  
  }

 void mult(int x,int y)
  {
   int z;
   z=x*y;
   printf("Multiplication : %d\n",z);

   }

   void div(int x,int y)
   {
    int z;
    z=x/y;
    printf("Division : %d\n",z);
   
    }
 void main()
{
  int a,b,c,d,e,f;
 
  printf("Enter the Two Values:");
  scanf("%d%d",&a,&b);

  sum(a,b);
  mult(a,b);
  div(a,b);

}
  
