#include <stdio.h>
int main()
{ff
while(1)

    {
        int n, score, total=0;
        printf("Enter the number of scores: "); 
        scanf("%d", &n);
        for (int i = 0; i < n; i++) {
            printf("Enter score %d: ", i + 1);
            scanf("%d", &score);
            total += score;
        }
        printf("Total score: %d\n", total);
        printf("Average score: %.2f\n", (float)total / n);
        
    }
}
