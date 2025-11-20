#include <stdio.h>
#include <math.h>

int main(){
int n, S = 0;
   printf("nhap n: ");
   scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        S += i;
        printf("tong so le: %d" , S);   
        return 0;
    }
}


