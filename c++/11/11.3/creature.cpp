/*
	CH-230-A 
    a11-p3.[c or cpp or h] 
    Zixiang Wang 
    zixwang@jacobs-university.de
*/

#include <iostream>

using namespace std;

class Creature {
	public:
		Creature();  
		void run() const;

	protected:
		int distance;
};

Creature::Creature(): distance(10)
{}    

void Creature::run() const
{ 
    cout << "running " << distance << " meters!\n";
}  

class Wizard : public Creature {
	public:
		Wizard();
		void hover() const;

	private:
		int distFactor;
};

Wizard::Wizard() : distFactor(3)
{}  

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

// Creeper!!!!!!!!
class Creeper : public Creature {
    public:
        Creeper();
        void explode() const;
        void setDistance(int);
        double getHeight() const;
        int getExplodePower() const;

    protected:
        double height;
        int explodePower;

};

Creeper::Creeper() {
    height = 1.7;
    explodePower = 3;
    distance = 10;
}

void Creeper::setDistance(int newD) {
    distance = newD;
}

int Creeper::getExplodePower() const {
    return explodePower;
}

double Creeper::getHeight() const {
    return height;
}

void Creeper::explode() const {
    if(distance <= 8) {
        cout << "BOOOOOM!" << endl;
    }
    else {
        cout << "Creeper is not in detection range" << endl;
    }
}

// charged creeper!!!!!!!!
class Charged_Creeper : public Creeper {
    public:
        Charged_Creeper();
        void explode() const;
        void setDistance(int);
        int getExplodePower() const;
        double getHeight() const;
};

Charged_Creeper::Charged_Creeper() {
    explodePower = 6;
    height = 1.7;
    distance = 13;
}

void Charged_Creeper::explode() const {
    if(distance <= 8) {
        cout << "BBOOOOOOOOOOMM!" << endl;
    }
    else {
        cout << "Charged creeper is not in detection range" << endl;
    }
}

void Charged_Creeper::setDistance(int newDistance) {
    distance = newDistance;
}

int Charged_Creeper::getExplodePower() const {
    return explodePower;
}

double Charged_Creeper::getHeight() const {
    return height;
}

int main()
{ 
    cout << "Creating an Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    cout << endl << "Creating a Creeper." << endl;
    Creeper m;
    m.explode();

    cout << endl << "Creating a Charged creeper" << endl;
    Charged_Creeper cc;
    cc.explode();

    return 0;
} 
