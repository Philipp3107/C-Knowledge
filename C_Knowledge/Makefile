CC = gcc # Flag for implicit rules
CFLAGS = -Wall

.PHONY: all 
all: schnick clean

schnick.o: schnick.c
	$(CC) $(CFLAGS) -c schnick.c
	
schnick_funcs.o: schnick_funcs.c
	$(CC) $(CFLAGS) -c schnick_funcs.c
	
schnick: schnick.o schnick_funcs.o
		$(CC) $(CFLAGS) schnick_funcs.o schnick.o -o schnick
		
clean: *.o
	rm $^



