
SRC= test_Mark.c\
multifile/mark.c\
multifile/markmain.c

OBJ=test_Mark.o\
mark.o\
markmain.o

INC= src

CFLAGS= -I$(INC)

a.out : $(OBJ) 
	$(cc) $^ -I$(INC) -o $@

%.o:multifile/%.c 
	gcc $^ -I$(INC) -c	
	
run : target
	./a.out

clean:
	rm a.out *.o multifile/*.o
