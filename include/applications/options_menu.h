#ifndef POKEPLATINUM_APPLICATIONS_OPTIONS_MENU_H
#define POKEPLATINUM_APPLICATIONS_OPTIONS_MENU_H

#include "overlay_manager.h"

typedef struct OptionsMenu {
    u16 textSpeed : 4;
    u16 soundMode : 2;
    u16 battleScene : 1;
    u16 battleStyle : 1;
    u16 buttonMode : 2;
    u16 messageBoxStyle : 5;
    u16 : 1;

    // Page 2
    u16 barGaugeUpdate : 1;
    u16 frameRate : 1;
    u16 : 14;

    // Page 3 
    u16 disobedient : 1;
    u16 easyCatch : 1;
    u16 shinyRate : 4;
    u16 evIvMode : 1;
    u16 expRate : 4;
    u16 : 5;
} OptionsMenu;

BOOL OptionsMenu_Init(ApplicationManager *appMan, int *state);
BOOL OptionsMenu_Exit(ApplicationManager *appMan, int *state);
BOOL OptionsMenu_Main(ApplicationManager *appMan, int *state);

#endif // POKEPLATINUM_APPLICATIONS_OPTIONS_MENU_H
