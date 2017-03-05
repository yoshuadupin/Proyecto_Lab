Sistema:	game.o sony.o microsoft.o
	g++ game.o sony.o microsoft.o -o Sistema

microsoft.o:	microsoft.h microsoft.cpp game.h
	g++ -c microsoft.cpp

sony.o:	sony.h sony.cpp game.h
	g++ -c sony.cpp
		
game.o:	game.h game.cpp
	g++ -c game.cpp

clean:	
	rm *.o Sistema 	