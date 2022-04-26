#ifndef PIGEON_H
#define PIGEON_H
#include "bird.h"
class Pigeon : public Bird

{
    public:
        Pigeon() = default;
        Pigeon(std::string_view wing_color , std::string_view description)
            : Bird(wing_color,description)
        {

        }
        ~Pigeon()=default;

        virtual void coo() const{
            std::cout << "Pigeon::coo called for pigeon : " << m_description << std::endl;
        }

        virtual void breath()const override{
            std::cout << "Pigoen::breath called for : "<< m_description << std::endl;
        }

         virtual void fly() const{
            std::cout <<"Pigeon::fly() called for bird : " << m_description << std::endl;
        }
        virtual void stream_insert(std::ostream & out) const
        {
            out << "Pigeon [description : "<< m_description << " , wing_color : "<< m_wing_color << " ] ";
        }
};

#endif