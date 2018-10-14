#include <stdlib.h>

char **strtow(char *str)
{
	char **array;
	int i, j, count, len, k, m;

	count = k = 0;
	if (str == NULL || str[0] == '\0')
		return (NULL);

// wrap this into a count function
//	for (i = 0; str[i] != '\0'; i++)
//	{
//		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
//			count++;
//	}

	array = malloc(sizeof(char *) * (count + 1));
		
	if (array == NULL)
		return (NULL);


	for (i = 0; str[i] !=  '\0' && k < count; i++)
	{
		if (str[i] != ' ')
		{
			len = 0;
			j = i;

			while (str[j] != ' ' && str[j] != '\0')
				j++, len++;

			array[k] = malloc((len + 1) * sizeof(char));

		if (array[k] == NULL)
		{

		for (k = k - 1; k >= 0; k++)
			free(array[k]);
			free(array);

		return (NULL);
		}

		for (m = 0; m < len; m++, i++)
			array[k][m] = str[i];
		array[k++][m] = '\0';
}
}
array[k] = NULL;
return (array);
}
