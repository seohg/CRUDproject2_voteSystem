main : main.c user.o vote.o
	gcc -o main main.c user.o vote.o
user.o : user.h user.c 
	gcc -c -o user.o user.c 
vote.o : vote.h vote.c 
	gcc -c -o vote.o vote.c 
clean:
	rm *.o main
