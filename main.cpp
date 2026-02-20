#include <iostream>
using namespace std;

#include "thanos.h"

int main() {

  int n;
  cout<<"How many monsters?";
  cin>>n;

  monster *m=new monster[n]; //make sure they have hp
  Thanos T;
 
  /* Add some story*/
  

  cout<<"Thanos collects 2 infinity stones after collecting them from some monsters."<<endl;
  ++T;
  ++T;
  T.snap_finger(m,n);
  cout<<"Thanos takes on some more monsters and collects 2 more infinity stones."<<endl;
  ++T;
  ++T;
  T.snap_finger(m,n);
  cout<<"Thanos obtains the last 2 infinity stones needed and completes his gauntlet."<<endl<<"He snaps his fingers and half of the monsters dust away....."<<endl;
  ++T;
  ++T;
  T.snap_finger(m,n);//Clear hp n/2(half) of the monster. 

  int i;
  for(i=0;i<n;i++)
      m[i].display();// If the hp=0, you do not display"" -->you will see only n/2 monster
  

  delete [] m;

}


/*#include <iostream>
using namespace std;

#include "monster.h"

int main(int argc, char* argv[]) {

    monster A("Siri", 10, 1);
    monster B("Daisuke");
    cout<<"===The strongest hp is==="<<endl;
    if(A>B) A.display();
    else B.display();
    B+=10;
    A+=B;
    --A;
    A.display();
    B.display();
    
     /*
    // monster x[5]={{"James"},{"Michael", 20}, {"Sarah"}, {"Amy"}, {"Sam"}};

    monster c;
    monster *p;
    p=&c;
    p->display();
    p=&A;
    p->display();

    p=new monster("Sarina",20);
    p->display();
    delete p;

    p=new monster[3];
    delete [] p;
    p=new monster(50,2);
    p->display();
    delete p;
  /*
 
 monster *p,x;
  p=&x;
  p=new monster;
 delete p;

 p=new monster[3];
 delete []p;

*/
