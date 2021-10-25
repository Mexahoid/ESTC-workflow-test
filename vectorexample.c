#include <stdio.h>
#include "vectorlib/vectorlib.h"

int main()
{
    v3d a, b;
    printf("Enter vector A coords (x y z): ");
    scanf("%lf %lf %lf", &a.x, &a.y, &a.z);
    printf("Enter vector B coords (x y z): ");
    scanf("%lf %lf %lf", &b.x, &b.y, &b.z);
    v3d res = sum(a, b);
    printf("Sum: (%.3lf, %.3lf, %.3lf)\n", res.x, res.y, res.z);
    res = sub(a, b);
    printf("Sub: (%.3lf, %.3lf, %.3lf)\n", res.x, res.y, res.z);
    printf("Dot product: %.3lf\n", dot(a, b));
    res = cross(a, b);
    printf("Cross product: (%.3lf, %.3lf, %.3lf)\n", res.x, res.y, res.z);

    return 0;
}