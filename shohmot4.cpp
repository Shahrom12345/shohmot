#include <iostream>

using namespace std;

int main()

 //SHOH
{
  int x2,x4,y2,y4;
  cin>>x2>>y2>>x4>>y4;
  if(x2>8 || x4>8 || y2>8 || y4>8){
     cout<<"your must enter 1-8 if1";
  }
  else if(x2<0 and x4<0 and y2<0 and y4<0){
    cout<<"your must enter 1-8 if2";
  }
   else if(abs(x2-x4)==0 && abs(y2-y4)==1 ||
           abs(x2-x4)==1 && abs(y2-y4)==0 ||
           abs(x2-x4)==1 && abs(y2-y4)==1 )
  {
      cout<<"Yes";
  }

   else{
    cout<<"No";
  }


    main();
}

