#pragma once

struct point {
    int x;
    int y;
};

struct point makepoint(int x, int y);
struct point addpoint(struct point p1, struct point p2);
