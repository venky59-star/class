#include <stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(i=n-1;i>=1;--i)
    {
    	for(int j=1;j<=i;j++)
    	{
    		printf("* ");
		}
		printf("\n");
	}
    return 0;
}

