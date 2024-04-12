#ifndef OSOSX_H
#define OSOSX_H
#include <stdio.h>
#include <OSOSx.h>
#include <iostream>
#include <string.h>
#include "iApariencia.h"
using namespace std;

class OSOSx : public iApariencia
{
    public:
        OSOSx();
        virtual ~OSOSx();
        void PintarOSOSx();

    protected:

    private:
        char _osx_titulo[100];
        char _osx_area_trabajo[100];
        char _osx_estado[100];
        void DibujarSimbolo(char,int,bool _saltarlinea = false);
        void CentrarTexto(char*);
};

#endif // OSOSX_H
