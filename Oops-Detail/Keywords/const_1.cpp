#include<iostream>

using namespace std;


int main(){
    
    char this_char='a';
    char that_char='b';

    char* mybuf=&this_char;
    char* yourbuf=&that_char;

    char* const aptr=mybuf;
    //*aptr='t'; //This is possible. For detail, go to notes
    //aptr=yourbuf; //Give error since aptr pointer is const

    return 0;
}