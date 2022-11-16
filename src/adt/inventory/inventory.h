/* ADT Food */
#include "../wordmachinefood/wordmachine.h"
#include "../boolean/boolean.h"
#include "../time/time.h"
#include "../point/point.h"
// #include "../prioqueuetime/prioqueuetimeinv.h"
#include "../queuelinked/queuelinked.h"

#ifndef INVENTORY_H
#define INVENTORY_H

#define INVENTORY_CAP 100
#define IDX_UNDEF -999


// typedef struct
// {
//     Food *I; /* tabel penyimpan elemen */
// } FoodList;

#define ID(f) (f).id
#define NAME(f) (f).name
#define Time(f) (f).Time
#define ACT(f) (f).act
#define DURATION(f) (f).duration

void Createinventory(Queue *Q);
/* I.S. f sembarang */
/* F.S. Terbentuk inventory kosong */

//boolean isInventoryEmpty(FoodList f);
/* Mengirim true jika inventory kosong */

void AddInventory(Queue *Q, Food I);
/* I.S. f terdefinisi */
/* F.S. food ditambahkan ke inventory */

void DisplayInventory();

#endif
