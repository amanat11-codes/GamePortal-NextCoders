CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -Iheaders

# Final program name
TARGET = gameportal

# List every object file by hand
OBJS = build/Calendar.o build/FindTheSum.o build/gameManager.o build/gameportal.o build/helpers.o build/Rand_Word.o build/utility.o

# Default rule: build the final program
all: $(TARGET)

# Link all object files into the final executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o gameportal build/Calendar.o build/FindTheSum.o build/gameManager.o build/gameportal.o build/helpers.o build/Rand_Word.o build/utility.o

# Compile each .c file into its own .o file, one rule per file
build/Calendar.o: src/Calendar.c
	$(CC) $(CFLAGS) -c src/Calendar.c -o build/Calendar.o

build/FindTheSum.o: src/FindTheSum.c
	$(CC) $(CFLAGS) -c src/FindTheSum.c -o build/FindTheSum.o

build/gameManager.o: src/gameManager.c
	$(CC) $(CFLAGS) -c src/gameManager.c -o build/gameManager.o

build/gameportal.o: src/gameportal.c
	$(CC) $(CFLAGS) -c src/gameportal.c -o build/gameportal.o

build/helpers.o: src/helpers.c
	$(CC) $(CFLAGS) -c src/helpers.c -o build/helpers.o

build/Rand_Word.o: src/Rand_Word.c
	$(CC) $(CFLAGS) -c src/Rand_Word.c -o build/Rand_Word.o

build/utility.o: src/utility.c
	$(CC) $(CFLAGS) -c src/utility.c -o build/utility.o

clean:
	rm -f build/*.o gameportal