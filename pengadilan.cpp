#include "pengadilan.h"

void welcome () {
    cout << endl;
    cout << "Selamat datang di aplikasi pengadilan" << endl;
    cout << "pres enter.." << endl;

}

void createlist(list &L){
    first(L) = nil;
}

address alokasi (infotype X) {
    address P = new elemen;
    info(P) = X;
    next(P) = nil;
    return P;
}

void dealokasi (address &P){
    delete P;
}

void insertlast ( list &L, address P){
    if (first(L) == nil) {
        first(L) = P;
    }
    else {
        address lt;
        lt = first(L);
        while (next(lt)!= nil) {
            lt = next(lt);
        }
        next(lt) = P;
    }
}

address findelm (list L, infotype X){
    if (first(L) != nil) {
        address P = first(L);
        while(next(P) != first(L) && (info(P) != X)) {
            P = next(P);
        }
        if (info(P) == X) {
            return P;
        }
    }
    return nil;
}

void deletefirst ( list &L, address &P){
    if (first(L) != nil) {
        first(L) = next(first(L));
        next(P) = nil;
    }
}


address findminimum(list L) {
    int a, cari;
    cari = info(first(L));
    int minimum;
    a = info(next(minimum));
    if (first(L) != nil) {
        while (next(minimum) != nil) {
            if (cari > a) {
                minimum = a;
            }
            else {
                cari = next(a);
            }
        }

    }
}
