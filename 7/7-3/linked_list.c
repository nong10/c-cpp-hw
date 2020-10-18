#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

/*
	add a number to the end of the list
*/
void add_list(struct list* l, int newValue) {
	#if defined(DEBUG)
	printf("add_list\n");
	#endif
	if(l -> next == l) { // when l contains no value
		#if defined(DEBUG)
		printf("First value to be input\n");
		#endif
		l -> value = newValue;
		l -> next = NULL;
		return;
	}
	struct list* new_list = (struct list*)malloc(sizeof(struct list));
	struct list* p = l;
	#if defined(DEBUG)
	int count = 0;
	#endif
	while(p -> next != NULL) { // find the end of the list
		p = p -> next;
		#if defined(DEBUG)
		printf("while\n");
		count++;
		#endif
	}
	#if defined(DEBUG)
	printf("loop %d times\n", count);
	#endif
	p -> next = new_list;
	new_list -> value = newValue;
	new_list -> next = NULL;
	return;
}

/*
	add a number to the front of the list
*/
struct list* add_list_front(struct list* l, int newValue) {
	#if defined(DEBUG)
	printf("add_list_front\n");
	#endif
	if(l -> next == l) { // when l contains no value
		#if defined(DEBUG)
		printf("The first value to put\n");
		#endif
		l -> value = newValue;
		l -> next = NULL;
		return l;
	}
	struct list* new_list = (struct list*)malloc(sizeof(struct list));
	new_list -> value = newValue;
	new_list -> next = l;
	return new_list;
}

struct list* remove_first_element(struct list* l) {
	#if defined(DEBUG)
	printf("remove_first_element\n");
	#endif
	if(l -> next != l) { // when l contains no value
		if(l -> next == NULL) {
			l -> next = l;
			return l;
		}
		struct list* next_list;
		next_list = l -> next;
		free(l);
		return next_list;
	}
	else if(l -> next == l) {
		return l;
	}
	return l;
}

void free_list(struct list* l) {
	#if defined(DEBUG)
	printf("free_list\n");
	#endif
	struct list* p = l -> next;
	struct list* tmp_p;
	free(l);
	while(p != NULL) {
		tmp_p = p;
		p = tmp_p -> next;
		free(tmp_p);
	}
	return;
}

void print_list(struct list* l) {
	#if defined(DEBUG)
	printf("print_list\n");
	#endif
	if(l -> next == l) { // when l contains no value
		printf("\n");
		return;
	}
	while(l != NULL) {
		printf("%d ", l -> value);
		l = l -> next;
	}
	printf("\n");
	return;
}
