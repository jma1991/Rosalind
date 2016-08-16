CC=gcc
CFLAGS=-I/home/jashmore/include -g -std=gnu11 -O3 -Wall
LDFLAGS=-L/home/jashmore/lib
LDLIBS=-lcs50 -lhts

outdir=../bin

all: $(TARGET)

$(outdir)/$(TARGET): $(TARGET).c
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^ $(LDLIBS)
