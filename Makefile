Sistema:	Console.o game.o user.o userAdmin.o userSeller.o sony.o microsoft.o bandai.o konami.o squareEnix.o electronicArts.o sega.o ubisoft.o nintendo.o sistema.o Microsoft.o Sony.o Nintendo.o Management.o Sale.o
	g++ Console.o game.o user.o userAdmin.o userSeller.o sony.o microsoft.o bandai.o konami.o squareEnix.o electronicArts.o sega.o ubisoft.o nintendo.o sistema.o Microsoft.o Sony.o Nintendo.o Management.o Sale.o -o Sistema

sistema.o:	sistema.cpp 
	g++ -c sistema.cpp

# Usuarios
userAdmin.o:	userAdmin.h userAdmin.cpp user.h
	g++ -c userAdmin.cpp

userSeller.o:	userSeller.h userSeller.cpp user.h
	g++ -c userSeller.cpp

user.o: user.h user.cpp Console.h Microsoft.h Sony.h Nintendo.h  game.h bandai.h electronicArts.h konami.h microsoft.h nintendo.h sega.h sony.h squareEnix.h ubisoft.h 
	g++ -c user.cpp

# Videojuegos

game.o:	game.h game.cpp Console.h
	g++ -c game.cpp -std=c++11 -lboost_serialization

ubisoft.o:	ubisoft.h ubisoft.cpp game.h
	g++ -c ubisoft.cpp -std=c++11 -lboost_serialization

sega.o:	sega.h sega.cpp game.h
	g++ -c sega.cpp -std=c++11 -lboost_serialization

electronicArts.o:	electronicArts.h electronicArts.cpp game.h
	g++ -c electronicArts.cpp -std=c++11 -lboost_serialization

squareEnix.o:	squareEnix.h squareEnix.cpp game.h
	g++ -c squareEnix.cpp -std=c++11 -lboost_serialization

konami.o:	konami.h konami.cpp game.h
	g++ -c konami.cpp -std=c++11 -lboost_serialization

bandai.o:	bandai.h bandai.cpp game.h
	g++ -c bandai.cpp -std=c++11 -lboost_serialization

nintendo.o:	nintendo.h nintendo.cpp game.h
	g++ -c nintendo.cpp -std=c++11 -lboost_serialization

microsoft.o:	microsoft.h microsoft.cpp game.h
	g++ -c microsoft.cpp -std=c++11 -lboost_serialization

sony.o:	sony.h sony.cpp game.h
	g++ -c sony.cpp -std=c++11 -lboost_serialization

# Consolas.

Microsoft.o:	Microsoft.h Microsoft.cpp Console.h
	g++ -c Microsoft.cpp -std=c++11 -lboost_serialization

Sony.o:	Sony.h Sony.cpp Console.h
	g++ -c Sony.cpp -std=c++11 -lboost_serialization

Nintendo.o:	Nintendo.h Nintendo.cpp Console.h
	g++ -c Nintendo.cpp -std=c++11 -lboost_serialization

Console.o:	Console.h Console.cpp
	g++ -c Console.cpp  -std=c++11 -lboost_serialization

# Management.

Management.o:	Management.h Management.cpp
	g++ -c Management.cpp

# Sale.

Sale.o:	Sale.h Sale.cpp
	g++ -c Sale.cpp
	
clean:	
	rm *.o Sistema 	