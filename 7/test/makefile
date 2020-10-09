
.PHONY: all clean

CC = gcc

LINKERFLAG = -lm

SRCS := $(wildcard *.c)

BINS := $(SRCS:%.c=%)

all: ${BINS}

%: %.o
	@echo "Checking.."

%.o: %.c
	@echo "Creating object.."
	touch file-{1..10}.txt

clean:
	@echo "cleaning up..."
	rm -rvf *.o ${BINS}