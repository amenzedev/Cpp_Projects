#include "Person.h"
#include "engineer.h"
#include "civilengineer.h"
#include <iostream>

CivilEngineer :: CivilEngineer(){

    std::cout <<"Default constructor Civil Engineer Called..."<<std::endl;

}

CivilEngineer::CivilEngineer(std::string_view fullname, int age , const std::string address,int contract_count, std::string_view speciality)
:Engineer(fullname,age,address,contract_count),m_speciality(speciality)
{
    std::cout <<"Custom constructor Civil Engineer Called..."<<std::endl;
}
std::ostream& operator<<(std::ostream& out,const CivilEngineer& operand)
{
    out << "CivilEngineer [Full name : "<< operand.get_full_name() << 
        " ,age : "<< operand.get_age() << 
        " , address : "<< operand.get_address()<<
        " ,contract_count : "<< operand.get_contract_count()<< 
        ",speciality : "<< operand.m_speciality<< " ]";
    return out;
}

CivilEngineer::~CivilEngineer(){
    
}