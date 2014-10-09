// Programming 2D Games
// Copyright (c) 2011 by: 
// Charles Kelly
// Chapter 5 constants.h v1.0
#ifndef _CONSTANTS_H            // Prevent multiple definitions if this 
#define _CONSTANTS_H            // file is included in more than one place
#define WIN32_LEAN_AND_MEAN

#include <windows.h>

//-----------------------------------------------
// Useful macros
//-----------------------------------------------
// Safely delete pointer referenced item
#define SAFE_DELETE(ptr)       { if (ptr) { delete (ptr); (ptr)=NULL; } }
// Safely release pointer referenced item
#define SAFE_RELEASE(ptr)      { if(ptr) { (ptr)->Release(); (ptr)=NULL; } }
// Safely delete pointer referenced array
#define SAFE_DELETE_ARRAY(ptr) { if(ptr) { delete [](ptr); (ptr)=NULL; } }
// Safely call onLostDevice
#define SAFE_ON_LOST_DEVICE(ptr)    { if(ptr) { ptr->onLostDevice(); } }
// Safely call onResetDevice
#define SAFE_ON_RESET_DEVICE(ptr)   { if(ptr) { ptr->onResetDevice(); } }
#define TRANSCOLOR  SETCOLOR_ARGB(0,255,0,255)  // transparent color (magenta)

//-----------------------------------------------
//                  Constants
//-----------------------------------------------
// graphic images
const char BACKGROUND_IMAGE[] = "pictures\\background.jpg";  // photo source NASA/courtesy of nasaimages.org 
const char PLANET_IMAGE[] = "pictures\\sun1.png"; // picture of planet
const char MISSILE_IMAGE[] = "pictures\\missile.png"; //More CC3 and something else
const char MARS_IMAGE[] = "pictures\\mars.png";	//CC3 art
const char EARTH_IMAGE[] = "pictures\\earth.png";	//CC3 art
const char EXP_IMAGE[] = "pictures\\explosion.png"; //Public Domain
const char CURSOR_IMAGE[] = "pictures\\cursor.png";
const char SMOKE_IMAGE[] = "pictures\\smoke.png";

//Sound Locations
const char WAVE_BANK[] = "audio\\Win\\wavesExample1.xwb";
const char SOUND_BANK[] = "audio\\win\\SoundsExample1.xsb";
const char XGS_FILE[]   = "audio\\Win\\SpaceWar.xgs";

//Cue Names
const char BOOM[] = "bang"; //MUST be exactly the same as cue name
const char AZ[] = "Aldnoah";

// window
const char CLASS_NAME[] = "Spacewar";
const char GAME_TITLE[] = "Spacewar";
const bool FULLSCREEN = false;              // windowed or fullscreen DO NOT RUN FULLSCREEN IN DEBUG MODE
const UINT GAME_WIDTH =  1280;               // width of game in pixels
const UINT GAME_HEIGHT = 800;               // height of game in pixels

//Explosion Cells
const int  EXP_COLS = 2;
const int  EXP_WIDTH = 32;
const int  EXP_HEIGHT = 32;
//JPO actions
const int EXP_START = 0;			//1st row
const int EXP_END = 3;


const float EXP_SPEED = 90.5f;
const float EXP_DELAY = 0.05f;
 
// game
const int MISSILEMAX = 10000;
const int PARTICLEMAX = 10000;
const int EXPMAX = 200;
const double PI = 3.14159265;
const float FRAME_RATE  = 100.0f;               // the target frame rate (frames/sec)
const float MIN_FRAME_RATE = 10.0f;             // the minimum frame rate
const float MIN_FRAME_TIME = 1.0f/FRAME_RATE;   // minimum desired time for 1 frame
const float MAX_FRAME_TIME = 1.0f/MIN_FRAME_RATE; // maximum time used in calculations
const enum COLLISION_TYPE {NONE, CIRCLE, BOX, ROTATED_BOX};
const enum WEAPON {ROCK, MISSILE, PLANET};

// key mappings
// In this game simple constants are used for key mappings. If variables were used
// it would be possible to save and restore key mappings from a data file.
const UCHAR ESC_KEY      = VK_ESCAPE;   // escape key
const UCHAR ALT_KEY      = VK_MENU;     // Alt key
const UCHAR ENTER_KEY    = VK_RETURN;   // Enter key



#endif
