#include "header.h"

void CreateEmpty(Stack *S)
{
    S->TOP=0 ;   ///(*S) = 0;           /// Tumpukan paling bawah ( 0 ) diisi KOSONG
}

void Push (Stack *S, int X)
{
    if(!isFull(*S)){
        S->TOP++;        ///TOP(*S)++;                  /// ubah TOP ke paling atas
        S->T[S->TOP] = X ;///InfoTop(*S) = X ;
    }else{
        printf("penuh\n");
    }

}

bool isFull(Stack s){
    if(s.TOP == MaxEl){
        return true;
    }else {
        return false;
    }
}

void POP (Stack *S, int *X)        /// ambil data teratas TOP >>> TOP turun 1
{
    if(!isEmpty(*S)){
        /// Hapus data yang ada di TOP
        *X = S->T[S->TOP];           /// nilai data teratas dimasukan variabel X
        TOP(*S)--;
    }else{
        printf("Stack sudah kosong\n");
    }
}

void PrintStack(Stack S)             /// cetak stack dari tumpukan paling atas ke bawah , sampai elemen 0 (Nil)
{
    while (TOP(S) != 0 )
    {
        printf("| %d |\n", InfoTop(S));
        TOP(S)--;
    }

///    for(int i = 1 ; i<= TOP(S) ; i++){
///            printf("| %d |\n", S.T[i]);
///    }

}



bool isEmpty(Stack s){
    if(s.TOP == 0){
        return true;
    }else{
        return false;
    }
}
