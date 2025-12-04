#include<iostream>
using namespace std;


int main(){

    char this_char='a';
    char that_char='b';

    const char* mybuf=&this_char;
    char* yourbuf=&that_char;

    //char* bptr=mybuf; //Give error. Becz Pointer to variable declared as `const` 
                      //can be assigned to a pointer that is also declared as `const`

    const char* bptr=mybuf;
    // *btr='t'; //Give error. for detail refer notes

    return 0;
}