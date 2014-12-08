#include "Evaluador.h"
#include <fstream>
#include <math.h>
#include <string>
using namespace std;
// _     _ _                 _                      _                   _                    _        _                          _                  _                      _
//| |   (_) |               | |                    | |                 | |                  | |      | |                        | |                (_)                    | |
//| |    _| |_ ___ _ __ __ _| |_ __ ___   ___ _ __ | |_ ___    ___  ___| |_ ___     ___  ___| |_ __ _| |__   __ _    ___ _ __   | | ___  ___    ___ _  ___ _ __ ___  _ __ | | ___  ___
//| |   | | __/ _ \ '__/ _` | | '_ ` _ \ / _ \ '_ \| __/ _ \  / _ \/ __| __/ _ \   / _ \/ __| __/ _` | '_ \ / _` |  / _ \ '_ \  | |/ _ \/ __|  / _ \ |/ _ \ '_ ` _ \| '_ \| |/ _ \/ __|
//| |___| | ||  __/ | | (_| | | | | | | |  __/ | | | ||  __/ |  __/\__ \ || (_) | |  __/\__ \ || (_| | |_) | (_| | |  __/ | | | | | (_) \__ \ |  __/ |  __/ | | | | | |_) | | (_) \__ \
//\_____/_|\__\___|_|  \__,_|_|_| |_| |_|\___|_| |_|\__\___|  \___||___/\__\___/   \___||___/\__\__,_|_.__/ \__,_|  \___|_| |_| |_|\___/|___/  \___| |\___|_| |_| |_| .__/|_|\___/|___/
//                                                                                                                                               _/ |              | |
//                                                                                                                                               |__/               |_|
//Las siguientes funciones escribir y leer ingresan y leen respectivamente un numero ubicado al inicio de un archivo de texto
void escribirNumeroTexto(string nombre_archivo, int num)
{
    //ayuda para desarrollo de ejercicio obtenido de http://www.cplusplus.com/reference/ostream/ostream/flush/
    //base obtenida de https://github.com/Ceutec/ArchivosBinarios/blob/master/main.cpp
    //y
    //http://cpp-tutorial.cpp4u.com/STL_ifstream.html
    ofstream outfile(nombre_archivo.c_str()); //se crea el ofstream para escritura
    outfile<<num; //se recibe la variable num para su escritura
    outfile.flush(); //se sincroniza el stream buffer con el archivo
    outfile.close(); //cierre
}
int leerNumeroTexto(string nombre_archivo)
{
    //ayuda para desarrollo de ejercicio obtenido de http://www.cplusplus.com/reference/ostream/ostream/flush/
    //base obtenida de https://github.com/Ceutec/ArchivosBinarios/blob/master/main.cpp
    //y
    //http://cpp-tutorial.cpp4u.com/STL_ifstream.html
    ifstream infile(nombre_archivo.c_str()); //se crea el ifstream para la lectura
    int a; //se inicializa la variable para almacenar el numero extraido del documento
    infile>>a; //se le da el valor a la variable "a" usando el stream
    return a; //se retorna la variable a
}

//Las siguientes funciones escribir y leer ingresan y leen respectivamente una cadena ubicada al inicio de un archivo de texto
void escribirStringTexto(string nombre_archivo, string str)
{
    //ayuda para desarrollo de ejercicio obtenido de http://www.cplusplus.com/reference/ostream/ostream/flush/
    //base obtenida de https://github.com/Ceutec/ArchivosBinarios/blob/master/main.cpp
    //y
    //http://cpp-tutorial.cpp4u.com/STL_ifstream.html
    ofstream outfile(nombre_archivo.c_str()); //se crea el ofstream para escritura
    outfile<<str; //se recibe la variable num para su escritura
    outfile.flush(); //se sincroniza el stream buffer con el archivo
    outfile.close(); //cierre
}
string leerStringTexto(string nombre_archivo)
{
    //ayuda para desarrollo de ejercicio obtenido de http://www.cplusplus.com/reference/ostream/ostream/flush/
    //base obtenida de https://github.com/Ceutec/ArchivosBinarios/blob/master/main.cpp
    //y
    //http://cpp-tutorial.cpp4u.com/STL_ifstream.html
    ifstream infile(nombre_archivo.c_str()); //se crea el ifstream para la lectura
    string a; //se inicializa la variable para almacenar el texto extraido del documento
    infile>>a; //se le da el valor a la variable "a" usando el stream
    return a; //se retorna la variable a
}

//Las siguientes funciones escribir y leer ingresan y leen respectivamente un numero ubicado al inicio de un archivo binario
void escribirNumeroBinario(string nombre_archivo, int num)
{
    //ayuda para desarrollo de ejercicio obtenido de http://www.cplusplus.com/reference/ostream/ostream/flush/
    //base obtenida de https://github.com/Ceutec/ArchivosBinarios/blob/master/main.cpp
    //y
    //http://cpp-tutorial.cpp4u.com/STL_ifstream.html
    ofstream stream(nombre_archivo.c_str(),ios::in); //se inicializa el ofstream para escritura
    stream.write((char*)&num,4); //se escribe en el archivo binario por medio de char
    stream.close(); //cierre
}
int leerNumeroBinario(string nombre_archivo)
{
    //ayuda para desarrollo de ejercicio obtenido de http://www.cplusplus.com/reference/ostream/ostream/flush/
    //base obtenida de https://github.com/Ceutec/ArchivosBinarios/blob/master/main.cpp
    //y
    //http://cpp-tutorial.cpp4u.com/STL_ifstream.html
    ifstream stream1(nombre_archivo.c_str());
    int b;
    if(!stream1)//condicion por si el archivo no existe
    {
        return 0; //si no encuentra el archivo el programa se cierra
    }
    else // si el archivo abre correctamente continua con el procedimiento
    {
            stream1.read((char*)&b,5);
    }
    return b;
}

//Las siguientes funciones escribir y leer ingresan y leen respectivamente una cadena ubicada al inicio de un archivo binario
void escribirStringBinario(string nombre_archivo, string str)
{
    //ayuda para desarrollo de ejercicio obtenido de http://www.cplusplus.com/reference/ostream/ostream/flush/
    //base obtenida de https://github.com/Ceutec/ArchivosBinarios/blob/master/main.cpp
    //y
    //http://cpp-tutorial.cpp4u.com/STL_ifstream.html
    ofstream stream(nombre_archivo.c_str());//creacion de stream para escritura en archivo
    stream<<str; //se recibe la variable str para su escritura en el archivo
    stream.flush(); //se sincroniza el stream buffer con el archivo
    stream.close(); //cierre del stream
}
string leerStringBinario(string nombre_archivo)
{
    //ayuda para desarrollo de ejercicio obtenido de http://www.cplusplus.com/reference/ostream/ostream/flush/
    //base obtenida de https://github.com/Ceutec/ArchivosBinarios/blob/master/main.cpp
    //y
    //http://cpp-tutorial.cpp4u.com/STL_ifstream.html
    ifstream stream1(nombre_archivo.c_str(),ios::in);//inicializacion del stream1 para lectura
    char a[80]; //declaracion de variable
    if(!stream1)//condicion por si el archivo no existe
    {
        return 0; //si no encuentra el archivo el programa se cierra
    }
    else // si el archivo abre correctamente continua con el procedimiento
    {
        while(!stream1.eof())//lee hasta el final del archivo
        {
            stream1>>a;//almacena lo leido en la variable a
        }
    }
    return a; //se retorna la variable a donde se almaceno el contenido
}

//Devuelve true si encuentra str (dada) en un archivo dado el nombre
bool existe(string nombre_archivo, string str)
{
    return -1;
}

//Devuelve el numero mayor dado el nombre de un archivo binario
int obtenerMayor(string nombre)
{
    //base obtenida de https://github.com/Ceutec/ArchivosBinarios/blob/master/main.cpp
    ifstream read(nombre.c_str()); //ifstream usado para lectura de archivos
    read.seekg(0,ios::end); //seekg para determinar la posicion
    int tamano = read.tellg(); // determinar el tamaño
    read.seekg(0,ios::beg); //seekg  para determina la posicion

    int mayor = -999; //se define la variable mayor

    while(read.tellg()<tamano) //se compara la posicion con el tamaño
    {
        int num; //variable num para almacenamiento
        read.read((char*)&num,4); //se le da valor a la variable num
        if(mayor<num) //cpmparacion entre la variable mayor y el numero almacenado
            mayor = num; //de ser num mayor que mayor, mayor adquiere el valor de num
    }
    return mayor; //retorna mayor
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
