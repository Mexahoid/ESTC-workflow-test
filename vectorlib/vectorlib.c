#include "vectorlib.h"

v3d sum(v3d a, v3d b)
{
    v3d res;
    res.x = a.x + b.x;
    res.y = a.y + b.y;
    res.z = a.z + b.z;
    return res;
}

v3d sub(v3d a, v3d b)
{
    v3d res;
    res.x = a.x - b.x;
    res.y = a.y - b.y;
    res.z = a.z - b.z;
    return res;
}

double dot(v3d a, v3d b)
{
    return a.x * b.x + a.y * b.y + a.z * b.z;
}

v3d cross(v3d a, v3d b)
{
    v3d res;
    res.x = a.y * b.z - b.y * a.z;
    res.y = b.x * a.z - a.x * b.z;
    res.z = a.x * b.y - b.x * a.y;
    return res;
}