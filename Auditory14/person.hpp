#include<string>
#include<time.h>
std::string Fam[10] = { "Soloviev","Andreev","Gredeev","Slavov","Bomjidanov","Qwerteev","Grebenshikov","WERteev","Geyb","Korolev" };
std::string Cla[10] = { "manager","master","programmer","cleaner","tester","worker","Disignmaker","baker","defender","policeman" };
int n = 0;
class Person {
public:
	std::string Family;
	std::string Class;
	int Age;
	Person() { 
		srand(n*time(NULL)); 
		n++; 
		this->Family = Fam[rand() % 10]; 
		this->Class = Cla[rand() % 10]; 
		this->Age = rand() % 30 + 20; 
	};
};