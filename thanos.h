#ifndef thanos_h
#define thanos_h

#include"monster.h"

class Thanos {
private:
    int stones;
    int hp; //extra hp;
public:
    /* constructor and destructor */
Thanos(int =0,int=1000); //stone hp
~Thanos();
    void snap_finger(monster[],int); 
    /* show all hps
    / clear half of monster hp, if stone =6*/
    void operator++(); // increase the stone;
    void clear_hp();
};

void Thanos::snap_finger(monster m[],int n)
{
    int i;
    if (stones==6)
    {
    for(i=n/2; i<n; i++)
    {
        m[i].clear_hp();
    }
    }
    else
    {
        cout<<"Thanos does not have enough infinity stones to snap his fingers."<<endl;
    }
}

void Thanos::operator++()
{
    this->stones=stones+1;
}

Thanos::Thanos(int s, int h)
{
    stones=s;
    hp=h;
    cout<<"Thanos has arrived on the battlefield with "<<hp<<" hp."<<endl;
}
Thanos::~Thanos()
{
    cout<<"Thanos is gone."<<endl;
}

#endif