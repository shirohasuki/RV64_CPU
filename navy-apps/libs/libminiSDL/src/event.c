#include <NDL.h>
#include <SDL.h>
#include <string.h>

#define keyname(k) #k,

static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
};

int SDL_PushEvent(SDL_Event *ev) {
  return 0;
}

int SDL_PollEvent(SDL_Event *ev) {
  char buf[100];

  if(NDL_PollEvent(buf,ARRLEN(buf)-1) != 0){
    if(strncmp (buf, "kd ", 3) == 0){
      ev->key.type = SDL_KEYDOWN;
    }
    else if(strncmp (buf, "ku ", 3) == 0){
      ev->key.type = SDL_KEYUP;
    }
    if(ev->type == SDL_KEYDOWN || ev->type == SDL_KEYUP){
      //printf("SDL_PollEvent get: %s\n",buf);
#if !defined(__ISA_NATIVE__)  // direct read keycode.
      uint8_t keycode = 0;
      sscanf(buf+3,"%2d %s",&keycode,buf+6);  // buf+3 -> buf+3 means %s do not change.
      if(keycode != 0){
        keystate[keycode] = (ev->type == SDL_KEYDOWN) ? 1:0;
        ev->key.keysym.sym = keycode;
        return 1;
      }
#else // use for native, use keyname to match keycode.
      buf[strlen(buf)-1] = '\0'; // remove '\n'
      for(int i=0; i<ARRLEN(keyname); i++){
        if(strcmp (buf+3, keyname[i]) == 0){
          ev->key.keysym.sym = i;
          keystate[i] = (ev->type == SDL_KEYDOWN) ? 1:0; 
          return 1;
        }
      }
#endif
    }
  }
  return 0;
}

#define EVENT_BUF_LENGTH 1024
char buf[EVENT_BUF_LENGTH];
int SDL_WaitEvent(SDL_Event *event) {
//   // after keydown and keyup, ret should be zero, and then set keysym to NONE.
//   if (NDL_PollEvent(buf, EVENT_BUF_LENGTH) == 0) {
//     event->type = SDL_KEYUP;
//     event->key.keysym.sym = 0;
//     return 1;
//   }
//   if (buf[0] == 'k') {
//     int code = 0;
//     for (int i = 0; i < 83; ++i) {
//       if (strncmp(buf + 3, keyname[i], strlen(keyname[i])) == 0) {
//         code = i;
//         break;
//       }
//     }
//     if (buf[1] == 'd') {
//       event->type = SDL_KEYDOWN;
//       event->key.keysym.sym = code;
//       printf("Down %d\n", code);
//     } else if (buf[1] == 'u') {
//       event->type = SDL_KEYUP;
//       event->key.keysym.sym = code;
//       printf("Up %d\n", code);
//     }
//   }
//   return 1;
      while(SDL_PollEvent(event) == 0); // wait for KeyBoard Event
  return 1;
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
  return 0;
}

uint8_t* SDL_GetKeyState(int *numkeys) {
  if(numkeys != NULL){
    *numkeys = ARRLEN(keyname);
}
