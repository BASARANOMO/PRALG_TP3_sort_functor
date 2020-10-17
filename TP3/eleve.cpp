#include "eleve.h"

Eleve::Eleve() {
	nom = random_name();
	note = random_grade();
}

Eleve::Eleve(string str, int num) {
	nom = str;
	note = num;
}

Eleve::Eleve(const Eleve& eleve) {
	nom = eleve.get_name();
	note = eleve.get_grade();
}

Eleve::~Eleve() {
	//cout << "Object is being deleted." << endl;
}

string Eleve::get_name() const {
	return nom;
}

void Eleve::set_name(string str) {
	this->nom = str;
}

int Eleve::get_grade() const {
	return note;
}

void Eleve::set_grade(int num) {
	this->note = num;
}

string Eleve::random_name() {
	string buffer;
	//srand(time(NULL));
	// should not use srand() in loop
	buffer += 'A' + rand() % 26;  // first letter
	int len;  // length of lowercase letters
	len = rand() % 10 + 1;
	for (int i = 0; i < len; i++) {
		buffer += 'a' + rand() % 26;
	}
	return buffer;
}

int Eleve::random_grade() {
	//srand(time(NULL));
	// should not use srand() in loop
	return rand() % 21;
}

void Eleve::show_student_info() const {
	cout << "Name: " << left << setw(11) << get_name() << "; grade: " << get_grade() << endl;
}