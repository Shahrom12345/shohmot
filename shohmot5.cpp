#include <iostream>

using namespace std;

int main()

 //PESHKA
{
  int x2,x4,y2,y4;
  cin>>x2>>y2>>x4>>y4;
  if(x2>8 || x4>8 || y2>8 || y4>8){
     cout<<"Your must enter 1-8 if1";
  }
  else if(x2<0 and x4<0 and y2<0 and y4<0){
    cout<<"Your must enter 1-8 if2";
  }
   else if(y2 == 2)


  if((y4-1 == y2 || y4-2 == y2) &&  x4==x2){
    cout<<"RAFTA METONAD"<<endl;
  }
  else if(y4-1 == y2 && abs(x2-x4)==1){
    cout<<"ZADA METONAD"<<endl;
  }
  else{
    cout<<"NA RAFTA METONAD NA ZADA METONAD"<<endl;
  }


  else if(y2 > 2)
  if(y4-1 == y2 && x4==x2){
    cout<<"RAFTA METONAD"<<endl;

  }
  if(y2 == 8){
    cout<<"Choose your figure:";
    string name_of_figure;
    string FARZIN="FARZIN";
    string ASP="ASP";
    string RUH="RUH";
    string FIL="FIL";
    cin>>name_of_figure;
    if(name_of_figure == FARZIN){
        cout<<"FARZIN SHUD!"<<endl;
    }
    if(name_of_figure == ASP){
        cout<<"ASP SHUD!"<<endl;
        }
    if(name_of_figure == RUH){
        cout<<"RUH SHUD!"<<endl;
        }
    if(name_of_figure == FIL){
        cout<<"FIL SHUD!"<<endl;
        }

  }
  else if(y4-1 == y2 && abs(x2-x4)==1){
    cout<<"ZADA METONAD"<<endl;
  }
  else {
    cout<<"NA RAFTA METONAD NA ZADA METONAD";
  }



    main();
}
