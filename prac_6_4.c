# include <stdio.h>

int main(void){

    char *p, *q, *r;

    p = "one";
    q = "two";
    r = "three";

    printf("%s %s %s\n", p, q, r);
    printf("%s %s %s\n", p, r, q);
    printf("%s %s %s\n", q, p, r);
    printf("%s %s %s\n", q, r, p);
    printf("%s %s %s\n", r, p, q);
    printf("%s %s %s\n", r, q, p);

    return 0;    
}