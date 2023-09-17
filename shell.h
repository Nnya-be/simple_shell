#ifndef SHELL_H_
#define SHELL_H_
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
/**
 *struct Node - A struct for the nodes for path
 *@dir: Directory in the node
 *@next_node: Next node pointer
 */
typedef struct Node
{
	char *dir;
	struct Node *next_node;
} path_node;
struct Node *path_link(void);

/* The Part of String Manipulations */
int _strlen(char *);
char *_strchr(char *, char);
char *_strncpy(char *, char *, int);
int _strncmp(const char *, const char *, size_t);
char *_strtok(char *, const char *);

void free_linked_list(struct Node *);
char *_getenv(const char *);
int _setenv(const char *, const char *, int);
void print_path(void);
#endif
