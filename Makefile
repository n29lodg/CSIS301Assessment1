#Makefile for revlines program
#
#Nick Lodge CSIS301
#
CFILES=revlines.c get_line.c
OFILES=$(CFILES:.C=.o)
CC=clang

revlines:	$(OFILES)
		$(CC) -o gcdmain $(OFILES)

clean::
		/bin/rm -f revlines $(OFILES)