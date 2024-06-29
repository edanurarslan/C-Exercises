#include <stdio.h>

int main()
{
    int n, m, i, j, k;

    scanf("%d", &n);

    scanf("%d", &m);

    int A[n], B[m], C[n];

    for(i=0; i<n; i++)
        scanf("%d", &A[i]);

    for(i=0; i<m; i++)
        scanf("%d", &B[i]);

    k = 0;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(A[i] == B[j])
            {
                C[k++] = A[i];
                break;
            }
        }
    }

    for(i=0; i<k; i++)
        printf("%d ", C[i]);

    return 0;
}
