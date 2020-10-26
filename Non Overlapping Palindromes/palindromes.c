#include <stdio.h>
#include <string.h>

int min(int a, int b) {
    return a<b?a:b;
}
int max(int a, int b) {
    return a>b?a:b;
}
int main() {
    int T;
    scanf("%d", &T);
    for (int t = 0; t < T; t++) {
        char word[100000 + 1];
        scanf("%s", word);
        
        int len = strlen(word);
        
        int d1[len];
        int d2[len];
        
        for (int i = 0; i < len; i++) {
            int l1 = 0, r1 = -1;
            int l2 = 0, r2 = -1;
            
            int k1 = (i>r1 ? 1 : min(d1[l1+r1-i], r1-i+1));
            int k2 = (i>r2 ? 0 : min(d2[l2+r2-i+1], r2-i+1));
            
            while (0 <= i-k1 && i+k1 < len && word[i-k1]==word[i+k1])
                k1++;
            while (0 <= i-k2-1 && i+k2 < len && word[i-k2-1]==word[i+k2])
                k2++;
                
            d1[i] = k1--;
            d2[i] = k2--;
            
            if (i+k1 > r1) {
                l1 = i-k1;
                r1 = i+k1;
            }
            if (i+k2 > r2) {
                l2 = i-k2-1;
                r2 = i+k2;
            }
        }


        int rightarr[len];
        int leftarr[len];
        for (int i = 0; i < len; i++) {
            rightarr[i] = 0;
            leftarr[i] = 0;
        }
        for (int i = 0; i < len; i++) {
            for (int o = 0; o < d1[i]; o++) {
                rightarr[i+o] = max(rightarr[i+o], 2*(o+1)-1);
            }
            for (int e = 0; e < d2[i]; e++) {
                rightarr[i+e] = max(rightarr[i+e], 2*(e+1));
            }
            rightarr[i] = max(rightarr[i], (i==0 ? 0 : rightarr[i-1]));
            
            // LEFT
            for (int o = 0; o < d1[len-1 - i]; o++) {
                leftarr[i+o] = max(leftarr[i+o], 2*(o+1)-1);
            }
            for (int e = 0; e < d2[len-1 - i]; e++) {
                leftarr[i+e+1] = max(leftarr[i+e+1], 2*(e+1));
            }
            leftarr[i] = max(leftarr[i], (i==0 ? 0 : leftarr[i-1]));
        }

        long out = 0;
        for (int i = 0; i < len - 1; i++) {
            out = max(out, rightarr[i]+leftarr[len-2-i]);
        }
        printf("%ld\n",out);
    }
    return 0;
}