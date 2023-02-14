#ifndef _RED_C_
#define _RED_C_
#include "DrawAPISquare.h"

class BlackSquare : public DrawAPISquare{
public:
    void drawShape(int x, int y) override;
};

#endif