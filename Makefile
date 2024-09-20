#Makefile for revlines program
#
#Nick Lodge CSIS301
#
CFILES=revlines.c get_line.c reverse.c
OFILES=$(CFILES:.C=.o)
CC=clang

revlines:	$(OFILES)
		$(CC) -o revlines $(OFILES)

clean::
		/bin/rm -f revlines $(OFILES)