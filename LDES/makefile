all: prog

run:
	./prog.exe

main.o: main.c
	gcc -o main.o -c main.c

criadestroi.o: criadestroi.c
	gcc -o criadestroi.o -c criadestroi.c

infos.o: infos.c
	gcc -o infos.o -c infos.c

insereremove.o: insereremove.c
	gcc -o insereremove.o -c insereremove.c

busca.o: busca.c
	gcc -o busca.o -c busca.c

prog: main.o criadestroi.o infos.o insereremove.o busca.o
	gcc -o prog main.o criadestroi.o infos.o insereremove.o busca.o

clear:
	-del -f *.exe *.o