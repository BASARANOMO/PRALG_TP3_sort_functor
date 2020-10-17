#pragma once
#include<string>
#include<iostream>
#include <iomanip>
#include<random>
#include <time.h>
using namespace std;

class Eleve {
	string nom;
	int note;
public:
	Eleve();
	Eleve(string str, int num);
	Eleve(const Eleve& eleve);
	~Eleve();

	string get_name() const;
	void set_name(string str);
	int get_grade() const;
	void set_grade(int num);

	string random_name();
	int random_grade();

	void show_student_info() const;
};