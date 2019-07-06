/**
 * cap_string - capitalizes the start of any string
 * @a: value from main
 * Return: value of a
 */
char *cap_string(char *a)
{
	int ctr;

	for (ctr = 0; a[ctr] != '\0'; ctr++)
	{

		if (a[ctr] == ' ' || a[ctr] == '\t' || a[ctr] == '\n' ||
a[ctr] == ',' || a[ctr] == ';' || a[ctr] == '.' || a[ctr] == '!' ||
a[ctr] == '?' || a[ctr] == '\"' || a[ctr] == '(' || a[ctr] == ')' ||
a[ctr] == '{' || a[ctr] == '}')
		{
			ctr++;
			if (a[ctr] == ' ' || a[ctr] == '\t' || a[ctr] == '\n' ||
a[ctr] == ',' || a[ctr] == ';' || a[ctr] == '.' || a[ctr] == '!' ||
a[ctr] == '?' || a[ctr] == '\"' || a[ctr] == '(' || a[ctr] == ')' ||
a[ctr] == '{' || a[ctr] == '}')
				ctr++;
			if (a[ctr] >= 'a' && a[ctr] <= 'z')
			a[ctr] = a[ctr] - 32;
		}

	}
	return (a);
}
