#include <stdio.h>
#include <stdlib.h>
static char text[] = "Hello Muse!";

int main() {
    char *p = (char *)malloc(100); 
    char * printme = text;
    printf("%s\n",printme);
    return 0;
}
