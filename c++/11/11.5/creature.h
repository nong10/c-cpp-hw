/*
	CH-230-A 
    a11-p5.[c or cpp or h] 
    Zixiang Wang 
    zixwang@jacobs-university.de
*/

#ifndef _creature_
#define _creature_

class Creature {
	public:
		Creature();  
		void run() const;

	protected:
		int distance;
};

class Wizard : public Creature {
	public:
		Wizard();
		void hover() const;

	private:
		int distFactor;
};

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

class Charged_Creeper : public Creeper {
    public:
        Charged_Creeper();
        void explode() const;
        void setDistance(int);
        int getExplodePower() const;
        double getHeight() const;
};

#endif