all: driver.o l_list.o
	gcc driver.o l_list.o

driver.o: driver.c node.h
	gcc -c driver.c

l_list.o: l_list.c node.h
	gcc -c l_list.c

run: a.out
	./a.out
