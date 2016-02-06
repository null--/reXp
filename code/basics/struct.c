#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 
typedef struct
{
  int a;
  int b;
  char sarr[32];
  char *darr;
} simpleStruct; 

void fillStr(char *ar, int sz)
{
  *(ar+sz) = '\0';
  --sz;
  while(sz > 0)
  {
    *(ar+sz) = ('A' + sz);
    --sz;
  }
}

void testStruct()
{
  printf("testStruct Called\n");
  
  simpleStruct ss;
  //simpleStruct ss2, ss3, ss4;
  ss.a = 0x11;
  ss.b = 0x22;
  
  fillStr(ss.sarr, 31);
  ss.darr = malloc(sizeof(char) * 128);
  strcpy(ss.sarr, "Dynamic Array");
  
  /*
  ss2.a = ss3.a = ss4.a = ss.a;
  ss2.b = ss3.b = ss4.b = ss.b;
  strcpy(ss2.sarr, "Static Array 2");
  strcpy(ss3.sarr, "Static Array 3");
  strcpy(ss4.sarr, "Static Array 4");
  ss2.darr = ss3.darr = ss4.darr = NULL;
  */
}

int main()
{
  printf("MAIN Begins!\n");
  
  testStruct();
  
  return 0;
}
