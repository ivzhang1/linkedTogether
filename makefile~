all: driver.o str_funcs.o
	gcc driver.o str_funcs.o

driver.o: driver.c str.h
	gcc -c driver.c

str_funcs.o: str_funcs.c str.h
	gcc -c str_funcs.c
