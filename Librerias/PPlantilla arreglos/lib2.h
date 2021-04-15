#ifndef lib_h
#define lib_h
using namespace std;
template< class T >
void imprimirArreglo( const T *arreglo, const int contador )
{ for ( int i = 0; i < contador; i++ )
      cout << arreglo[ i ] << " ";
   cout << endl;
}

#endif 
