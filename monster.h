#ifndef monster_h
#define monster_h

class monster{
private:
	string name;
	int hp,potion;
public:
	void Attack(monster &);
    void heal();
	monster(string="Unknown", int=1,int=1);
	~monster();
	void display();
};
#endif

monster::monster(string n, int h, int p)
{
	name=n;
	hp=h;
	potion=p;
	cout<<"Monster "<<name<<" is here"<<endl;
}

monster::~monster()
{
	cout<<name<<" is gone."<<endl;
}

void monster::display()
{
	cout<<"Name: "<<name<<endl;
	cout<<"HP: "<<hp<<endl;
	cout<<"Potions: "<<potion<<endl;
}

