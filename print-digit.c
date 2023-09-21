#include "main.h"

/**
* print_range - prints a range of char addresses
* @start: the adress it starts with
* @stop: the adress it stops
* @except: excluding address
*
* Return: no of bytes printed
*/
int print_range(char *start, char *stop, char *except)
{
int total = 0;

while (start <= stop)
{
if (start != except)
total += _putchar(*start);
start++;
}
return (total);
}

/**
* print_rev - prints the string reverse
* @arg: string
* @params: parameters struct
*
* Return: no of  bytes printed
*/
int print_rev(va_list arg, params_t *params)
{
int len, total = 0;
char *str = va_arg(arg, char *);
(void)params;

if (str)
{
for (len = 0; *str; str++)
len++;
str--;
for (; len > 0; len--, str--)
sum += _putchar(*str);
}
return (sum);
}

/**
* print_rot13 - This prints the string in rot13
* @arg: string
* @params: parameters struct
*
* Return: no of the bytes printed
*/
int print_rot13(va_list arg, params_t *params)
{
int i, index;
int count = 0;
char arr[] =
"NOPQRSTUVWXYZABCDEFGHIJKLM      nopqrstuvwxyzabcdefghijklm";
char *a = va_arg(arg, char *);
(void)params;

i = 0;
index = 0;
while (a[i])
{
if ((a[i] >= 'A' && a[i] <= 'Z')
|| (a[i] >= 'a' && a[i] <= 'z'))
{
index = a[i] - 65;
count += _putchar(arr[index]);
}
else
count += _putchar(a[i]);
i++;
}
return (count);
}
