#include <stdio.h>
int main() {
    int k;
    long long tien = 0;

    scanf("%d", &k);

    if (k <= 50) {
        tien = (long long)k * 1678;
    }
    else if (k < 100) {
        tien = 50LL * 1678
             + (long long)(k - 50) * 1734;
    }
    else if (k <= 200) {
        tien = 50LL * 1678
             + 50LL * 1734
             + (long long)(k - 100) * 2014;
    }
    else if (k <= 300) {
        tien = 50LL * 1678
             + 50LL * 1734
             + 100LL * 2014
             + (long long)(k - 200) * 2536;
    }
    else if (k <= 400) {
        tien = 50LL * 1678
             + 50LL * 1734
             + 100LL * 2014
             + 100LL * 2536
             + (long long)(k - 300) * 2834;
    }
    else {
        tien = 50LL * 1678
             + 50LL * 1734
             + 100LL * 2014
             + 100LL * 2536
             + 100LL * 2834
             + (long long)(k - 400) * 2927;
    }

    printf("%lld\n", tien);

    return 0;
}
