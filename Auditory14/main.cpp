#include<vector>
#include <deque>
#include<list>
#include"shablon.hpp"
struct Comp {
	bool operator()(const Person& one, const Person& two)const {
		return one.Class < two.Class;
	}
};
struct Comp2 {
	bool operator()(const Person& one, const Person& two)const {
		return one.Age < two.Age;
	}
};
int main() {
	std::list<int> A = create_container<int, std::list>(10);
	Out<int, std::list>(A);
	std::vector<float> B = create_container<float, std::vector>(20);
	Out<float, std::vector>(B);
	std::map<Person, std::string,Comp> MAP2 = MakeMap<Comp>(20);
	Out<Person,std::string,Comp>(MAP2);
	MAP2.clear();
	std::cout << "\n";
	std::map < Person, std::string, Comp2> MAP3 = MakeMap<Comp2>(20);
	Out<Person, std::string, Comp2>(MAP3);
	MAP3.clear();
	return 0;
}