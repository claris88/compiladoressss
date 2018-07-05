    #include <iostream>
    #include <iomanip>
     
    using namespace std;
     
    int LongitudCadena(char*);
     
    int main() {
    	char cadena[10];
    	char *pCadena = 0;
     
    	cout << "Introduce una cadena como array: ";
    	cin >> cadena;
    	cout << "Su tamano es: " << LongitudCadena(cadena) << ". " << endl;
    	cout << "\nIntroduce una cadena como puntero: ";
    	cin >> *pCadena;
    	cout << "Su tamano es: " << LongitudCadena(pCadena) << ". " << endl;
     
    	cin.sync();
    	cin.get();
    	return 0;
    }
     
    int LongitudCadena(char *a) {
    	char *p, *q;
    	p = a;
    	q = a;
    	while (*a) q++;
    	return q-p;
    }
