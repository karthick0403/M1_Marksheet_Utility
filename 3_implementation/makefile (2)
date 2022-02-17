#Target name : Dependencies
#<TAB>Command
SRC= test_dep.c dep.c main.c
INC=multifile
a.out : $(SRC) $(INC)
	gcc $^ -I$(multifile) -o $@

run : target
	./a.out

clean:
	rm a.out