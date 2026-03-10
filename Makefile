CC = gcc
CFLAGS = -Wall

SRC = src/main.c src/sensor.c src/controller.c src/logger.c
TARGET = embedded_sim

all:
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

run: all
	./$(TARGET)

clean:
	rm -f $(TARGET) src/system.log