#include <iostream>
using namespace std;

void main()
{
	int luku1; 
	double positiiviset = 0, negatiiviset = 0, yht = 0;
	
	do{
		cout << "Anna luku: ";
		cin >> luku1;
		if (luku1 < 0){
			++negatiiviset;
			++yht;
		}
		else if (luku1 > 0){
			++positiiviset;
			++yht;
		}
	} while (luku1 != 0);

	cout << endl;
	cout << "Sy”tit kokonaislukuja seuraavasti:" << endl;
	cout << "----------------------------------" << endl;
	cout << "Negatiiviset " << negatiiviset << " kpl, " << negatiiviset / yht * 100 << " %" << endl;
	cout << "Positiiviset " << positiiviset << " kpl, " << positiiviset / yht * 100 << " %" << endl;
	cout << "Yhteens„ " << yht << " kpl, " << yht / yht * 100 << " %" << endl << endl;
}