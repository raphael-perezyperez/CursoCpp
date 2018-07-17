#include <iostream>
#include <vector>

using namespace std;

int main() 
{

	vector<int> vetor1;
	vector<int> vetor2;

	vetor1.push_back(10);
	vetor1.push_back(20);

	cout << "vetor1: " << endl;
	cout << vetor1.at(0) << " " << vetor1.at(1) << endl;

	cout << endl;

	vetor2.push_back(100);
	vetor2.push_back(200);

	cout << "vetor2: " << endl;
	cout << vetor2.at(0) << " " << vetor2.at(1) << endl;

	cout << endl;

	vector<vector<int>> vetor_2d;

	vetor_2d.push_back(vetor1);
	vetor_2d.push_back(vetor2);

	cout << "vetor_2d: " << endl;
	cout << vetor_2d.at(0).at(0) << " " << vetor_2d.at(0).at(1) << endl;
	cout << vetor_2d.at(1).at(0) << " " << vetor_2d.at(1).at(1) << endl;

	cout << endl;

	vetor1.at(0) = 1000;

	cout << "vetor_2d: " << endl;
	cout << vetor_2d.at(0).at(0) << " " << vetor_2d.at(0).at(1) << endl;
	cout << vetor_2d.at(1).at(0) << " " << vetor_2d.at(1).at(1) << endl;

	cout << endl;

	cout << "vetor1: " << endl;
	cout << vetor1.at(0) << " " << vetor1.at(1) << endl;


	system("pause");
	return 0;

}