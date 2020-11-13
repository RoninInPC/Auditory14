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
void Out(C<A> Cont,int size) {
	for (A i : Cont)
	{
		std::cout << i << ' ';
	}
	std::cout << '\n';
}
std::map<int, Person> MakeMap(int size,int i) {
	std::map<int,Person> Ans;
	Person person;
	for (int i = 0; i < size; i++) {
		person=Person::Person();	
		std::pair <int, Person> p(person.Age, person);
		Ans.insert(p);
		/*if (typeid(A) == typeid(std::string)) {
			std::pair <std::string, Person> p1(person.Class, person);
			Ans.insert(p1);
		}*/
	}
	return Ans;
}
std::map<std::string, Person> MakeMap(int size, char i) {
	std::map<std::string, Person> Ans;
	Person person;
	for (int i = 0; i < size; i++) {
		person = Person::Person();
		std::pair <std::string, Person> p(person.Class, person);
		Ans.insert(p);
	}
	return Ans;
}
template<class A,class B>
void Out(std::map<A, B> Map) {
	typename std::map<A,B>::iterator it2 = Map.begin();
	for (int i = 0; i < Map.size(); i++) {
		Person p = it2->second;
		std::cout << p.Age << ' ' << p.Class << ' ' << p.Family << '\n';
		it2++;
	}
}
