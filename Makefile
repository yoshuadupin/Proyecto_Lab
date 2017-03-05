Sistema:	Console.o game.o user.o userAdmin.o userSeller.o sony.o microsoft.o bandai.o konami.o squareEnix.o electronicArts.o sega.o ubisoft.o nintendo.o sistema.o
	g++ game.o sony.o microsoft.o bandai.o konami.o squareEnix.o electronicArts.o sega.o ubisoft.o nintendo.o sistema.o -o Sistema

sistema.o:	sistema.cpp 
	g++ -c sistema.cpp

#Usuarios
userAdmin.o:	userAdmin.h userAdmin.cpp user.h
	g++ -c user.cpp

userSeller.o:	userSeller.h userSeller.cpp user.h
	g++ -c userSeller.cpp

#Videojuegos
ubisoft.o:	ubisoft.h ubisoft.cpp game.h
	g++ -c ubisoft.cpp

sega.o:	sega.h sega.cpp game.h
	g++ -c sega.cpp

electronicArts.o:	electronicArts.h electronicArts.cpp game.h
	g++ -c electronicArts.cpp

squareEnix.o:	squareEnix.h squareEnix.cpp game.h
	g++ -c squareEnix.cpp

konami.o:	konami.h konami.cpp game.h
	g++ -c konami.cpp

bandai.o:	bandai.h bandai.cpp game.h
	g++ -c bandai.cpp

nintendo.o:	nintendo.h nintendo.cpp game.h
	g++ -c nintendo.cpp

microsoft.o:	microsoft.h microsoft.cpp game.h
	g++ -c microsoft.cpp

sony.o:	sony.h sony.cpp game.h
	g++ -c sony.cpp

game.o:	game.h game.cpp Console.h
	g++ -c game.cpp

user.o: user.h user.cpp
	g++ -c user.cpp	

Console.o: Console.h Console.cpp
	g++ -c Console.cpp

clean:	
	rm *.o Sistema 	