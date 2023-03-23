
 //character arrays and pointers 
#include<stdio.h>

void print(const char* name){

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

    char *name ="meowhecker";  // name Array 會變成Const 變數 
    print(name);

}