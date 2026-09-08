#ifndef POKEPLATINUM_GAME_OPTIONS_H
#define POKEPLATINUM_GAME_OPTIONS_H

#include "constants/game_options.h"

#include "savedata.h"

typedef struct Options {
    u16 textSpeed : 4;
    u16 soundMode : 2;
    u16 gaugeUpdate : 2;
    u16 evIvMode : 2;
    u16 frameRate : 2; 
    u16 battleStyle : 1;
    u16 battleScene : 1;
    u16 buttonMode : 2;
    u16 frame : 5;
    u16 : 1;
} Options;

Options *Options_New(enum HeapID heapID);
void Options_Copy(const Options *src, Options *dest);
void Options_Init(Options *options);
void Options_SetSystemButtonMode(SaveData *saveData, enum OptionsButtonMode mode);
int Options_TextSpeed(const Options *options);
void Options_SetTextSpeed(Options *options, enum OptionsTextSpeed speed);

// Custom Modification
int Options_GaugeUpdate(const Options* options);
void Options_SetGaugeUpdate(Options *options, enum GuageUpdate mode);
int Options_EvIvMode(const Options *options);
void Options_SetEvIvMode(Options *options, enum OptionsEvIvMode mode);
int Options_FrameRate(const Options *options);
void Options_SetFrameRate(Options *options, enum OptionsFrameRate rate);

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

#endif // POKEPLATINUM_GAME_OPTIONS_H
