CC = g++
CFLAGS = -g -Wall 
LINKS = -framework OpenGL -framework GLUT -lglfw -lGLEW
TARGET = cube
SRC_FILES = $(wildcard *.cpp)
OBJS = ${SRC_FILES:.c=.o}

all:
	$(CC) $(CFLAGS) -c $(SRC_FILES)
	$(CC) $(CFLAGS) $(LINKS) $(OBJS) -o $(TARGET)

clean:
	$(RM) $(OBJS)
	$(RM) $(TARGET)
