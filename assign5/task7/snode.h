#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef _SNODE_H_
#define _SNODE_H_

struct snode
{
  // TODO: change str to dynamic allcoation
  //  char str[101];
  //  int length;
  //  struct snode *next;
  struct snode *next;
  char *str;
};

// TODO: change prototypes of functions to remove
// length
struct snode *snode_create(char *s);
void snode_destroy(struct snode *s);

#endif /* _snode_H_ */