#include "compareEleve.h"

CompareNom::CompareNom(int* count) {
	ptr = count;
}

bool CompareNom::operator()(Eleve e1, Eleve e2) const {
	++(*ptr);
	return (e1.get_name() < e2.get_name());
}

CompareNote::CompareNote(int* count) {
	ptr = count;
}

bool CompareNote::operator()(Eleve e1, Eleve e2) const {
	++(*ptr);
	return (e1.get_grade() < e2.get_grade());
}