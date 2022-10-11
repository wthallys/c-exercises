#include <stdio.h>

int main() {
    float sum = 0.0;
    float cash;
    int count = 1;
    while (1)
    {
        scanf("%f", &cash);
        if (cash >= 0)
        {
            sum += cash;
            count ++;
        }
        else
            break;
    }

    if (sum == 0.0) 
    {
        printf("%.2f\n", sum);
        printf("%.2f", sum / count);
    }
    else 
    {
        printf("%.2f\n", sum);
        printf("%.2f", sum / (count - 1));
    }

    return 0;
}