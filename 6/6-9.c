/*
	6-9 extends 6-8
*/
#include <stdio.h>
#include <stdlib.h>

//#define DEBUG

struct list{
	int value;
	struct list* next;
};

void add_list(struct list* l, int newValue); 
struct list* add_list_front(struct list* l, int newValue); 
struct list* remove_first_element(struct list* l); 
void free_list(struct list* l); 
void print_list(struct list* l); 
struct list* insert_list(struct list* l, int position, int newValue);
struct list* reverse_list(struct list* l);

int main() {
	char ch = 'o';
	struct list* l = (struct list*)malloc(sizeof(struct list));
	l -> next = l;
	int tmp, tmp2;
	while(ch != 'q') {
		scanf("%c", &ch);
		getchar();
		switch(ch) {
			case 'a':
				#if defined(DEBUG)
				printf("a\n");
				#endif
				scanf("%d", &tmp);
				getchar();
				add_list(l, tmp);
				break;
			case 'b':
				#if defined(DEBUG)
				printf("b\n");
				#endif
				scanf("%d", &tmp);
				getchar();
				l = add_list_front(l, tmp);
				break;
			case 'r':
				#if defined(DEBUG)
				printf("r\n");
				#endif
				l = remove_first_element(l);
				break;
			case 'q':
				#if defined(DEBUG)
				printf("q\n");
				#endif
				if(l -> next == l) {
					free(l);
					break;
				}
				free_list(l);
				break;
			case 'p':
				#if defined(DEBUG)
				printf("p\n");
				#endif
				print_list(l);
				break;
			case 'i':
				#if defined(DEBUG)
				printf("i\n");
				#endif
				scanf("%d", &tmp);
				getchar();
				scanf("%d", &tmp2);
				getchar();
				l = insert_list(l, tmp, tmp2);
			case 'R': // 'R' for reverse the whole list
				#if defined(DEBUG)
				printf("R\n");
				#endif
				l = reverse_list(l);
		}
	}
	return 0;
}

/*
	add a number to the end of the list
*/
void add_list(struct list* l, int newValue) {
	#if defined(DEBUG)
	printf("add_list\n");
	#endif
	if(l -> next == l) {
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
	if(l -> next == l) {
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
	if(l -> next != l) {
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
		#if defined(DEBUG)
		printf("while\n");
		#endif
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
	if(l -> next == l) {
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

struct list* insert_list(struct list* l, int position, int newValue) {
	#if defined(DEBUG)
	printf("insert_list\n");
	#endif
	struct list* newList = (struct list*)malloc(sizeof(struct list));
	if(position == 0) {
		if(l -> next == l) {
			newList -> value = newValue;
			newList -> next = NULL;
			return newList;
		}
		newList -> value = newValue;
		newList -> next = l;
		return newList;
	}
	int count = 0;
	struct list* list1 = l; // the struct list after the new list
	struct list* list0;		// the struct list before the new list
	while(count < position) {
		list0 = list1;
		list1 = list1 -> next;
		if(list0 -> next == NULL) {
			printf("Invalid Position!\n");
			return l;
		}
		count ++;
	}
	// create new struct list
	list0 -> next = newList;
	newList -> value = newValue;
	newList -> next = list1;
	return l;
}

/*
	loop add_list, remove_first_element; return new struct list pointer	
*/
struct list* reverse_list(struct list* l) {
	if(l -> next == l) { // null value exception
		#if defined(DEBUG)
		printf("struct list contains no value\n");
		#endif
		return l;
	}
	struct list* p = l;
	int count = 1; // count the amount of list
	while(p -> next != NULL) { // find the end of the list
		p = p -> next;
		#if defined(DEBUG)
		printf("while1\n");
		#endif
		count++;
	}
	int length = count;
	count = count - 2;
	struct list* tmp_p = p; // walk through list and add elements at the end
	while(tmp_p != l) {
		#if defined(DEBUG)
		printf("while2\n");
		#endif
		tmp_p = l;
		for(int i = 0; i < count; i ++) {
			#if defined(DEBUG)
			printf("for1\n");
			#endif
			tmp_p = tmp_p -> next;
		}
		count --;
		add_list(tmp_p, tmp_p -> value);
	}
	for(int i = 0; i < length - 1; i ++) {
		l = remove_first_element(l);
	}
	return p;
}
