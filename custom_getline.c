#include "monty.h"

/**
 * custom_getline - function to read lines from a file
 * @lineptr: pointer to a character array
 * @n: pointer to a size n
 * @stream: specified file stream
 * Return - number of character read
*/
ssize_t custom_getline(char **lineptr, size_t *n, FILE *stream)
{
    size_t bufsize = 0;
    ssize_t bytesRead;

    if (lineptr == NULL || n == NULL || stream == NULL)
    {
        return (-1);
    }

    if (*lineptr == NULL)
    {
        *n = 0;
    }
    bytesRead = custom_getline(lineptr, &bufsize, stream);
    if (bytesRead == -1)
    {
        return (-1);
    }
    *n = bufsize;

    return bytesRead;
}