//#include <stdio.h>
//#include <stdbool.h>
//
//
//bool is_valid(int k, int m) {
//    int total = 2 * k; 
//    int current = 0;   
//    int killed_bad = 0; 
//    bool killed[30] = { false }; 
//
//    while (killed_bad < k) {
//        int count = 0;
//        while (count < m) {
//            if (!killed[current]) {
//                count++;
//            }
//            if (count == m) break;
//            current = (current + 1) % total;
//        }
//
//        
//        if (current < k) {
//            return false; 
//        }
//        else {
//            killed[current] = true;
//            killed_bad++;
//        }
//    }
//    return true; 
//}
//
//int main() {
//    int k;
//    scanf("%d", &k); 
//
//    
//    for (int m = 1; ; m++) {
//        if (is_valid(k, m)) {
//            printf("%d\n", m);
//            break;
//        }
//    }
//
//    return 0;
//}