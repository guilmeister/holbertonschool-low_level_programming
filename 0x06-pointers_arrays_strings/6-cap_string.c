/**
 * cap_string - capitalizes the start of any string
 *
 * @a: value from main
 *
 * Return: value of a
 */

char *cap_string(char *a)
{
	int counter;

	for (counter = 0; a[counter] != '\0'; counter++)
	{
		if (counter == 0)
		{
			if (a[counter] >= 'a' && a[counter] <= 'z')
			{
				a[counter] = a[counter] - 32;
			}
		}
		if (a[counter] == ' ' || a[counter] == ',' || a[counter] == ';')
		{
			counter++;
			if (a[counter] >= 'a' && a[counter] <= 'z')
			a[counter] = a[counter] - 32;
		}
		if (a[counter] == '.' || a[counter] == '!' || a[counter] == '?')
		{
			counter++;
			if (a[counter] == ' ')
				counter++;
			if (a[counter] >= 'a' && a[counter] <= 'z')
				a[counter] = a[counter] - 32;
		}
		if (a[counter] == '\"' || a[counter] == '(' || a[counter] == ')')
		{
			counter++;
			if (a[counter] >= 'a' && a[counter] <= 'z')
				a[counter] = a[counter] - 32;
		}
		if (a[counter] == '{' || a[counter] == '\n' || a[counter] == '\t')
		{
			counter++;
			if (a[counter] >= 'a' && a[counter] <= 'z')
				a[counter] = a[counter] - 32;
		}
	}
	return (a);
}
