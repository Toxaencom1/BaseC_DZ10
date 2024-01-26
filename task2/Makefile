all: app

app: main.o functions.o functions.h
	gcc -o app main.o functions.o

main.o: main.c 
	gcc -c -o main.o main.c

functions.o: functions.c 
	gcc -c -o functions.o functions.c

clean:
	del *.o 
	del app.exe
