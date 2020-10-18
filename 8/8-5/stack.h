typedef struct stack{
	unsigned int count; //top???
	char array[100][30];
} Stack;

void push(char str[30], Stack* ps);
void pop(char str[30], Stack* ps);
void empty(Stack* ps);
void init(Stack* ps);
int is_empty(Stack* ps);
int is_full(Stack* ps);
