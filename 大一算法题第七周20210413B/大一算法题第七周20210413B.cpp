#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int arr[100010];

int main()
{
	int T;

	scanf("%d", &T);

	for(int j=1;j<=T;j++)
	{
		int N;
		int Start = 1, End = 1,max = -1000;
		int k = 1, sum = 0;;
		memset(arr, 0, sizeof(arr));

		scanf("%d", &N);

		for (int i = 0; i < N; i++)
		{
			scanf("%d", &arr[i]);
		}
		
		for (int i = 0; i < N; i++)
		{
			sum += arr[i];
			if (sum > max)
			{
				max = sum;
				Start = k;
				End = i + 1;
			}
			if (sum < 0)
			{
				sum = 0;
				k = i + 2;
			}
		}
	
		printf("Case %d:\n",j);
		printf("%d %d %d\n", max, Start, End);
		if (j != T)
		{
			printf("\n");
		}
	}

	return 0;
}