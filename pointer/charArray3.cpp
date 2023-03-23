//character arrays and pointers 
#include<stdio.h>

void print(char* name){

    int i=0;
    while (*(name+i) != '\0')
    {
        //printf("%c",name[i]);
        printf ("%c", *(name+i));
        i++;
    }
    printf("\n");
}

int main(){
    char name[20]="meowhecker";
    print(name);
}