/*******************************************************************************
* Copyright (c) 2013, SHENZHEN SEMITEK Co.,LTD.
* All rights reserved.
*
* 文件名称: _MATRIX_KEY_TBL_
*
* 功能说明:
* 修改说明:
*******************************************************************************/
#ifndef _MATRIX_KEY_MAC_TBL_
#define _MATRIX_KEY_MAC_TBL_

//=============================================================================;
// 配置引用区                                                                  ;
//=============================================================================;

//-----------------------------------------------------------------------------;
// 正常矩阵表
//

// MAC键值表
unsigned char           const   matrixkey_mac_tbl[] =
{
// C2
    iSTD_W,             iKEY_TYPE_STD|iKEY_PRESS,
    iSTD_CAPITAL,       iKEY_TYPE_STD|iKEY_PRESS,
    iSTD_S,             iKEY_TYPE_STD|iKEY_PRESS,
    iSTD_QUROPE2,       iKEY_TYPE_STD|iKEY_PRESS,
    iSTD_X,             iKEY_TYPE_STD|iKEY_PRESS,    
    iSTD_NULL,          iKEY_TYPE_INVALID,
    iMMK_BRIGHT_SUM_L,  iKEY_TYPE_MMK|iMMK_BRIGHT_SUM_H,      // F1  屏幕亮度减
    iSTD_2,             iKEY_TYPE_STD|iKEY_PRESS,
// C3
    iSTD_E,             iKEY_TYPE_STD|iKEY_PRESS,    
    iMMK_MISSION_CTRL_L,iKEY_TYPE_MMK|iMMK_MISSION_CTRL_H,    // F3  多任务窗口
    iSTD_D,             iKEY_TYPE_STD|iKEY_PRESS,
    iMMK_LAUNCHPAD_L,   iKEY_TYPE_MMK|iMMK_LAUNCHPAD_H,       // F4  程序列表
    iSTD_C,             iKEY_TYPE_STD|iKEY_PRESS,  
    iSTD_NULL,          iKEY_TYPE_INVALID,         
    iMMK_BRIGHT_ADD_L,  iKEY_TYPE_MMK|iMMK_BRIGHT_ADD_H,      // F2  屏幕亮度加
    iSTD_3,             iKEY_TYPE_STD|iKEY_PRESS,              
// C4
    iSTD_R,             iKEY_TYPE_STD|iKEY_PRESS,   
    iSTD_T,             iKEY_TYPE_STD|iKEY_PRESS,
    iSTD_F,             iKEY_TYPE_STD|iKEY_PRESS,
    iSTD_G,             iKEY_TYPE_STD|iKEY_PRESS,    
    iSTD_V,             iKEY_TYPE_STD|iKEY_PRESS,
    iSTD_B,             iKEY_TYPE_STD|iKEY_PRESS,  
    iSTD_5,             iKEY_TYPE_STD|iKEY_PRESS,
    iSTD_4,             iKEY_TYPE_STD|iKEY_PRESS,   
// C5
    iSTD_U,             iKEY_TYPE_STD|iKEY_PRESS,
    iSTD_Y,             iKEY_TYPE_STD|iKEY_PRESS,
    iSTD_J,             iKEY_TYPE_STD|iKEY_PRESS,
    iSTD_H,             iKEY_TYPE_STD|iKEY_PRESS,  
    iSTD_M,             iKEY_TYPE_STD|iKEY_PRESS,
    iSTD_N,             iKEY_TYPE_STD|iKEY_PRESS,
    iSTD_6,             iKEY_TYPE_STD|iKEY_PRESS,
    iSTD_7,             iKEY_TYPE_STD|iKEY_PRESS,
// C6
    iSTD_I,             iKEY_TYPE_STD|iKEY_PRESS,
    iSTD_SQUARE_BRACKET_RIGHT, iKEY_TYPE_STD|iKEY_PRESS,
    iSTD_K,             iKEY_TYPE_STD|iKEY_PRESS,
    iLED_BRIGHT_ADD,    iKEY_TYPE_SPECIAL,                    // F6  键盘背光亮度加
    iSTD_COMMA,         iKEY_TYPE_STD|iKEY_PRESS,
    iSTD_KEYBOARD_RO,   iKEY_TYPE_STD|iKEY_PRESS,
    iSTD_ADD,           iKEY_TYPE_STD|iKEY_PRESS,
    iSTD_8,             iKEY_TYPE_STD|iKEY_PRESS,
// C7
    iSTD_O,             iKEY_TYPE_STD|iKEY_PRESS,
    iMMK_PREV_TRACK_L,  iKEY_TYPE_MMK|iMMK_PREV_TRACK_H,      // F7  上一曲
    iSTD_L,             iKEY_TYPE_STD|iKEY_PRESS,   
    iSTD_NULL,          iKEY_TYPE_INVALID,
    iSTD_FULLSTOP,      iKEY_TYPE_STD|iKEY_PRESS,
    iSTD_APP,           iKEY_TYPE_STD|iKEY_PRESS,
    iMMK_PLAY_PAUSE_L,  iKEY_TYPE_MMK|iMMK_PLAY_PAUSE_H,      // F8  暂停/播放
    iSTD_9,             iKEY_TYPE_STD|iKEY_PRESS,    
// C8
    iSTD_P,             iKEY_TYPE_STD|iKEY_PRESS,
    iSTD_SQUARE_BRACKET_LEFT, iKEY_TYPE_STD|iKEY_PRESS,
    iSTD_SEMICOLON,     iKEY_TYPE_STD|iKEY_PRESS,
    iSTD_QUOTATION_SIGN,iKEY_TYPE_STD|iKEY_PRESS,
    iSTD_EUROPE1,       iKEY_TYPE_STD|iKEY_PRESS,
    iSTD_SLASH,         iKEY_TYPE_STD|iKEY_PRESS,
    iSTD_SUBTRACT,      iKEY_TYPE_STD|iKEY_PRESS,    
    iSTD_0,             iKEY_TYPE_STD|iKEY_PRESS,
// C9
    iSTD_SCROLL,        iKEY_TYPE_STD|iKEY_PRESS,
    iSTD_NULL,          iKEY_TYPE_INVALID,
    iSTD_NULL,          iKEY_TYPE_INVALID,
    iSTD_NULL,          iKEY_TYPE_STD|iKEY_PRESS|iLEFT_ALT,
    iKEY_WHEEL,         iKEY_TYPE_SPECIAL,
    iSTD_NULL,          iKEY_TYPE_STD|iKEY_PRESS|iRIGHT_ALT,
    iSTD_NULL,          iKEY_TYPE_INVALID,
    iSTD_SNAPSHOT,      iKEY_TYPE_STD|iKEY_PRESS,
// C10
    iSTD_KEYBOARD_YEN,  iKEY_TYPE_STD|iKEY_PRESS,
    iSTD_BACKSPACE,     iKEY_TYPE_STD|iKEY_PRESS,
    iSTD_BACKSLASH,     iKEY_TYPE_STD|iKEY_PRESS,
    iMMK_VOLUMEDOWN_L,  iKEY_TYPE_MMK|iMMK_VOLUMEDOWN_H,      // F11 音量减
    iSTD_ENTER,         iKEY_TYPE_STD|iKEY_PRESS,
    iMMK_VOLUMEUP_L,    iKEY_TYPE_MMK|iMMK_VOLUMEUP_H,        // F12 音量加
    iMMK_NEXT_TRACK_L,  iKEY_TYPE_MMK|iMMK_NEXT_TRACK_H,      // F9  下一曲
    iMMK_MUTE_L,        iKEY_TYPE_MMK|iMMK_MUTE_H,            // F10 静音
// C11
    iSTD_NUMPAD7,       iKEY_TYPE_STD|iKEY_PRESS,
    iSTD_NUMPAD4,       iKEY_TYPE_STD|iKEY_PRESS,
    iSTD_NUMPAD1,       iKEY_TYPE_STD|iKEY_PRESS,
    iSTD_SPACE,         iKEY_TYPE_STD|iKEY_PRESS,
    iSTD_NUMLOCK,       iKEY_TYPE_STD|iKEY_PRESS,
    iSTD_DOWN,          iKEY_TYPE_STD|iKEY_PRESS,
    iSTD_DELETE,        iKEY_TYPE_STD|iKEY_PRESS,
    iSTD_NULL,          iKEY_TYPE_INVALID,
// C12
    iSTD_NUMPAD8,       iKEY_TYPE_STD|iKEY_PRESS,
    iSTD_NUMPAD5,       iKEY_TYPE_STD|iKEY_PRESS,
    iSTD_NUMPAD2,       iKEY_TYPE_STD|iKEY_PRESS,
    iSTD_NUMPAD0,       iKEY_TYPE_STD|iKEY_PRESS,
    iSTD_NUMPAD_DIVIDE, iKEY_TYPE_STD|iKEY_PRESS,
    iSTD_RIGHT,         iKEY_TYPE_STD|iKEY_PRESS,
    iSTD_INSERT,        iKEY_TYPE_STD|iKEY_PRESS,  
    iSTD_NULL,          iKEY_TYPE_INVALID,
// C13
    iSTD_NUMPAD9,       iKEY_TYPE_STD|iKEY_PRESS,
    iSTD_NUMPAD6,       iKEY_TYPE_STD|iKEY_PRESS,
    iSTD_NUMPAD3,       iKEY_TYPE_STD|iKEY_PRESS,
    iSTD_NUMPAD_FULLSTOP, iKEY_TYPE_STD|iKEY_PRESS,
    iSTD_NUMPAD_MULTIPLY, iKEY_TYPE_STD|iKEY_PRESS,
    iSTD_NUMPAD_SUBTRACT, iKEY_TYPE_STD|iKEY_PRESS,
    iSTD_PAGEUP,        iKEY_TYPE_STD|iKEY_PRESS,  
    iSTD_PAGEDOWN,      iKEY_TYPE_STD|iKEY_PRESS,  
// C14
    iSTD_NUMPAD_ADD,    iKEY_TYPE_STD|iKEY_PRESS,
    iSTD_KEYBOARD_NUMPAD_COMMA, iKEY_TYPE_STD|iKEY_PRESS,
    iSTD_NUMPAD_ENTER,  iKEY_TYPE_STD|iKEY_PRESS,
    iSTD_UP,            iKEY_TYPE_STD|iKEY_PRESS,
    iMMK_PLAY_PAUSE_L,  iKEY_TYPE_MMK|iMMK_PLAY_PAUSE_H,
    iSTD_LEFT,          iKEY_TYPE_STD|iKEY_PRESS,
    iSTD_HOME,          iKEY_TYPE_STD|iKEY_PRESS,    
    iSTD_END,           iKEY_TYPE_STD|iKEY_PRESS,
// C15
    iSTD_NULL,          iKEY_TYPE_INVALID,
    iSTD_NULL,          iKEY_TYPE_STD|iKEY_PRESS|iLEFT_SHIFT,
    iSTD_NULL,          iKEY_TYPE_STD|iKEY_PRESS|iRIGHT_SHIFT,
    iMMK_VOLUMEDOWN_L,  iKEY_TYPE_MMK|iMMK_VOLUMEDOWN_H,
    iMMK_VOLUMEUP_L,    iKEY_TYPE_MMK|iMMK_VOLUMEUP_H,
    iMMK_NEXT_TRACK_L,  iKEY_TYPE_MMK|iMMK_NEXT_TRACK_H,
    iMMK_PREV_TRACK_L,  iKEY_TYPE_MMK|iMMK_PREV_TRACK_H,
    iMMK_MUTE_L,        iKEY_TYPE_MMK|iMMK_MUTE_H,
// C16
    iSTD_PAUSE,         iKEY_TYPE_STD|iKEY_PRESS,
    iSTD_KEYBOARD_LANG2,iKEY_TYPE_STD|iKEY_PRESS,//iSTD_NULL,          iKEY_TYPE_INVALID,  
    iSTD_KEYBOARD_LANG1,iKEY_TYPE_STD|iKEY_PRESS,//iSTD_NULL,          iKEY_TYPE_INVALID,        
    iMODE_KEY_FN,       iKEY_TYPE_SPECIAL,//iSTD_NULL,          iKEY_TYPE_INVALID,
    iSTD_NULL,          iKEY_TYPE_STD|iKEY_PRESS|iRIGHT_CTRL,
    iSTD_NULL,          iKEY_TYPE_STD|iKEY_PRESS|iLEFT_GUI,
    iSTD_NULL,          iKEY_TYPE_STD|iKEY_PRESS|iLEFT_CTRL,
    iLED_BRIGHT_SUB,    iKEY_TYPE_SPECIAL,                    // F5  键盘背光亮度减
// C17
    iSTD_Q,             iKEY_TYPE_STD|iKEY_PRESS,
    iSTD_TAB,           iKEY_TYPE_STD|iKEY_PRESS,
    iSTD_A,             iKEY_TYPE_STD|iKEY_PRESS,
    iSTD_ESCAPE,        iKEY_TYPE_STD|iKEY_PRESS,
    iSTD_Z,             iKEY_TYPE_STD|iKEY_PRESS,
    iSTD_NULL,          iKEY_TYPE_INVALID, 
    iSTD_WAVE,          iKEY_TYPE_STD|iKEY_PRESS,
    iSTD_1,             iKEY_TYPE_STD|iKEY_PRESS
};
//-----------------------------------------------------------------------------;

#endif
