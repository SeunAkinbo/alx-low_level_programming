/**
 * _strcpy - Copies the string pointed to by src to dest.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string to be copied.
 *
 * Return: Pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i]; /*Copy each character from src to dest*/
	dest[i] = '\0'; /* Add the null terminator to the end of dest*/
	return (dest);
}

