char *_strncpy(char *dest, char *src, int n)
{

	int destcounter;

	for (destcounter = 0; destcounter < n; destcounter++)
	{
		dest[destcounter] = src[destcounter];
	}

	return (dest);

}
