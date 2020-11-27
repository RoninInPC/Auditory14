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
std::map<int, Person> MakeMap(int size) {
	std::map<int,Person> Ans;
	Person person;
	for (int i = 0; i < size; i++) {
		person=Person::Person();	
		std::pair <int, Person> p(person.Age, person);
		Ans.insert(p);
	}
	return Ans;
}
std::map<std::string, Person> MakeMap2(int size) {
	std::map<std::string, Person> Ans;
	Person person;
	for (int i = 0; i < size; i++) {
		person = Person::Person();
		std::pair <std::string, Person> p(person.Class, person);
		Ans.insert(p);
	}
	return Ans;
}
std::map<Person, std::string> MakeMapInt(int size) {
	std::map<Person, std::string> Ans;
	Person person;
	for (int i = 0; i < size; i++) {
		person = Person::Person();
		std::pair <Person, std::string> p(person, person.Class);
		Ans.insert(p);
	}
	return Ans;
}