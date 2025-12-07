#include <stdio.h>
int main() {
    int n;
int a[n],max = 0;
scanf("%d", &n);
for(int i =0; i < n; i++) {
    scanf("%d", &a[i]);
}
max = a[0];
for (int i = 0; i <n; i++){
 if(a[i]> max) {
    max = a[i];
 }
}
printf("max is %d", max);
}

