//Core_H The basic modfitical of Application.
//Developer: https://gitee.com/Kawaiino-Nyanpasu

#ifndef CORE_H_
#define CORE_H_
#include "/media/Workstation/VS-Code/Ref.h"
#include "/media/Workstation/VS-Code/ASCII.h"//Use my rewrite file -- ref.h
extern "C" void version();
extern "C" void help();


using Cpp::IO::cout;
using Cpp::IO::endl;

//////////////////////
    const double cokwh1 = 0.6104;
    const double cokwh2 = 0.6072;
    const double cokwh3 = 0.5854;
    const double cokwh4 = 0.5604;
    //for 1 kW/h cost.
//////////////////////

#define A_YEAR_MONTH 12

const char ver [8]= "114.514";
void version(){
    cout<<"MainApp -- VER "<< ver <<" Alpha.\n(c) Karinsoft. 2020-2022"<<endl;
}

void help(){
cout<<"\n\nOPTION:\n";
cout<<_tab1<<"h ?  --- for help"<<endl;
cout<<_tab1<<"i ---- industry electronment calc , -- 3 -- 4 ----only\n";
cout<<_tab1<<"p ---- people-use elec , -- 1 -- 2 --- only\n";
cout<<_tab2<<"DEVELOPING...\n";
}



#endif

