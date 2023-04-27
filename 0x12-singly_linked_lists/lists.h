#ifndef LISTS_H
#define LISTS_H
/**
 * struct list_s - that linkedlist
 * @str: data
 * @len: lenght of data
 * @next: goto next node
 *
 * Description: any thing
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
size_t print_list(const list_t *h);
#endif
