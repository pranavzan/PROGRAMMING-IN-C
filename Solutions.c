#include <stdio.h>
int main() {
    int a, b,c;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter another number: ");
    scanf("%d", &b);
    printf("Enter a third number: ");
    scanf("%d", &c);
    printf("a*b*c= %d\n",a*b*c );
    printf("a+b+c= %d\n",a+b+c );
    printf("a-b-c= %d\n",a-b-c );
    printf("(a+b)*c= %d\n", (a+b)*c );
    printf("a/b= %d\n", a/b );
    return 0;
}
