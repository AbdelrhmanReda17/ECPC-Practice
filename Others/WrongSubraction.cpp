//div 3 #479
//Mahmoud Adel

#include<bits/stdc++.h>

int main() {
    int n, k;
    scanf("%i%i", &n, &k);
    while (k--) {
        if (n % 10 == 0) {
            n /= 10;
        }
        else n--;
    }
    printf("%i\n", n);
}