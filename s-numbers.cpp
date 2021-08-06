#include <iostream>
#include <string>
#include <ctime>
using namespace std;


int main() {
	srand(time(NULL));
	string arr[51] = { "cero","uno","dos","tres","cuatro","cinco","seis","siete","ocho","noueve","diez","once","doce","trece","catorce","quince","dieci" + arr[6],"dieci" + arr[7],"dieci" + arr[8] ,"dieci" + arr[9],"viente","vienti" + arr[1],"vienti" + arr[2],"vienti" + arr[3],"vienti" + arr[4],"vienti" + arr[5],"vienti" + arr[6],"vienti" + arr[7],"vienti" + arr[8],"vienti" + arr[9],"treinta","treinta y " + arr[1],"treinta y " + arr[2],"treinta y " + arr[3],"treinta y " + arr[4],"treinta y " + arr[5],"treinta y " + arr[6],"treinta y " + arr[7],"treinta y " + arr[8],"treinta y " + arr[9],"cuarenta","cuarenta y" + arr[1],"cuarenta y" + arr[2],"cuarenta y" + arr[3],"cuarenta y" + arr[4],"cuarenta y" + arr[5],"cuarenta y" + arr[6],"cuarenta y" + arr[7],"cuarenta y" + arr[7],"cuarenta y" + arr[8],"cuarenta y" + arr[9] };
	string numbre;
	int range = 51;
	while (1) {
		int ran = rand() % range;
		cout << ran << endl;
		getline(cin, numbre);
		if (numbre == "exit" || numbre == "Exit")
			break;
		for (size_t i = 0; i < range; i++)
		{
			if (numbre == arr[ran])
			{
				cout << "True\n";
				break;
			}
			else
			{
				cout << "NO\n";
				break;
			}

		}

	}
}