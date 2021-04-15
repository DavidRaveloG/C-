#ifndef lib_h
#define lib_h
using namespace std;
template<class T>
T *CrearArreglo( int tam= 5){
	T *ar;
	ar= new T[tam];
	return ar;
	
}
#endif 
