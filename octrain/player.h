#pragma once

#include "shot.h"
// θ ----------------------------------------------------------------
#define PL_WIDTH    (300)
#define PL_HEIGHT   (332)
#define CLOSE_RANGE (140)

// NX --------------------------------------------------------------
class PLAYER
{
public:
    static float posX;
    static float posY;
    static float pivot_posX;
    static float pivot_posY;
    static int hp;
    static bool detect_hit;         // true:½ΑΔι
    static bool detect_closerange;  // true:ίΪΝΝΰ
    static bool detect_deth;        // true:S
    static bool detect_reverse;     // true:½]

    static void init(void);     // ϊέθ
    static void update(void);   // XV
    static void draw(void);     // `ζ
    static void end(void);      // IΉ

private:
    int state = 0;
    int hit_timer = 0;
    int at_timer = 0;
    int close_at1_timer = 0;
    int close_at2_timer = 0;
    float sub_posX = 0;     // playerΜEΊΜΐW
    float sub_posY = 0;
    float speed = 0;
    int init_hp = 0;
    int sub_hp = 0;
    int init_bullet = 0;
    int bullet = 0;
    int bullet_count = 0;
    int power = 0;
    bool detect_attack = false;         // true:U
    bool detect_close_attack1 = false;  // true:U
    bool detect_close_attack2 = false;  // true:U
    int efHND = 0;
    int ef_timer = 0;
    bool ef = false;
};