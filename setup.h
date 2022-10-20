void setup()
{
	dbSyncOn   ( );
	dbSyncRate ( 60 );
	dbDisableEscapeKey ( );
	dbRandomize ( dbTimer ( ) );
	dbLoadImage ( "data/graphics/backdrop.png", 1 );
	dbSprite ( 1, 0, 0, 1 );
	dbSetImageColorKey ( 255, 0, 255 );
}
