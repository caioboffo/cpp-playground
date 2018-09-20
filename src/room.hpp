#pragma once

#include "mapsite.hpp"

class room : public mapsite
{
public:
    room(int room_number);
    mapsite * get_side(direction) const;
    void set_side(direction, mapsite*);
    virtual void enter();

private:
    mapsite *m_sides[4];
    int room_number;
};
