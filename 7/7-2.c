#include <stdio.h>
#include <stdlib.h>
//#define DEBUG

struct list{
	char content;
	struct list* last;
	struct list* next;
};

struct list* add_list_front(struct list* l, char newCh);
void print_list(struct list* l);
struct list* remove_corresbonding_element(struct list* l, char sample);
void print_list_backward(struct list* l);
void free_list(struct list* l);

int main() {
	char command = '0';
	struct list* l = (struct list*)malloc(sizeof(struct list)); 
	l -> next = l;
	l -> last = NULL;
	char tmpChar;
	while(command != '5') {
		scanf("%c", &command);
		getchar();
		switch(command) {
			case '1':
				scanf("%c", &tmpChar);
				getchar();
				l = add_list_front(l, tmpChar);
				break;
			case '2':
				scanf("%c", &tmpChar);
				getchar();
				l = remove_corresbonding_element(l, tmpChar);
				break;
			case '3':
				print_list(l);
				break;
			case '4':
				print_list_backward(l);
				break;
			case '5':
				free_list(l);
				break;
		}
	}
}

struct list* add_list_front(struct list* l, char newCh) {
	if(l -> next == l) { // when l contains no value
		l -> content = newCh;
		l -> next = NULL;
		return l;
	}
	struct list* new_list = (struct list*)malloc(sizeof(struct list));
	new_list -> content = newCh;
	new_list -> next = l;
	l -> last = new_list;
	new_list -> last = NULL;
	return new_list;
}

void print_list(struct list* l) {
	if(l -> next == l) { // when l contains no value
		printf("\n");
		return;
	}
	while(l != NULL) {
		printf("%c ", l -> content);
		#if defined(DEBUG)
		if(l -> next == NULL) {
			printf("next: NULL ");
		} 
		if(l -> last == NULL) {
			printf("last: NULL ");
		} 
		#endif
		l = l -> next;
	}
	printf("\n");
	return;
}


void print_list_backward(struct list* l) {
	if(l -> next == l) { // when l contains no value
		printf("\n");
		return;
	}
	while(l -> next != NULL) { // find the end of the list
		l = l -> next;
		#if defined(DEBUG)
		printf("while\n");
		#endif
	}
	while(l != NULL) {
		printf("%c ", l -> content);
		l = l -> last;
	}
	printf("\n");
}

struct list* remove_corresbonding_element(struct list* l, char sample) {
	if(l -> next == l) { // when l has no content
		#if defined(DEBUG)
		printf("l has no content\n");
		#endif
		return l;
	}
	// l is the pointer of the first struct list of the list
	int op = 0;
	struct list* cursor = l; //
	struct list* tmp;
	while(op == 0) {
		if(cursor -> next == NULL) { // control while to stop
			op = 1;
		}
		if(cursor -> content == sample) {
			// when list contains only one data
			if(cursor -> next == NULL && cursor -> last == NULL) { 
				#if defined(DEBUG)
				printf("l is the only content\n");
				#endif
				cursor -> next = cursor;
				return cursor;
			}
			// corresponding data at 1st place
			if(cursor -> last == NULL) {
				#if defined(DEBUG)
				printf("corresponding data at 1st place\n");
				#endif
				tmp = cursor;
				cursor = cursor -> next; // move to next data
				l = cursor;
				l -> last = NULL;
				free(tmp);
			}
			// when corresponding data at the end
			else if(cursor -> next == NULL) {
				#if defined(DEBUG)
				printf("data at the end\n");
				#endif
				tmp = cursor;
				cursor -> last -> next = NULL;
				free(tmp);
			}
			// when corresponding data in the mid
			else {
				#if defined(DEBUG)
				printf("(normal) data in mid of the list\n");
				#endif
				tmp = cursor;
				cursor -> last -> next = cursor -> next;
				cursor -> next -> last = cursor -> last;
				cursor = cursor -> next; // move to next data
				free(tmp);
			}
		}
		else {

			cursor = cursor -> next;
		}
	}
	return l;
}

void free_list(struct list* l) {
	#if defined(DEBUG)
	printf("free_list\n");
	#endif
	if(l -> next == l) { // when l has no content
		#if defined(DEBUG)
		printf("l has no content\n");
		#endif
		free(l);
		return;
	}
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
