#ifndef monster_h
#define monster_h

class monster{
private:
	string name;
	int hp;
public:
	void Attack(monster &);
    void heal();
	monster(string="Unknown", int=10);
	~monster();
	void display();
	void clear_hp();
	/*
	bool operator>(monster &x);
	void operator+=(int);
	void operator+=(monster &x);
	void operator--();
	*/
};
#endif

monster::monster(string n, int h)
{
	name=n;
	hp=h;
	cout<<"Monster "<<name<<" is here with "<<hp<<" hp."<<endl;
}

monster::~monster()
{
	cout<<name<<" is gone."<<endl;
}

void monster::display()
{
	if(hp>0)
	{
	cout<<name<<" is alive and has "<<hp<<" hp."<<endl;
	}
	else
	{
		cout<<name<<" has dusted."<<endl;
	}
}

void monster::clear_hp()
{
	this->hp=0;
}


/*bool monster::operator>(monster &x)
{
	if (hp>x.hp) return true;
	else return false;
}

void monster::operator+=(int a)
{
	this->hp=hp+a;
}

void monster::operator--()
{
 	this->hp--;
}

void monster::operator+=(monster &x)
{
	hp=hp+x.hp;
	x.hp=0;
}
	*/