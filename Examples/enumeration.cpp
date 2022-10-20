#include <bits/stdc++.h>
using namespace std;

// declaring an enum
// enum should always start with a capital letter
enum SortOrder {
	// data of the enum
	alphabetical,
	alphabetical_reverse,
	numerical, // there should be a trailing comma optional but recommended
}; // enum ends with ;

void sorter(SortOrder order) {
	if (order == alphabetical)
		cout << "Alphabetical Order" << endl;
	else if (order == alphabetical_reverse) 
		cout << "Reverse Alphabetical Order" << endl;
	else
		cout << "Numerical" << endl;
}

int main() {
	SortOrder order { alphabetical };
	sorter(order);
	return 0;
}
