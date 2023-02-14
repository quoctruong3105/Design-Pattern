#ifndef _GREEN_CIRCLE_
#define _GREEN_CIRCLE_
#include "DrawAPICircle.h"

class GreenCircle : public DrawAPICircle {
public:
    void drawShape(int r) override;
};

#endif