#include "main.h"
  2
  3 /**
  4  * read_textfile - read a certain size and prints to std output
  5  * @filename: file to read from
  6  * @letters: size to read
  7  * Return: actual size read and printed
  8  */
  9
 10 ssize_t read_textfile(const char *filename, size_t letters)
 11 {
 12         int fd; /* file descriptor */
 13         ssize_t n_read, n_wrote;
 14         char *buffer;
 15
 16         if (filename == NULL)
 17                 return (0);
 18
 19         /* open */
 20         fd = open(filename, O_RDONLY);
 21         if (fd == -1)
 22                 return (0);
 23
 24         /* malloc buffer */
 25         buffer = malloc(sizeof(char) * letters);
 26         if (buffer == NULL)
 27                 return (0);
 28
 29         /* read */
 30         n_read = read(fd, buffer, letters);
 31         if (n_read == -1)
 32         {
 33                 free(buffer);
 34                 close(fd);
 35                 return (0);
 36         }
 37
 38         /* write */
 39         n_wrote = write(STDOUT_FILENO, buffer, n_read);
 40         if (n_wrote == -1)
 41         {
 42                 free(buffer);
 43                 close(fd);
 44                 return (0);
 45         }
 46
 47         close(fd);
 48         return (n_read);
 49
 50 }
