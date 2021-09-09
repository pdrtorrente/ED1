all : prog

run : 
	./prog.exe

main.o : main.c
	gcc -o main.o -c main.c

criadestroi.o : criadestroi.c
	gcc -o criadestroi.o -c criadestroi.c

infos.o : infos.c
	gcc -o infos.o -c infos.c

insere.o : insere.c
	gcc -o insere.o -c insere.c

remove.o : remove.c
	gcc -o remove.o -c remove.c

busca.o : busca.c
	gcc -o busca.o -c busca.c

prog : main.o criadestroi.o infos.o insere.o remove.o busca.o
	gcc -o prog main.o criadestroi.o infos.o insere.o remove.o busca.o

clean:
	-del -f *.exe *.o