//
//  Definitions.h
//  
//
//  Created by Josh Sun on 2016-11-24.
//
//

#ifndef Definitions_h
#define Definitions_h

#define SWITCH_COUNT            2
#define BUTTON_COUNT            2
#define MAX_SCREEN_PIXEL_X      128
#define MAX_SCREEN_PIXEL_Y      32
#define CHAR_PIXEL              8
#define GRID_X                  16
#define GRID_Y                  4
#define MAX_ROOM_SIZE_X         12
#define MAX_ROOM_SIZE_Y         10
#define MIN_ROOM_SIZE_X         8
#define MIN_ROOM_SIZE_Y         8

#define NO_TILT -1
#define UP      0
#define DOWN    1
#define LEFT    2
#define RIGHT   3



struct position {
    int x;
    int y;
};


struct room {
    struct position   pos[2];
    struct position   exits[2];
    int len;
    int wid;
};

struct player{
  int                 health;
  int                 damage;
  struct position     pos;
};

struct attack {
  char *basicAttack = "used punch!";
  char *spAttacks[4] = {"threw a bomb!", 
                        "spat fire!",
                        "used poison!", 
                        "threw a tomahawk!"};
};


struct monster{
  int               level;
  int               health;
  char*             name;
  int               damage;
  int               spDamage;
  bool              isDead;
  struct  position  pos;
  struct attack     attacks;
};

struct tunnel {
  struct position     endPos[2];
};


struct levelMap {
    int               level;
    int               roomCount;
    int               len;
    int               wid;
    int               monsterCount;
    struct room       rooms[11];
    struct monster    monsters[11];
    struct tunnel     tunnels[10];
} ;




#endif /* Definitions_h */
