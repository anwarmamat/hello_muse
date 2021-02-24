#include <stdio.h>
#include <stdlib.h>
extern int a(void);
extern int b(void);
static char text[] = "Hello Muse!";

int main()
{
  char *p = (char *)malloc(100); 
    char * printme = text;
    printf("%s\n",printme);
    
  printf("Hello world. The number is %d", a() + b());
  return 0;
}
