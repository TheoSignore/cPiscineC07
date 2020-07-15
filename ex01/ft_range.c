#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int size;
	int *res;
	int i;

	size = max - min;
	if (size <= 0)
		return (NULL);
	res = (int *) malloc(size);
	if (!res)
		return (NULL);
	i = 0;
	while (i < size)
	{
		res[i] = min;
		i++;
		min++;
	}
	return (res);
}
