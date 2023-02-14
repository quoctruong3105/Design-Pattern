#ifndef _DRAW_API_
#define _DRAW_API_

class DrawAPI {
public:
    virtual void drawShape(int r) = 0;
    virtual void drawShape(int x, int y) = 0;
};

#endif