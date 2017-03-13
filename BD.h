
#include <boost/serialization/vector.hpp>

#include "Console.h"
#include "Game.h"
#include "bandai.h"
#include "Microsoft.h"
#include "Sony.h"
#include "Nintendo.h"
#include "microsoft.h"
#include "sony.h"
#include "nintendo.h"
#include "bandai.h"
#include "electronicArts.h"
#include "konami.h"
#include "sega.h"
#include "squareEnix.h"
#include "ubisoft.h"
class BD
{
	 friend class boost::serialization::access;
public:
	

		vector <Consola*> consoles;
		vector<Game*> games;
	public:

		//Constructor
		BD(){}


		//Destructor
		~BD(){}

	//Serializacion para atributos
    template<class Archive>
    void serialize(Archive & ar, const unsigned int /* file_version */){
		//Consolas
        ar.register_type(static_cast<Microsoft*>(NULL));
        ar.register_type(static_cast<Nintendo*>(NULL));
        ar.register_type(static_cast<Sony*>(NULL));	
        ar & consoles;

		//VideoJuegos
        ar.register_type(static_cast<MicrosoftJuego*>(NULL));
        ar.register_type(static_cast<NintendoJuego*>(NULL));
        ar.register_type(static_cast<SonyJuego*>(NULL));
        ar.register_type(static_cast<Bandai*>(NULL));
        ar.register_type(static_cast<Konami*>(NULL));
        ar.register_type(static_cast<ElectronicArts*>(NULL));
        ar.register_type(static_cast<Sega*>(NULL));
        ar.register_type(static_cast<SquareEnix*>(NULL));
        ar.register_type(static_cast<Ubisoft*>(NULL));

        ar & games;
}
};