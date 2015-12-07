#include "PoolBall.h"
#include "PoolTable.h"

// constructors ---------------------------------------------------------------
PoolBall::PoolBall() {
    this->xPos = 50;
    this->yPos = 50;
    this->radius = 25;
    this->xVelocity = .3;
    this->yVelocity = .3;
    this->colorName = BLUE;
}

PoolBall::PoolBall(double xPos, double yPos) {
    this->xPos = xPos;
    this->yPos = yPos;
    this->radius = 25;
    this->xVelocity = .2;
    this->yVelocity = .2;
    this->colorName = BLUE;
}

PoolBall::PoolBall(double radius, double xPos, double yPos, ColorName colorName) {
    this->xPos = xPos;
    this->yPos = yPos;
    this->radius = radius;
    this->colorName = colorName;
    this->xVelocity = .2;
    this->yVelocity = .2;
}

// object mutators -----------------------------------------------------------
// initialize a poolball in case it needs it (can reset ball as well) 
void PoolBall::init(double radius, double xPos, double yPos, ColorName colorName) {
    this->xPos = xPos;
    this->yPos = yPos;
    this->radius = radius;
    this->colorName = colorName;
    this->xVelocity = .2;
    this->yVelocity = .2;
}

// move a poolball
void PoolBall::update() {
    this->xPos += xVelocity;
    this->yPos += yVelocity;
    check_collision();
}

// object accessors ----------------------------------------------------------
// draw a poolball
void PoolBall::draw() {
    setColor(this->colorName);
    drawFilledCircle(xPos, yPos, radius);
    cout << this->xPos << " " << this->yPos << " " << this->colorName << endl;
    
}

void PoolBall::check_collision(void) {
    
    if(yPos > WINDOW_HEIGHT-radius) {
        yVelocity = - yVelocity;
    }
    
    if(xPos > WINDOW_WIDTH-radius){
        xVelocity = -xVelocity;
    }
    
    if(yPos <= radius){
        yVelocity = -yVelocity;
    }
    
    if(xPos <= radius){
        xVelocity = -xVelocity;
    }
}
