#ifndef OSLINUX_H
#define OSLINUX_H
#ifndef OSWINDOWS_H
#define OSWINDOWS_H
#ifndef OSOSX_H
#define OSOSX_H
#include <OSOSx.h>
#include <stdio.h>
#include <iostream>
using namespace std;
#include <string.h>
#include "iApariencia.h"


class OSLinux : public iApariencia
{
    public:
        OSLinux();
        virtual ~OSLinux();
        void PintarLinux();

    protected:

    private:
        char _lin_titulo[100];
        char _lin_area_trabajo[100];
        char _lin_estado[100];
        void DibujarSimbolo(char,int,bool _saltarlinea = false);
        void CentrarTexto(char*);
};

class OSWindows:public iApariencia{
    public:
        OSWindows();
        virtual ~OSWindows();
        void PintarWindow();

    protected:

    private:
        char _win_titulo[100];
        char _win_area_trabajo[100];
        char _win_estado[100];
        void DibujarSimbolo(char,int,bool _saltarlinea=false);
        void CentrarTexto(char*);
};

#endif // OSWINDOWS_H

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


#endif // OSLINUX_H
