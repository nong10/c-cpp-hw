#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

int main() {
	char ch = 'o';
	struct list* l = (struct list*)malloc(sizeof(struct list));
	l -> next = l;
	int tmp;
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
				if(l -> next == l) { // when l contains no value
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
		}
	}
	return 0;
}
