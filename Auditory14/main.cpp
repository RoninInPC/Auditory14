#include<vector>
#include <deque>
#include<list>
#include"shablon.hpp"
int main() {
	std::list<int> A = create_container<int, std::list>(10);
	Out<int, std::list>(A,10);
	std::vector<int> B = create_container<int, std::vector>(101);
	Out<int, std::vector>(B, 101);
	std::map<int, Person> MAP= MakeMap(10,0);
	Out(MAP);
	MAP.clear();
	std::cout << '\n';
	std::map<std::string, Person> MAP1 = MakeMap(8,'1');
	Out(MAP1);
	MAP1.clear();
	return 0;
}