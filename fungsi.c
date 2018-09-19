#include "header.h"

void CreateEmpty(Stack *S)
{
    TOP(*S) =Nil;           /// Tumpukan paling bawah ( 0 ) diisi KOSONG
}

void Push (Stack *S, infotype X)
{
    if(!isFull(*S)){
        TOP(*S)++;                  /// ubah TOP ke paling atas
        InfoTop(*S) = X ;
    }else{
        printf("penuh\n");
    }

}

void POP (Stack *S, infotype *X)        /// ambil data teratas TOP >>> TOP turun 1
{
    if(!isEmpty(*S)){
        *X = InfoTop(*S);           /// nilai data teratas dimasukan variabel X
        TOP(*S)--;
    }else{
        printf("Stack sudah kosong\n");
    }
}

void PrintStack(Stack S)             /// cetak stack dari tumpukan paling atas ke bawah , sampai elemen 0 (Nil)
{
    while (TOP(S) != Nil )
    {
        printf("| %d |\n", InfoTop(S));
        TOP(S)--;
    }
}

bool isFull(Stack s){
    if(s.TOP == MaxEl){
        return 1;
    }else {
        return 0;
    }
}

bool isEmpty(Stack s){
    if(s.TOP == 0){
        return true;
    }else{
        return false;
    }
}
