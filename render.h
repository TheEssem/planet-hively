
#define TARGET_FPS 45
#define FPSTIME (1000/TARGET_FPS)

int render_init( void );
void render_shut( void );
int render( void );
Uint32 timing( Uint32 interval, void *dummy );
void user_interaction( int i );

enum
{
  ACTION_TUNEPETAL_1 = 1,
  ACTION_TUNEPETAL_2,
  ACTION_TUNEPETAL_3,
  ACTION_TUNEPETAL_4,
  ACTION_TUNEPETAL_5,
  ACTION_TUNEPETAL_6,
  ACTION_TUNEPETAL_7,
  ACTION_TUNEPETAL_8,
  
  ACTION_TEXTPETAL_1,
  ACTION_TEXTPETAL_2,
  ACTION_TEXTPETAL_3,
  ACTION_TEXTPETAL_4,
  ACTION_TEXTPETAL_5,
  ACTION_TEXTPETAL_6,
  ACTION_TEXTPETAL_7,
  ACTION_TEXTPETAL_8,
  
  ACTION_RESET_TUNEFLOWER,
  ACTION_RESET_TEXTFLOWER,
  
  ACTION_START_SUNSET,

  ACTION_DRAG_SCROLLBAR,  // Pointing device required
  ACTION_PRESS_X,
  ACTION_DRAG_SCROLLBOX,  // Pointing device required
  
  ACTION_SCROLL_UP,
  ACTION_SCROLL_DOWN,
  ACTION_STOPSCROLL,
  
  ACTION_KILL_BUTTERFLY = 100,
  
  ACTION_CLOUD_CLICK = 200
};

enum
{
  PART_STARFIELD=1,
  PART_PLANET_IN,
  PART_PLANET_ZOOM,
  PART_STARS_OUT,
  PART_SUNRISE,
  PART_FLOWERGROW,
  PART_MAIN,
  PART_SUNSET
};
