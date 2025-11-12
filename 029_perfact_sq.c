#include <stdio.h>
#include <math.h>

int main() {
    int n;
     printf("Enter number : ");
   
    scanf("%d", &n);

    int dp[1000];  
    dp[0] = 0;

    for (int i = 1; i <= n; i++) {
        dp[i] = i;
        for (int j = 1; j * j <= i; j++) {
            int sq = j * j;
            if (dp[i - sq] + 1 < dp[i])
                dp[i] = dp[i - sq] + 1;
        }
    }

    printf(" output : %d\n", dp[n]);
    return 0;
}
