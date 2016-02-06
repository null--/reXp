#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Cross OS built: # i586-mingw32msvc-cc ./func.c

// __cdecl int CDECLfunc(int a, int b)
__attribute__((cdecl)) int CDECLfunc(int a, int b)
{
  return a + b;
}

// __fastcall int FASTCALLfunc(int a, int b)
__attribute__((fastcall)) int FASTCALLfunc(int a, int b)
{
  return a + b;
}

// __stdcall int STDCall(int a, int b)
__attribute__((stdcall)) int STDCallfunc(int a, int b)
{
  return a + b;
}

void test(int *arg)
{
  printf("Test arg:%d\n", *arg);
}

void callback(void(*func_ptr)(int*), int *arg)
{
  printf("Calling the function pointer\n");
  func_ptr(arg);
}

int main()
{
  printf("MAIN Begins!\n");
  
  int a;
  
  printf("CDECL Call\n");
  a = CDECLfunc(100,1);
  
  printf("FASTCALL Call\n");
  a = FASTCALLfunc(1000,1);
  
  printf("STDCall Call\n");
  a = STDCallfunc(1300,37);
  
  printf("Callback\n");
  callback(&test, &a);
  
  return 0;
}

