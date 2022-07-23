//This file for core of app
#include "core.h"
#include "mode.h"
//Developer: https://gitee.com/Kawaiino-Nyanpasu

using Cpp::IO::cin;

int main(){
    version();
    int choice;
    char cho_ui;
    while(true){
        cout<<">>";
        cin>>cho_ui;
        if(cho_ui == 'h' || cho_ui == 'q' || cho_ui == '?')
        {
            int choice = 0;
            goto fc;
        }
        cout<<">>Enter a number for choice : ";
        cin>>choice;
        cout<<">>Degree of ele (kw/h) :";
        cin>>kwh;
        fc:
        func(choice,cho_ui);
    }

    return 0;
}