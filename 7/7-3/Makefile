# 'make clean' to clear all .o and executable
# 'make' to check update, compile ,and generate executable

use_linked_list : linked_list.o use_linked_list.o linked_list.h
	gcc -o use_linked_list linked_list.o use_linked_list.o

linked_list.o : linked_list.h

use_linked_list.o : linked_list.h

.PHONY: clean

clean: 
	rm *.o use_linked_list

