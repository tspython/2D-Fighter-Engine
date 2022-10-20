// #include "fighter.h"
#include "action.h"

// Class method definitions
fighter::Action::Action(std::map<std::string, hitbox::Frame> fset): framesets(fset), frames(fset["idle"]){
  // Todo: image handling
}
void fighter::Action::setAction(std::string act_t){
  /*
    Set the current frameset to be used, based on the action type given.
    A frameset is a vector of Frames that are arranged in the order they appear during the action,
    from 0 to frameset.size() - 1.
  */
  frames = frameset[act_t];
}
hitbox::Frame fighter::Action::getFrame(int idx){
  // Returns a frame from the current action given an index.
  return frames[idx];
}
