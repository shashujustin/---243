//#include <stdio.h>
//#include <stdlib.h>
//
//int climbStairs(int n) {
//    if (n <= 1) return 1;
//
//    
//    int* dp = (int*)malloc((n + 1) * sizeof(int));
//    if (dp == NULL) {
//        printf("ÄÚ´æ·ÖÅäÊ§°Ü\n");
//        return -1; 
//    }
//
//    dp[0] = 1;
//    dp[1] = 1;
//    for (int i = 2; i <= n; i++) {
//        dp[i] = dp[i - 1] + dp[i - 2];
//    }
//
//    int result = dp[n];
//    free(dp);
//    return result;
//}
//
//int main() {
//    int N;
//    scanf_s("%d", &N);
//    printf("%d\n", climbStairs(N));
//    return 0;
//}