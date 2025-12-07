#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a[n],key;

for(int i =0; i < n; i++) {
    scanf("%d", &a[i]);
}
printf("enter the  key");
scanf("%d", &key);
for(int i =0; i<n;i++) {
    if (a[i] == key) {
        printf("found at index %d",i);
        break;
    }

}
printf("not found");
}

