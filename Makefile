RAYLIB=-lraylib
CXX=gcc 
TARGET=sudoku
WARN=-Wall
CXXFLAGS=$(WARN) $(RAYLIB) 
OBJS=main.o

all: $(OBJS)
	$(CXX) $(OBJS) -o $(TARGET) $(CXXFLAGS)
	@rm -rf *.o

main.o: main.c
	$(CXX) -c main.c $(CXXFLAGS)

clean:
	rm -rf *.o
