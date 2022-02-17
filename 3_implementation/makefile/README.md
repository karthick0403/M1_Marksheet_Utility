#Target name : Dependencies
#<TAB>Command
SRC= mark.c mark.h markmain.c
INC=multifile
a.out : $(SRC) $(INC)
	gcc $^ -I$(multifile) -o $@

run : target
	./a.out

clean:
	rm a.out
