# SINGLY LINKED LIST IN C

**0. Print list:** Write a function that prints all the elements of a list_t list.
+ Prototype: size_t print_list(const list_t *h);
+ Return: the number of nodes
+ Format: see example
+ If str is NULL, print [0] (nil)
+ You are allowed to use printf

**1. List length:** Write a function that returns the number of elements in a linked list_t list.
+ Prototype: size_t list_len(const list_t *h);

**2. Add node:** Write a function that adds a new node at the beginning of a list_t list.
+ Prototype: list_t *add_node(list_t **head, const char *str);
+ Return: the address of the new element, or NULL if it failed
+ str needs to be duplicated
+ You are allowed to use strdup
