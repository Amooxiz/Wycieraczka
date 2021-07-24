#include <iostream>
#include <cmath>

using namespace std;
int A, R;

class tab
{
public:
	int x, y;
};

bool checkCount(int x, int y)
{
	double distance, pitOfX, pitOfY = y;
	pitOfX = abs(A - x);
	distance = sqrt(pow(pitOfX, 2) + pow(pitOfY, 2));
	return distance <= R;
}

int main()
{
	int how_much, countFlies = 0;
	cin >> A;
	cin >> R;
	cin >> how_much;
	tab* t = new tab[how_much];
	for (int count = 0; count < how_much; count++)
	{
		cin >> t[count].x;
		cin >> t[count].y;
		if (checkCount(t[count].x, t[count].y))
		{
			countFlies++;
		}
	}

	cout << how_much - countFlies;

}