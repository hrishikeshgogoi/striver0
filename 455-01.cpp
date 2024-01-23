/*1. Write a program that takes a character as input and prints 1, 0, or -1 according to the following rules.
 1, if the character is an uppercase alphabet (A - Z).
 0, if the character is a lowercase alphabet (a - z).
 -1, if the character is not an alphabet.
*/
#include<iostream>
using namespace std;

int main() {
    char x;
    cin>>x;
    if (x=='A'||x=='B'||x=='C'||x=='D'||x=='E'||x=='F'||x=='G'||x=='H'||x=='I'||x=='J'||x=='K'||x=='L'||x=='M'||x=='N'||x=='O'||x=='P'||x=='Q'||x=='R'||x=='S'||x=='T'||x=='U'||x=='V'||x=='W'||x=='X'||x=='Y'||x=='Z')
    {
        cout<<"1";
    }
    else if (x=='a'||x=='b'||x=='c'||x=='d'||x=='e'||x=='f'||x=='g'||x=='h'||x=='i'||x=='j'||x=='k'||x=='l'||x=='m'||x=='n'||x=='o'||x=='p'||x=='q'||x=='r'||x=='s'||x=='t'||x=='u'||x=='v'||x=='w'||x=='x'||x=='y'||x=='z')
    {
        cout<<"0";
    }
    else
    {
        cout<<"-1";
    }
    return 0;
}