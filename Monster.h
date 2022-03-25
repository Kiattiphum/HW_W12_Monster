class monster{
      int hp,potion;
      string name;
      monster* next;
public:
        monster(string,int,int);
        void show_node();
        void insert(monster*&);
        monster* move_next();
        ~monster();
      };


