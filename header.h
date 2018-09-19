#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define Nil 0
#define MaxEl 10

typedef int infotype ;
typedef int address;

typedef struct {
    int T[MaxEl+1];
    int TOP;
}Stack;

#define TOP(K) (K).TOP
#define InfoTop(K) (K).T[ (K).TOP ]

void CreateEmpty(Stack *S) ;
bool isFull(Stack s);
void Push (Stack *S, infotype X);

void POP (Stack *S, infotype *X)  ;
void PrintStack(Stack S);
bool isEmpty(Stack s);


#endif // HEADER_H_INCLUDED
