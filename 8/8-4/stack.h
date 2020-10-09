/*
	CH-230-A
	a8_p4.[c]
	Zixiang Wang
	zixwang@jacobs-university.de
*/

/*
	from 1 - 12
	0 represent no content
*/
typedef struct stack{
	unsigned int count; //top???
	int array[12];
} Stack;

void push(int x, Stack* ps);
void pop(Stack* ps);
void empty(Stack* ps);
void init(Stack* ps);
int is_empty(Stack* ps);
int is_full(Stack* ps);