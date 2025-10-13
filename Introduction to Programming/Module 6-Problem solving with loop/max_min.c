#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);

    int mx = INT_MIN; // start with smallest possible number

    for (int i = 1; i <= n; i++)
    {
        int val;
        scanf("%d", &val);

        if (val > mx)
        {
            mx = val;
        }
    }

    printf("Maximum value = %d\n", mx);

    return 0;
}

