#include <iostream>

using namespace std;

int get_user_value() {
	int value;
	cin >> value;
	return value;
}

bool is_simple_number(const int number) {
	if (number < 2)
		return false;

	for (int i = 2; i <= number / 2; i++) {
		if (number % i == 0) {
			return false;
		}
	}

	return true;
}

int main()
{
	int max_range;

	cout << "Enter the maximum range number: ";
	max_range = get_user_value();

	for (int i = 2; i <= max_range; i++) {
		if (is_simple_number(i) && is_simple_number(i + 2)) {
			cout << i << " and " << i + 2 << " are twins simple numbers\n";
		}
	}

    return 0;
}