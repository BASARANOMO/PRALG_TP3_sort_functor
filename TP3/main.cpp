#include "compareEleve.h"
#include "eleve.h"
#include<algorithm>
#include<vector>

int main() {
	vector<Eleve> vec;
	srand((unsigned)time(NULL));  // create a random seed
	//int len_vec = rand() % 20 + 1;
	int len_vec = 20;
	for (int i = 0; i < len_vec; i++) {
		vec.push_back(Eleve());
	}

	vector<Eleve>::const_iterator it = vec.begin();
	for (; it != vec.end(); ++it) {
		it->show_student_info();
	}

	cout << endl << "Sort by name (in-place):" << endl;
	int compteurNom = 0;
	CompareNom cmp1(&compteurNom);
	sort(vec.begin(), vec.end(), CompareNom(cmp1));
	//vector<Eleve>::const_iterator it = vec.begin();
	it = vec.begin();
	for (; it != vec.end(); ++it) {
		it->show_student_info();
	}
	cout << "Number of comparisons: " << compteurNom << endl;

	cout << endl << "Sort by grade (in-place):" << endl;
	int compteurNote = 0;
	CompareNote cmp2(&compteurNote);
	sort(vec.begin(), vec.end(), cmp2);
	//vector<Eleve>::const_iterator it = vec.begin();
	it = vec.begin();
	for (; it != vec.end(); ++it) {
		it->show_student_info();
	}
	cout << "Number of comparisons: " << compteurNote << endl;

	return 0;
}
