CC		:= gcc
HTSDIR	:= htslib-1.3/install/include/htslib
CFLAGS	:= -I $(HTSDIR) -L $(HTSDIR)
LIBS	:= htslib-1.3/install/lib/libhts.a -lz -pthread
SOURCES	:= $(wildcard *.c)
TARGETS	:= $(SOURCES:.c=.o)

all: $(TARGETS)

%.o: %.c
	$(CC) $(CFLAGS) $^ -o $@ $(LIBS)
