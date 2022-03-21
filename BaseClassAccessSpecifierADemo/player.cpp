#include "Person.h"
#include "player.h"


std::ostream& operator << (std::ostream& out, const Player& player)
{
    out << "Player [Full name : "<< player.get_full_name() << ", Age: "<< 
                player.get_age() << " , Address : "<< player.get_address() << " ] ";

    return out;
}
 Player::~Player()
 {

 }