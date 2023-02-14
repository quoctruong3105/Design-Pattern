#ifndef _RED_CIRCLE_
#define _RED_CIRCLE_
#include "DrawAPICircle.h"

class RedCircle : public DrawAPICircle{
public:
    void drawShape(int r) override;
};

#endif