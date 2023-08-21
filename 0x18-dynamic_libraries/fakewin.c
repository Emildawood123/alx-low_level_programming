/**
 * fake - taht return element of array
 * Return: el
 */
int fake(void)
{
int luck[] = {8, 7, 9, 23, 74};
static int i;
i = 0;
return (luck[i++]);
}
