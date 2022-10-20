#ifndef __HITBOX_H__
#define __HITBOX_H__

#include <vector>

namespace hitbox{
  // *Proto*
  struct Rect;
  enum HitType;
  class Hitbox;
  bool aabb(Rect r1, Rect r2);
  // A Frame is a collection of hitboxes used by the fighter for a given frame.
  typedef std::vector<Hitbox> Frame;
}

struct hitbox::Rect{
  // A Rect models a 2D rectangle in the pixel space.
  int x, y; // Topleft corner
  unsigned int w, h; // Dimensions
};

enum hitbox::HitType{
  take, // Rects that determine where the opponent can hit this character in this frame
  give, // Rects that determine where this character can damage the opponent in this frame
  grab, // Rects that determine where the character can grab the opponent in this frame
};
 
class hitbox::Hitbox{
private:
  Rect rect; // Hitbox position and dimensions
  unsigned int hitType; // Hit type, see enum above
  int prio; // Priority order when checking collisions
public:
  Hitbox(Rect r, int type, int p);
  Rect getRect(void);
  int getType(void);
  int getPriority(void);
};

hitbox::Hitbox::Hitbox(Rect r, int t, int p): rect(r), hitType(t), prio(p){
  // Nothing else needs doin', the constructor just assigns data.
}
Rect hitbox::Hitbox::getRect(void){
  return rect;
}
int hitbox::Hitbox::getType(void){
  return hitType;
}
int hitbox::Hitbox::getPriority(void){
  return prio;
}

bool hitbox::aabb(Rect r1, Rect r2){
  // Returns true if r1 and r2 overlap.
  if(r1.x < r2.x + r2.w &&
     r1.x + r1.w > r2.x &&
     r1.y < r2.y + r2.h &&
     r1.y + r1.h > r2.y)
  {
    return true;
  }
  return false;
}

#endif
