#include "DarkGDK.h"
#include "setup.h"
#include "movement.h"

void DarkGDK ( void )
{

	setup();//calls the setup for the game
	load();//loads player
	create();//creates player
	while ( LoopGDK ( ) )
	{

		collision();//collision check for player
		movement();//player moving


		if ( dbEscapeKey ( ) )
			break;

		dbSync ( );
	}



	for ( int i = 1; i < 30; i++ )
		dbDeleteSprite ( i );



	dbDeleteImage ( 1 );

	return;
}
