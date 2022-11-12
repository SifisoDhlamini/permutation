#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, k, i, j;
    scanf("%d %d", &n, &k);
    
    if(n < k){
        printf("%d", 0);
    }
    else{
        //This part deals with n! part of the equation (numerator)
        //1 * 2 * 3 * 4 * 5......* n
        int b = 1;
        for(i = 2; i <= n; i++){
            b = b * i;
        }
        
        //this part deals with the (n-k)! part of the equation (denominator)
        int diff = n - k;
        int c = 1;
        for(j = 2; j <= diff; j++){
            c = c * j;
        }
        
        int answer = b/c;
        
        printf("%d\n", answer);
    }
}
