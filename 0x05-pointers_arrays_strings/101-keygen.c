#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define PASSWORD_LENGTH 10

char *generateRandomPassword(int length)
{
	char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	char *password = (char *)malloc((length + 1) * sizeof(char));

	if (password == NULL)
	{
		perror("Memory allocation failed");
		exit(EXIT_FAILURE);
	}

	srand(time(NULL));
	for (int i = 0; i < length; i++)
	{
		int index = rand() % (strlen(charset));

		password[i] = charset[index];
	}

	password[length] = '\0';
	return (password);
}
