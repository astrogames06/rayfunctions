#ifndef RAYFUNCTIONS_H
#define RAYFUNCTIONS_H

#include <raylib.h>
#include <raymath.h>
#include <math.h>

// Look at rotates an object to point/look at a given point. It returns an angle in degrees

float RfuncLookAt(Vector2 pos, Vector2 target)
{
    float angle = atan2(pos.y - target.y, pos.x - target.x) * RAD2DEG;

    return angle;
}

// Move towards makes an object move towards a given point. It returns a Vector2

Vector2 RfuncMoveTowards(Vector2 pos, Vector2 target, float speed)
{
    Vector2 new_pos = pos + Vector2Normalize(target - pos) * speed;

    return new_pos;
}

#endif
