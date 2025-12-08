#include <stdio.h>
int main() {
  int n;
  scanf("%d", &n);
  int a[n], even =0,odd=0;

  for( int i =0; i<n; i++) {
    printf("enter the element"); 
    scanf("%d", &a[i]);
  }
  for (int i =0; i <n ; i++) {
    if (a[i]%2 ==0) {
      even=even+1;
  }
    else {
      odd=odd+1;
        }
}
printf("even are %d", even);
printf("odd are %d", odd);
}
