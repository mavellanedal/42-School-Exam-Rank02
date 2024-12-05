#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int i = 0;
	int len = abs((end - start) + 1);
	int *res = (int *)malloc(sizeof(int) * ((len) + 1));
	while (i < len)
	{
		if (start < end)
		{
			res[i] = start;
			start++;
			i++;
		}
		if (start > end)
		{
			res[i] = start;
			start --;
			i++;
		}
	}
	return (res);
}