#include <iostream>

using namespace std;

int main()

 //VAZIR
{
  int x1,x2,y1,y2;
  cin>>x1>>y1>>x2>>y2;
  if(x1>8 || x2>8 || y1>8 || y2>8){
     cout<<"your must enter 1-8 if1";
  }
  else if(x1<0 and x2<0 and y1<0 and y2<0){
    cout<<"your must enter 1-8 if2";
  }
   else if(x1==x2 || y1==y2 )
  {
      cout<<"Yes";
  }
  else if(x1-y1 == x2-y2 || x1+y1 == x2+y2)
     cout<<"Yes";

   else{
    cout<<"No";
  }


    main();
}

