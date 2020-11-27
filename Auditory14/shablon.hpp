#include<iterator>
#include<iostream>
#include<map>

#include"person.hpp"
template <class A , template<class E,class Alloc=std::allocator<E>> typename C>
C<A> create_container(int size) {
	srand(size);
	C<A> a(size);
	typename C<A>::iterator it1 = a.begin();
	for (int i= 0; i < size; i++) {
		*it1 = rand() % 100;
		*it1++;
	}
	return a;
}
template<class A,template<class E, class Alloc = std::allocator<E>> typename C>
void Out(C<A> Cont) {
	for (A& i : Cont)
	{
		std::cout << i << ' ';
	}
	std::cout << '\n';
}
template<class A>
std::map<Person, std::string,A> MakeMap(int size) {
	std::map<Person, std::string, A> Ans;
	Person person;
	for (int i = 0; i < size; i++) {
		person = Person::Person();
		std::pair <Person, std::string> p(person, person.Class);
		Ans.insert(p);
	}
	return Ans;
}
template<class A,class B, class C>
void Out(std::map<A, B, C> Map) {
	for (auto it = Map.begin(); it != Map.end(); ++it) {
		Person p = it->first;
		std::cout << p.Age << " " << p.Class << " " << p.Family << "\n";
	}
}