#include<stdio.h>
#include<stdio.h>
//circles
int main()
{
   int n;
   scanf("%d", &n);
   int a[n][n];
   int up=0,down=n-1,left=0,right=n-1;
   int num=1;
   while(num <= n * n) {
       for(int i = left; i <= right && num <= n * n; i++) {
           a[up][i] = num++;
       }
       up++;
       for(int i = up; i <= down && num <= n * n; i++) {
           a[i][right] = num++;
       }
       right--;
       for(int i = right; i >= left && num <= n * n; i--) {
           a[down][i] = num++;
       }
       down--;
       for(int i = down; i >= up && num <= n * n; i--) {
           a[i][left] = num++;
       }
       left++;
   }
    for(int i = 0; i < n; i++) {
         for(int j = 0; j < n; j++) {
              printf("%-4d ", a[i][j]);
         }
         printf("\n");
    }
    return 0;
}