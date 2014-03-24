#if !defined(__FUNSKJONER_H)
#define __FUNKSJONER_H

// EIENDOM

void eiendomSwitch();
void eiendomDisplay();
void eiendomNy();
void eiendomSlett();
void eiendomEndre();

// SONE

void soneDisplay();

// KUNDER

void kundeSwitch();
void kundeDisplay();
void kundeNy();
void kundeSlett();
void kundeEndre();

// ANNET

void ukeUtskrift();

void lagNavn(char* t, char* s1, char* s2, int n, const int LEN);

void lesValg();

void skrivMeny();

#endif