#include<vector>
#include <deque>
#include<list>
#include"shablon.hpp"
int main() {
	std::list<int> A = create_container<int, std::list>(10);
	Out<int, std::list>(A);
	std::vector<float> B = create_container<float, std::vector>(20);
	Out<float, std::vector>(B);
	std::map<Person, std::string> MAP2;// = MakeMapInt(20);
	MAP2.clear();
	return 0;
}