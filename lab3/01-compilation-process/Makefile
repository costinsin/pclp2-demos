all:

source: link

preprocess: source.c
	gcc -E -o preprocessed/preprocessed-source.c source.c
	gcc -E -o preprocessed/preprocessed-divide.h divide.h
	gcc -E -o preprocessed/preprocessed-multiply.h multiply.h

compile: source.c add.c multiply.c divide.c
	gcc -S -masm=intel -m32 -o compiled/source.asm source.c
	gcc -S -masm=intel -m32 -o compiled/add.asm add.c
	gcc -S -masm=intel -m32 -o compiled/multiply.asm multiply.c
	gcc -S -masm=intel -m32 -o compiled/divide.asm divide.c

assemble: source.c add.c multiply.c divide.c
	gcc -c -o assembled/source.o source.c
	gcc -c -o assembled/add.o add.c
	gcc -c -o assembled/multiply.o multiply.c
	gcc -c -o assembled/divide.o divide.c

link: assemble
	gcc -o linked/source assembled/source.o assembled/add.o assembled/multiply.o assembled/divide.o

clean:
	rm -rf source
	rm -rf *.o
	rm -rf preprocessed/*
	rm -rf compiled/*
	rm -rf assembled/*
	rm -rf linked/*