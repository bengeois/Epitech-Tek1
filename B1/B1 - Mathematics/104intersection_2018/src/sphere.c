/*
** EPITECH PROJECT, 2018
** 104intersection
** File description:
** sphere.c
*/

#include <intersection.h>

int sphere(char **argv)
{
    float px = 0;
    float py = 0;
    float pz = 0;  
    float alpha = 0;      
    float x = atof(argv[2]);
    float y = atof(argv[3]);
    float z = atof(argv[4]);
    float vx = atof(argv[5]);  
    float vy = atof(argv[6]);
    float vz = atof(argv[7]);
    float r = atof(argv[8]);
    float a = (powf(vx, 2) + powf(vy, 2) + powf(vz, 2));
    float b = (2 * x * vx + 2 * y * vy + 2 * z * vz);
    float c = (powf(x, 2) + powf(y, 2) + powf(z, 2) - powf(r, 2));  
    float delta = (powf(b, 2) - 4 * a * c);

    if (delta == 0) {
        printf("1 intersection point:\n");
        alpha = -(b / 2 * a);
        px = x + alpha * vx;
        py = y + alpha * vy;
        pz = z + alpha * vz;
        printf("(%.3f, %.3f; %.3f)\n", px, py, pz);
    } else if (delta < 0) {
        printf("No intersection point.\n");
        return (0);
    } else if (delta > 0) {
        printf("2 intersection points:\n");
        alpha = (-b + sqrtf(delta)) / (2 * a);
        px = x + alpha * vx;
        py = y + alpha * vy;
        pz = z + alpha * vz;
        printf("(%.3f, %.3f, %.3f)\n", px, py, pz);
        alpha = (-b - sqrtf(delta)) / (2 * a);
        px = x + alpha * vx;
        py = y + alpha * vy;
        pz = z + alpha * vz;
        printf("(%.3f, %.3f, %.3f)\n", px, py, pz);
    }
    return 0;
}
