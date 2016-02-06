#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mathTest()
{
  printf("mathTest Called\n");
  
  int a=100, b=200, c;
  float fa = 1.3, fb=99.996;
  double da = 999999.22;
  long long int lli = 1234567890123456;
  short sa = 0;
  char ca = 'A';
  
  printf("Swap\n");
  c = a;
  a = b;
  b = c;
  printf("a=%d, b=%d\n", a, b);
  
  printf("Simple math\n");
  c = a + b;
  c = a + 5;
  c = c + 10;
  c = a - b;
  c = a * b;
  c = a * 10;
  c = a / b;
  c = a % b;
  
  fa = fa + fb;
  fa = fa - fb;
  fa = fa * fb;
  fa = 3.222222222 * fb;
  fa = fb / 0.354647;
  
  da = da + 5;
  da = da - 5;
  da = 5 * da;
  da = da / 5;
  
  lli = lli + 100;
  lli = lli - 100;
  lli = lli * 100;
  lli = lli / 100;
  
  sa = sa + 32;
  sa = sa - 10;
  sa = sa * 2;
  sa = sa / 2;
  
  ca = ca + 2;
  ca = ca - 'B';
  
  printf("Simple Binary\n");
  c = a >> 2;
  c = a << 2;
  c = ~a;
  c = a & b;
  c = a | b;
  c = a ^ b;
  
  lli = lli >> 4;
  lli = lli << 4;
  lli = ~lli;
  lli = lli & 0xFFFFF0FF;
  lli = lli | 0xFFFFF0FF;
  lli = lli ^ 0xFFFFF0FF;
}

void logicTest()
{
  int i = 5;
  
  printf("If\n");
  if(i == 5)
  {
    printf("Taken\n");
  }
  
  printf("If-Else\n");
  if(i < 5)
  {
    printf("If-Taken\n");
  }
  else
  {
    printf("Else-Taken\n");
  }
  
  printf("while (simple)\n");
  while(i<10)
  {
    printf("i=%d\n", i);
    ++i;
  }
  
  printf("for (simple)\n");
  i=0;
  for(i=0; i<10; i++)
  {
    printf("i=%d\n", i);
  }
  
  printf("while (complicated)\n");
  i=0;
  while(i<100)
  {
    if( i == 10 )
    {
      printf("break\n");
      break;
    }
    if( i == 5)
    {
      printf("continue\n");
      ++i;
      continue;
    }
    
    if( i == 3 )
    {
      printf("nested-for\n");
      int j;
      for(j=0; j<5; j++)
      {
        printf("j=%d\n", j);
      }
    }
    
    printf("i=%d\n", i);
    ++i;
  }
  
  printf("switch\n");
  switch(i)
  {
    case 1:
      printf("one\n");
      break;
    case 2:
      printf("two\n");
      break;
    default:
      printf("default\n");
      break;
  }
}

int main()
{
  printf("MAIN Begins!\n");
  
  mathTest();
  logicTest();
    
  return 0;
}
