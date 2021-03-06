CC =  gcc
CFLAGS = -g -Wall 

all: isort txtfind

isort: isort.o
	$(CC) isort.o -o isort

txtfind: txtfind.o
	$(CC) txtfind.o -o txtfind

%.o:%.c
	$(CC) -c $(CFLAGS) $< -o $@

.PHONY : clean all
clean: 
	rm -f *.o *.a *.so *.gch isort txtfind