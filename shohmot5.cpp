#include <iostream>

using namespace std;

int main()

 //PESHKA
{
  int x1,x2,y1,y2;
  cin>>x1>>y1>>x2>>y2;
  if(x1>8 || x2>8 || y1>8 || y2>8){
     cout<<"your must enter 1-8 if1";
  }
  else if(x1<0 and x2<0 and y1<0 and y2<0){
    cout<<"your must enter 1-8 if2";
  }
   else if(y1 == 2)


  if((y2-1 == y1 || y2-2 == y1) &&  x2==x1){
    cout<<"Rafta metona"<<endl;
  }
  else if(y2-1 == y1 && abs(x1-x2)==1){
    cout<<"Zada metonad"<<endl;
  }
  else{
    cout<<"na rafta metonad na zada metonad"<<endl;
  }


  else if(y1 > 2)
  if(y2-1 == y1 && x2==x1){
    cout<<"Rafta metonad"<<endl;

  }
  if(y1 == 8){
    cout<<"choose your figure:";
    string name_of_figure;
    string ferz="ferz";
    string asp="asp";
    string ruh="ruh";
    string fil="fil";
    cin>>name_of_figure;
    if(name_of_figure == ferz){
        cout<<"Ferz shud!"<<endl;
    }
    if(name_of_figure == asp){
        cout<<"asp shud!"<<endl;
        }
    if(name_of_figure == ruh){
        cout<<"ruh shud!"<<endl;
        }
    if(name_of_figure == fil){
        cout<<"fil shud!"<<endl;
        }

  }
  else if(y2-1 == y1 && abs(x1-x2)==1){
    cout<<"zada metonad"<<endl;
  }
  else {
    cout<<"na rafta metonad na zada metonad";
  }



    main();
}
