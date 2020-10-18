struct list{
	int value;
	struct list* next;
};

void add_list(struct list* l, int newValue); 
struct list* add_list_front(struct list* l, int newValue); 
struct list* remove_first_element(struct list* l); 
void free_list(struct list* l); 
void print_list(struct list* l); 
