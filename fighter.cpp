#include "fighter.h"
Hitbox Fighter::getHitbox() {
    return h;
}
void setAction(int key){
	vector<Hitbox> _hitboxes;
}
void receiveEvent()
{
	switch(type){
		case MOVE_LEFT:
		    dbRotateSprite(2,90)
		    dbMoveSprite(2,-3);
		    dbRotateSprite(2,0);
		 break;
			
		case MOVE_RIGHT:
			dbRotateSprite(2,90)
			dbMoveSprite(2,3);
			dbRotateSprite(2,0);
		break;
			
		case MOVE_UP:
			dbMoveSprite(2,3);
		break;
			
		case MOVE_DOWN:
			dbMoveSprite(2,-3);
		break;
		
		default:
		break;
				     
}

sprite array[];
hitbox array[];
