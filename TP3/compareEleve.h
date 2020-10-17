#pragma once
#include"eleve.h"

class CompareNom {
	int* ptr;
public:
	CompareNom(int& count);

	bool operator()(Eleve e1, Eleve e2) const;
};

class CompareNote {
	int* ptr;
public:
	CompareNote(int& count);

	bool operator()(Eleve e1, Eleve e2) const;
};