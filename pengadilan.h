#ifndef PENGADILAN_H_INCLUDED
#define PENGADILAN_H_INCLUDED

#include <iostream>
using namespace std;

#define next(P) (P)->next
#define first(L) (L).first
#define info(P) (P)->info
#define nil NULL


typedef int infotype;
typedef struct elemen *address;

struct elemen  {
    infotype info;
    address next,prev;
};

struct list {
    address first,last;
};

void welcome();
void createlist(list &L);
address alokasi (infotype X);
void dealokasi (address &P);

void insertlast (list &L, address P);
address findelm (list L, infotype X);
void deletefirst (list &L, address &P);

void printinfo(list L);
address findminimum(list L);


#endif // PENGADILAN_H_INCLUDED
