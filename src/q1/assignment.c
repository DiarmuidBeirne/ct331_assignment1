#include <stdio.h>
int a;
int* a2;
long c;
double* p;
char ** g;

int main(int arg, char* argc[]){
  printf("Student 1D:15331436.\n");
  printf("Student Name: Diarmuid Beirne.\n");
  printf(" Size = %d\n", sizeof(a));
  printf(" Size = %d\n", sizeof(a2));
  printf(" Size = %d\n", sizeof(c));
  printf(" Size = %d\n", sizeof(p));
  printf(" Size = %d", sizeof(g));
  return 0;
}
