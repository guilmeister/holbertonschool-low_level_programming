char *_strncpy(char *dest, char *src, int n)
{

	int destcounter;

	for (destcounter = 0; destcounter < n && src[destcounter] != '\0'; destcounter++)
	{
		dest[destcounter] = src[destcounter];

		if (destcounter > n)
			dest[destcounter] = 0;
	}

	return (dest);

}
