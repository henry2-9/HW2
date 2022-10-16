#include <stdio.h>

int main() {
	int limit = 500;
    int a, b, c = 0;
    int m = 2;  // loop from 2 to max_limit
    while (c < limit) {

        // now loop on j from 1 to i-1
        for (int n = 1; n < m; ++n) 
        {
            a = m * m - n * n;
            b = 2 * m * n;
            c = m * m + n * n;

            if (c > limit)
                break;

            printf("%d\t %d\t %d\n", a, b, c);
        }
        m++;
    }
}