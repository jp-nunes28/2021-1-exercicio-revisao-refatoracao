#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {
    
    public: 
    
    double valor();
    double comissao();
    void print();

    protected:

    double Taxa_comissao = 0.04;

};

#endif
