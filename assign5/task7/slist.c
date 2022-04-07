#ifndef _slist_H_
#define _slist_H_

#include <stdint.h>
#include "snode.h"
#include "slist.h"

struct slist
{
	struct snode *front; // front node
	struct snode *back;	 // back node
};

/**
 * Allocates new slist dynamically.
 *
 * @return pointer to the list
 */
struct slist *slist_create()
{
	struct slist *new_slist = malloc(sizeof(struct snode));

	new_slist->front = NULL;
	new_slist->back = NULL;

	return new_slist;
}

/**
 * Inserts new node in slist after the last node.
 *
 * @param l pointer to the list (non-NULL)
 * @param str pointer to a C string to store in new list node
 * returns a pointer to the newly added node
 */
struct snode *slist_add_back(struct slist *l, char *str)
{
	struct snode *p = malloc(sizeof(struct snode));
	p = snode_create(str);

	if (NULL == l->front)
	{
		l->front = p;
		l->back = p;
		return p;
	}
	else
	{
		l->back->next = p;
		l->back = p;
		return p;
	}
}

/**
 * Inserts new node in slist before the first node.
 *
 * @param l pointer to the list (non-NULL)
 * @param str pointer to a C string to store in new list node
 * returns a pointer to the newly added node
 */
struct snode *slist_add_front(struct slist *l, char *str)
{
	struct snode *p = malloc(sizeof(struct snode));
	p = snode_create(str);

	if (NULL == l->front)
	{
		l->front = p;
		l->back = p;
		return p;
	} // else {
	l->back = l->front;
	l->front = p;

	//}
	return p;
}

/**
 * Returns the first snode with the given string.
 *
 * @param l pointer to the list (non-NULL)
 * @parap str pointer to a string
 * @return struct snode* or NULL if no match
 */
struct snode *slist_find(struct slist *l, char *str)
{
	struct snode *t = l->front;
	while (t != NULL)
	{
		if (strcmp(t->str, str) == 0)
		{
			return t;
		}
		t = t->next;
	}
	return t;
	free(t);
}

/**
 * Deallocate a list and all snodes
 *
 * @param l pointer to the list
 */
void slist_destroy(struct slist *l)
{ 

	struct snode *p_list;
	p_list = l->front;
	while (l->front != NULL)
	{
		l->front = l->front->next;
		free(p_list->str);
		free(p_list);
		p_list = l->front;
	}
	l->front = NULL;
	l->back = NULL;
}

/**
 * Traverse the list and print the content of each node.
 *
 * @param l pointer to the list (non-NULL)
 */
void slist_traverse(struct slist *l)
{

	struct snode *temp = l->front;
	while (temp != NULL)
	{
		printf("Node:%s \n ", temp->str);
		temp = temp->next;
	}
	free(temp);
}

/**
 * Returns the number of elements in the list (nodes).
 *
 * @param l pointer to the list (non-NULL)
 */
uint32_t slist_length(struct slist *l)
{
	int len;
	struct snode *temp = l->front;

	while (NULL != temp)
	{
		++len;
		temp = temp->next;
	}
	return len;
}

/**
 * Deletes the first snode with the given string.
 *
 * @param l pointer to the list (non-NULL)
 * @parap str pointer to a string
 */
void slist_delete(struct slist *l, char *str)
{
	struct snode *temp = l->front, *prev = NULL;
	if (temp != NULL && temp->next == str)
	{ 
		temp = temp->next;
		free(temp);
		return temp;
	}
	while (temp != NULL && temp->next != str)
	{ 
		prev = temp;
		temp = temp->next;
	}
	prev->next = temp->next;
	free(temp);

	return temp;
}

#endif /* _slist_H_ */