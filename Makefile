CC= gcc
CFLAGS = -W -Wall
TARGET= store
DTARGET = store_debug
OBJECTS= main.c product.o manager.o
all : $(TARGET)
$(TARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

$(DTARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) -DDEBUG -o $@ $^

clean:
	rm *.o store
