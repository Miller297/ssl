#include<stdio.h>
//circles
int main()
{
   int m,n;
   scanf("%d %d", &m, &n);
   int a[m][n];
   int up=0,down=m-1,left=0,right=n-1;
   int num=1;
   while(num <= m * n) {
       for(int i = left; i <= right && num <= m * n; i++) {
           a[up][i] = num++;
       }
       up++;
       for(int i = up; i <= down && num <= m * n; i++) {
           a[i][right] = num++;
       }
       right--;
       for(int i = right; i >= left && num <= m * n; i--) {
           a[down][i] = num++;
       }
       down--;
       for(int i = down; i >= up && num <= m * n; i--) {
           a[i][left] = num++;
       }
       left++;
   }
    for(int i = 0; i < m; i++) {
         for(int j = 0; j < n; j++) {
              printf("%d ", a[i][j]);
         }
         printf("\n");
    }
    return 0;
}