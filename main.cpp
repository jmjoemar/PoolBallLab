#include "Graphics.h"
#include "PoolBall.h"
#include "PoolTable.h"

PoolTable table(8);

void drawScene(void) {
    clearWindow();          // clear the window
    table.draw();           // redraw the table
    glutSwapBuffers();      // swap buffers when double buffered
}

void animate() {
    // animation function
    table.update();
    glutPostRedisplay();
}

void handleKey(unsigned char key, int x, int y) {
    // keyboard handler, controls animation exit keys
    switch(key) {
        case 'q':
        case 'Q':
        case 27:        // escape
            exit(0);
            break;
    }
}


int main(int argc, char **argv) {
    // initialize the drawing surface
    graphicsSetup(argc, argv);

    // register event handlers
    glutDisplayFunc(drawScene);
    glutIdleFunc(animate);
    glutKeyboardFunc(handleKey);

    // start the animation
    glutMainLoop();
}
