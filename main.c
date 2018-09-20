/*
    Pertemuan 1 Struktur Data
    Materi : Stack
*/
#include "header.h"


int main()
{
    Stack Z;            /// persiapan rak 0 , .... ,  maxEL+1
    int X;

    CreateEmpty(&Z);    /// buat rak kosong
    Push(&Z,70);         /// tumpukan pertama diisi 70 (baca fungsi PUSH)

    Push (&Z, 80);      /// TOP naik ke tumpukan atas, diisi 80
    Push (&Z, 60);      /// TOP naik ke tumpukan atas, diisi 80
    Push (&Z, 50);      /// TOP naik ke tumpukan atas, diisi 80
    Push (&Z, 40);      /// TOP naik ke tumpukan atas, diisi 80
    Push (&Z, 30);      /// TOP naik ke tumpukan atas, diisi 80
    Push (&Z, 20);      /// TOP naik ke tumpukan atas, diisi 80
    Push (&Z, 10);      /// TOP naik ke tumpukan atas, diisi 80
    Push (&Z, 9);      /// TOP naik ke tumpukan atas, diisi 80
    Push (&Z, 8);      /// TOP naik ke tumpukan atas, diisi 80
    Push (&Z, 7);      /// TOP naik ke tumpukan atas, diisi 80
    Push (&Z, 6);      /// TOP naik ke tumpukan atas, diisi 80

    printf("Stack 1 sebelum POP\n");
    PrintStack(Z);

    printf("fungsi POP\n");
//    POP (&Z, &X);
//    POP (&Z, &X);
//    POP (&Z, &X);
//    POP (&Z, &X);
//    POP (&Z, &X);
//    POP (&Z, &X);
//    POP (&Z, &X);
//    POP (&Z, &X);
//    POP (&Z, &X);
//    POP (&Z, &X);
//    POP (&Z, &X);
    POP (&Z, &X);
    printf("yang di POP : %d", X);
printf("Stack 2  Setelah POP \n");
    PrintStack(Z);

    return 0;
}





