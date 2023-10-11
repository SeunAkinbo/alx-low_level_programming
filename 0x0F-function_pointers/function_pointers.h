#ifndef FUNCTION_POINTERS
#define FUNCTION_POINTERS

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, unsigned int size, void (*action)(int));

#endif
