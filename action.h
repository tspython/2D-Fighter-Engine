#ifndef __ACTION_H__
#define __ACTION_H__

#include <map>
#include <vector>
#include <string>
#include "hitbox.h"

namespace fighter{
  class Action;
}

class fighter::Action{
private:
  // List of all framesets mapped to action strings owned by the fighter
  std::map<std::string, hitbox::Frame> framesets;
  // List of all frames in the currently used action
  std::vector<hitbox::Frame> frames;
public:
  Action(std::map<std::string, hitbox::Frame> fset);
  void setAction(std::string act_t);
  hitbox::Frame getFrame(int idx);
  bool collideFrame(hitbox::Frame other);
  // Event emitEvent(void);
};

#endif
