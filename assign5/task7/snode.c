#include <stdio.h>
#include "snode.h"
#include <string.h>
#include <stdlib.h>

struct snode *snode_create(char *s)
{
	// TODO: implement snode_create, change the prototype to
	// match with header file
	// return node;
	struct snode *n = malloc(sizeof(struct snode));
	n->str = malloc(sizeof(char) * (strlen(s) + 1));
	strcpy(n->str, s);
	n->next = NULL;

	return n;
}
void snode_destroy(struct snode *s)
{
	// TODO: implement snode_destroy
	char *string = s->str;
	free(string);
};