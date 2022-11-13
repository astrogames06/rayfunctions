#ifndef RAYFUNCTIONS_H
#define RAYFUNCTIONS_H

#include <raylib.h>
#include <math.h>

// Normalize normalizes a given Vector2

Vector2 RfuncNormalize(Vector2 v)
{
    float length = sqrt((v.x * v.x) + (v.y * v.y));
    if (length != 0)
        return Vector2 {v.x / length, v.y / length};
    
    return v;
}

// Look at rotates an object to point/look at a given point. It returns an angle in degrees

float RfuncLookAt(Vector2 pos, Vector2 target)
{
    float angle = atan2(pos.y - target.y, pos.x - target.x) * RAD2DEG;

    return angle;
}

// Move towards makes an object move towards a given point. It returns a Vector2

Vector2 RfuncMoveTowards(Vector2 pos, Vector2 target, float speed)
{
    Vector2 new_pos = pos + normalize(target - pos) * speed;

    return new_pos;
}

#endif
