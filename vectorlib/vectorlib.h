
typedef struct v3d
{
    double x;
    double y;
    double z;
} v3d;

v3d sum(v3d, v3d);
v3d sub(v3d, v3d);
double dot(v3d, v3d);
v3d cross(v3d, v3d);