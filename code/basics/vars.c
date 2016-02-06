#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int global_var = 0xAABBCCDD;

void singleArg(int a)
{
  printf("singleArg Called!\n");
  
  printf("Accessing a: %d\n", a);
  a = a * 2;
}

void varTest()
{
  float local_var = 2.99;
  printf("Accessing global_var: %f\n", local_var);
  
  printf("Pointers\n");
  int x = 10, *x_ptr;
  x_ptr = &x;
  printf("Accessing pointer: %d\n", *x_ptr);
  
  printf("Static Arrays\n");
  int arr[50];
  arr[0] = 0xAA;
  arr[1] = 0x11;
  arr[2] = 0x22;
  arr[x] = 0x33;
  printf("Accessing array: %d\n", arr[x]);
  
  printf("Dynamic Arrays\n");
  int *darr = malloc(10 * sizeof(int));
  memset(darr, 10*sizeof(int), 0);
  memcpy(darr, arr, 5*sizeof(int));
  darr[5] = 0xFF;
  printf("Accessing dyn array: %d\n", darr[5]);
  
  printf("Strings\n");
  char *str = "Hello String!", str2[32];
  strcpy(str2, str);
  printf("Accessing str: %s, str2: %s\n", str, str2);
}

int main()
{
  printf("MAIN Begins!\n");
  
  printf("Accessing global_var: %d\n", global_var);
  global_var = global_var + 1;
  
  singleArg(750);
  varTest();
   
  return 0;
}
