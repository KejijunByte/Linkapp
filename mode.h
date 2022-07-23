//group file.
#include "core.h"

double monthcost;
double kwh;

void func(int cho,char& opt){
    switch (opt){
    case 'h':
    case '?':
        help();
        break;
    case 'p':
        switch(cho){
            case 1:
                monthcost = cokwh3 * kwh;
                cout<<"Cost : "<<monthcost<<endl;
                break;
            case 2:
                monthcost = cokwh4 * kwh;
                cout<<"Cost : "<<monthcost<<endl;
                break;
            default:
                cout<<">>"<<cho<<" is not ready..."<<endl; 
                break;   
        };
    case 'i':
        switch (cho){
            case 3:
                monthcost = cokwh1 * kwh;
                cout<<"Cost : "<<monthcost<<endl;
                break;
            case 4:
                monthcost = cokwh2 * kwh;
                cout<<"Cost : "<<monthcost<<endl;
                break;
        default:
            cout<<cho<<" is not ready..."<<endl; 
            break;       
        };
    case 'q':
        exit(EXIT_SUCCESS);
        break;
    default:
        cout<<">>\'"<<opt<<"\' is not a exist option\n";
        break;
    };
}