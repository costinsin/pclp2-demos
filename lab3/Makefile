CFLAGS = -m32 -g

SRCS = $(wildcard *.c)

PROGS = $(patsubst %.c,%,$(SRCS))
EXECS = $(shell ls | grep -v "\.\|Makefile")

all: $(PROGS)

%: %.c
        $(CC) $(CFLAGS)  -o $@ $<

clean:
        rm $(EXECS)