#include <iostream>
using namespace std;
#include "Point.h"
int main()
{
	Point A, B, C;
	double d;
	cout << "SAISIE DU POINT A" << endl;
	cout << "Tapez l'abscisse : "; cin >> A.x;
	cout << "Tapez l'ordonnée : "; cin >> A.y;
	cout << endl;
	cout << "SAISIE DU POINT B" << endl;
	cout << "Tapez l'abscisse : "; cin >> B.x;
	cout << "Tapez l'ordonnée : "; cin >> B.y;
	C = A.milieu(B);
	d = A.distance(B);
	cout << endl;
	cout << "MILIEU DE AB" << endl;
	cout << "L'abscisse vaut : " << C.x << endl;
	cout << "L'ordonnée vaut : " << C.y << endl;
	cout << endl;
	cout << "La distance AB vaut :" << d << endl;
	return 0;
}