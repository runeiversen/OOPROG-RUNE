#if !defined(__KUNDECLASS_H)
#define __KUNDECLASS_H

#include "LISTTOOL2.H"

class Kunde : Num_element {
private: 
   int kundeNr;
   char* navn, * adresse, * postAdresse, * mail;

   List * interSoneListe;

public:

};

#endif