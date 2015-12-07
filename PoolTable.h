// PoolTable Class
#pragma once

#include "PoolBall.h"

#define MAXBALLS 10

class PoolTable {
    private:
        int num_balls;
    
    public:
        PoolBall balls[MAXBALLS];

    public:
        // constructors -------------------------
        PoolTable(int n);

        // object accessors
        void check_collisions(void);
        void draw();

        // object mutators
        void update();
        void set_position(int n);
        void set_color(int n);
    

    private:
        void checkCollisions(int i, int j);
};
