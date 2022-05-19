CFLAGS = -no-pie -m32 -O0 -Wall -fno-stack-protector -Wno-unused-function -mpreferred-stack-boundary=2
LDFLAGS = -no-pie -m32 -mpreferred-stack-boundary=2

.PHONY: all clean public

all: main

main: main.o

main.o: main.c

clean:
	-rm -f main main.o