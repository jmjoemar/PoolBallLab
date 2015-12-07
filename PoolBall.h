// PoolBall class
#pragma once

#include <stdlib.h>
#include "Graphics.h"


class PoolBall {
    public:
        double radius;
        double xPos;
        double yPos;
        double xVelocity;
        double yVelocity;
        double mass;
        ColorName colorName;
    public:
        // constructors
        PoolBall();
        PoolBall(double radius, double xPos, double yPos, ColorName colorName);
        PoolBall(double xPos, double yPos);

        // object mutators
        void init(double radius, double xPos, double yPos, ColorName colorName);
        void update();
        void check_collision(void);

        // object accessors
        void draw();
};
