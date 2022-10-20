using namespace std;

namespace 2DFighter {
  class Fighter {
    private:
      int _x;
      int _y;
      Hitbox h;
      vector<Action> _actions;
     public:
      2DFighter();
      Hitbox getHitbox();
      void registerActions(Action action);
      void registerAction(Action action);
      void processEvent(int type);
      void setAction(int key);
  };
}
