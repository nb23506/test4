all: program test

program: program.c
    gcc -c program.c -o program.o

test: program.o test.c
    gcc program.o test.c -o test_program

clean:
    rm -f *.o test_program
