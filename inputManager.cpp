enum MovementTypes
  {
    MOVE_RIGHT = 1,
    MOVE_LEFT,
    MOVE_UP,
    MOVE_DOWN,
  };


void emitEvent(int type){
	return receiveEvent(type);
}
void processInput(void){
  if(dbRightKey() == 1){
    emitEvent(MOVE_RIGHT);
  }
  if(dbUpKey() == 1){
    emitEvent(MOVE_UP);
  }
  if(dbLeftKey() == 1){
    emitEvent(MOVE_LEFT);
  }
  if(dbDownKey() == 1){
    emitEvent(MOVE_DOWN);
  }
}
