Sistema:	Console.o game.o user.o userAdmin.o userSeller.o sony.o microsoft.o bandai.o konami.o squareEnix.o electronicArts.o sega.o ubisoft.o nintendo.o sistema.o Microsoft.o Sony.o Nintendo.o Management.o Sale.o
	g++ Console.o game.o sony.o microsoft.o bandai.o konami.o squareEnix.o electronicArts.o sega.o ubisoft.o nintendo.o sistema.o Microsoft.o Sony.o Nintendo.o Management.o Sale.o -o Sistema

sistema.o:	sistema.cpp 
	g++ -c sistema.cpp

# Usuarios
userAdmin.o:	userAdmin.h userAdmin.cpp user.h
	g++ -c user.cpp

userSeller.o:	userSeller.h userSeller.cpp user.h
	g++ -c userSeller.cpp

# Videojuegos

game.o:	game.h game.cpp Console.h
	g++ -c game.cpp

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

user.o: user.h user.cpp Console.h Microsoft.h Sony.h Nintendo.h  game.h bandai.h electronicArts.h konami.h microsoft.h nintendo.h sega.h sony.h squareEnix.h ubisoft.h 
	g++ -c user.cpp	

# Consolas.

Microsoft.o:	Microsoft.h Microsoft.cpp Console.h
	g++ -c Microsoft.cpp

Sony.o:	Sony.h Sony.cpp Console.h
	g++ -c Sony.cpp

Nintendo.o:	Nintendo.h Nintendo.cpp Console.h
	g++ -c Nintendo.cpp

Console.o:	Console.h Console.cpp
	g++ -c Console.cpp

# Management.

Management.o:	Management.h Management.cpp
	g++ -c Management.cpp

# Sale.

Sale.o:	Sale.h Sale.cpp
	g++ -c Sale.cpp
	
clean:	
	rm *.o Sistema 	