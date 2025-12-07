#include <stdio.h>
int main() {
    int rev = 0;
    int n=0;
    int last = 0;
    printf("enter the number");
    scanf("%d", &n);
    while ( n> 0) {
    last = n%10;
    n = n/10;
    rev = rev*10 + last;
    }
    
printf("%d \n",rev);

}
