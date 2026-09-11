#ifndef POKEPLATINUM_GAME_OPTIONS_H
#define POKEPLATINUM_GAME_OPTIONS_H

#include "constants/game_options.h"

#include "savedata.h"

typedef struct Options {
    u16 textSpeed : 4;
    u16 soundMode : 2;
    u16 battleStyle : 1;
    u16 battleScene : 1;
    u16 buttonMode : 2;
    u16 frame : 5;
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
} Options;

Options *Options_New(enum HeapID heapID);
void Options_Copy(const Options *src, Options *dest);
void Options_Init(Options *options);
void Options_SetSystemButtonMode(SaveData *saveData, enum OptionsButtonMode mode);
int Options_TextSpeed(const Options *options);
void Options_SetTextSpeed(Options *options, enum OptionsTextSpeed speed);
u8 Options_TextFrameDelay(const Options *options);
int Options_SoundMode(const Options *options);
void Options_SetSoundMode(Options *options, enum OptionsSoundMode mode);
int Options_BattleScene(const Options *options);
void Options_SetBattleScene(Options *options, enum OptionsBattleScene scene);
int Options_BattleStyle(const Options *options);
void Options_SetBattleStyle(Options *options, enum OptionsBattleStyle style);
int Options_ButtonMode(const Options *options);
void Options_SetButtonMode(Options *options, enum OptionsButtonMode mode);
int Options_Frame(const Options *options);
void Options_SetFrame(Options *options, enum OptionsFrame frame);
int Options_BarGaugeUpdate(const Options* options);
void Options_SetBarGaugeUpdate(Options *options, enum BarGuageUpdate mode);
int Options_EvIvMode(const Options *options);
void Options_SetEvIvMode(Options *options, enum OptionsEvIvMode mode);
int Options_FrameRate(const Options *options);
void Options_SetFrameRate(Options *options, enum OptionsFrameRate rate);
int Options_Disobedient(const Options *options);
void Options_SetDisobedient(Options *options, enum OptionsDisobedient mode);
int Options_EasyCatch(const Options *options);
void Options_SetEasyCatch(Options *options, enum OptionsEasyCatchMode mode);
int Options_ShinyRate(const Options *options);
void Options_SetShinyRate(Options *options, enum OptionsShinyRate rate);
int Options_ExpRate(const Options *options);
void Options_SetExpRate(Options *options, enum OptionsExpRate rate);

#endif // POKEPLATINUM_GAME_OPTIONS_H
