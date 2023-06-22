#include <iostream>
using namespace std;

class Queues {
	int FRONT, BEAR, max = 5;
	int queue_array[5];

public:
	Queues() {
		FRONT = -1;
		BEAR = -1;
	} 

	void insert() {
		int num;
		cout << "Enter a number: ";
		cin >> num;
		cout << endl;

		// cek apakah antrian penuh
		if ((FRONT == 0 && BEAR == max - 1) || (FRONT == BEAR + 1)) {
			cout << "\nQueue overFLow\n";
			return;
		} 