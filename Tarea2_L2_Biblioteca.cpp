#include <iostream>
#include <algorithm>
#include <time.h>

using namespace std;

string libros[6][3];
string autores[6][3];

void cargarLibros() {
    // Arreglo con categoria y descripcion
	libros[0][0] = "Algoritmos"; libros[0][1] = "Algoritmos y Programacion (Guia para docentes)"; autores [0][2] = "Steve Jobs";
	libros[1][0] = "Algoritmos"; libros[1][1] = "Apuntes de Algoritmos y Estructuras de Datos"; autores [1][2] = "Bill Gates";
	libros[2][0] = "Algoritmos"; libros[2][1] = "Breves Notas sobre Analisis de Algoritmos"; autores [2][2] = "Mark Zuckerberg";
	libros[3][0] = "Algoritmos"; libros[3][1] = "Fundamentos de Informatica y Programacion"; autores [3][2] = "Elon Musk";
	libros[4][0] = "Algoritmos"; libros[4][1] = "Temas selectos de estructuras de datos"; autores [4][2] = "Tim Cook";
	libros[5][0] = "Algoritmos"; libros[5][1] = "Teoria sintactico-gramatical de objetos"; autores [5][2] = "Victor Abarca";

}


int main(int argc, char const *argv[])
{
    cargarLibros();

    srand (time(NULL));
    
    bool salir = false;

    while (salir == false)
    {
        string buscar = "";
        system("cls");
        cout << "Ingrese la descripcion del libro que busca: ";
        cin >> buscar;

        // busqueda
        for (int i = 0; i < 6; i++)
        {
            string libro = libros[i][1];
            string autor = autores[i][2];
            string libroEnminuscula = libro;
            string autorEnminuscula = autor;
            // transformamos a minuscula los string buscar y libro
            transform(libroEnminuscula.begin(), libroEnminuscula.end(), libroEnminuscula.begin(), ::tolower);
            transform(buscar.begin(), buscar.end(), buscar.begin(), ::tolower);
            transform(autorEnminuscula.begin(), autorEnminuscula.end(), autorEnminuscula.begin(), ::tolower);
			transform(buscar.begin(), buscar.end(), buscar.begin(), ::tolower);
						
            if (libroEnminuscula.find(buscar) != string::npos) {
                cout << "Libro encontrado: " << libro << endl;

                cout << "Tambien te sugerimos estos libros: " << endl;

                int sugerencia1 = rand() % 5 + 1;
                int sugerencia2 = rand() % 5 + 1;
                int sugerencia3 = rand() % 5 + 1;

                cout << " Sugerencia 1: " << libros[sugerencia1][1] << endl;
                cout << " Sugerencia 2: " << libros[sugerencia2][1] << endl;
                cout << " Sugerencia 3: " << libros[sugerencia3][1] << endl;

                salir = true;
                break;
            }
                    if (autorEnminuscula.find(buscar) != string::npos) {
                cout << "Libro encontrado: " << libro << ", Autor: " <<autor <<endl;

                cout << "Tambien te sugerimos estos libros: " << endl;

                int sugerencia1 = rand() % 5 + 1;
                int sugerencia2 = rand() % 5 + 1;
                int sugerencia3 = rand() % 5 + 1;

                cout << " Sugerencia 1: " << libros[sugerencia1][1] << endl;
                cout << " Sugerencia 2: " << libros[sugerencia2][1] << endl;
                cout << " Sugerencia 3: " << libros[sugerencia3][1] << endl;

                salir = true;
                break;
            }
        }
        

        if (salir == false) {
            char continuar = 'n';

            while(true) {
                system("cls");
                cout << "No se encontro el libro que busca. Desea continuar? s/n ";
                cin >> continuar;

                if (continuar == 's' || continuar == 'S') {
                    break;
                } else if (continuar == 'n' || continuar == 'N') {
                    salir = true;
                    break;
                }
            }
        }
    }
    

    return 0;
}
