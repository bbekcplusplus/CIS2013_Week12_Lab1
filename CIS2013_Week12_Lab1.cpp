#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class Person {
private:
	int legs;
	int arms;
	
public:
	string hair;
	string name;

	void Person() {
		setName();
		setHair();
		legs = 2;
		arms = 2;
   }
	int getArms() {
		return arms;
	}

	int getLegs() {
		return legs;
	}
	void setLegs() {
		cout << "How man legs does this person have? ";
		cin >> legs;
	}

	void SetName() {
		cout << "What is the person's name?";
		cin >> name;
	}

	void SetHair() {
		cout << "What hair color do you want?";
		cin >> hair;
	}
};
class Man: public Human {
public:
	bool hasEgo = true;
	string pee = "standing";
};

int main() {
	Person bob;
	Person sue;
	
	cout << "Our person has" << bob.name << "legs &" << bob.getLegs() << "arms" << endl;
	bob.getArms() << "arms theirs hair color is " << bob.hair << endl;
	cout << bob.name << "has an ego " << bob.hasEgo << endl;

	sue.setLegs();
	
	cout << "Our person has" << sue.name << "legs &" << sue.getLegs() << "arms" << endl;
	sue.getArms() << "arms theirs hair color is " << sue.hair << endl;
	return 0;
}