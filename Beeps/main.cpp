//Make the computer play some music using Beeps.

#include <iostream>
#include <windows.h>
using namespace std;

/*
NOTICE: NO COPYRIGHT INFRINGEMENT INTENDED
Songs were adopted from a piano practice booklet.
*/
void playlist(){
    cout<<"\n\t\t\t\t\t\t     PlayList"<<endl;
    cout<<"\t\t\t\t1-------------------------------> Joy to the World"<<endl;
    cout<<"\t\t\t\t2-----------------------------------> Silent Night"<<endl;
    cout<<"\t\t\t\t3-------------------------------------> Bakit Papa"<<endl;
    cout<<"\t\t\t\t4------------------------> More Songs(COMING SOON)"<<endl;
    cout<<"\t\t\t\t\t  Enter 0 or any letter to exit"<<endl;
}

int BakitPapa() {

}
int JoyToTheWorld(){

}
int SilentNight(){

}

int tone() {
    cout<<"\t\t\t\t\t      MoRe SoNGS CoMiNG SooN"<<endl;
    Beep(523,1000);//c
    Beep(587,1000);//d
    Beep(659,1000); //e
    Beep(698,1000);//f
    Beep(783,1000);//g
    Beep(880,1000);//a
    Beep(987,1000);//b
    Beep(1046,1000);//C
    Beep(1174,1000);//D
    Beep(1318,1000);//E
    Beep(1396,1000);//F
    Beep(1567,1000);//G
    Beep(1760,1000);//A
    Beep(1975,1000);//B
    Beep(2093,1000);//^C
    Beep(2349,1000);//^D
    Beep(2637,1000);//^E
    Beep(2793,1000);//^F
    Beep(3135,1000);//^G
    Beep(3520,1000);//^A
    Beep(3951,1000);//^B
    Beep(4186,1000);//^^C
    cout<<endl;
    return 5;
}

int main()
{
    int x,n;
    cout<<"\t\t\t\t\t\t   MUSIC in C++"<<endl;
    cout<<endl;
    playlist();
    do{
        cout<<"\t\t\t\t\t\t\t";
        cin>>x;
        if (x==0) n=0;
        else {
            if(x>6||x<0) {
                cout<<"\t\t\t\t\t       >>>No Song Found<<<"<<endl<<"\t\t\t\t\t\t   |Try Again|"<<endl<<endl;
            } else {
                switch(x){
                    case 1: n=JoyToTheWorld();
                    break;
                    case 2: n=SilentNight();
                    break;
                    case 3: n=BakitPapa();
                    break;
                    case 4: n=tone();
                    break;
                }
            }
            playlist();
        }
    } while(n!=0);
    return 0;
}

/*
MIT License

Copyright (c) 2026 ARTO

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/
