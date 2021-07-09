CC=g++
CFLAGS=-Wall

shop_calculator.exe: main_obj.o
	$(CC) -o shop_calculator.exe main_obj.o

main_obj.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp -o main_obj.o

.PHONY: clean

clean:
	rm -f main_obj.o shop_calculator.exe

