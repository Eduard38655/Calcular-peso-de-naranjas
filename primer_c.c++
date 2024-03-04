#include <iostream>

using namespace std;

int main() {
    
    //Declaramos las variables
    int total_venta = 0;
    int naranjas;  

    
    cout << "Ingrese la cantidad de naranjas: ";
    cin >> naranjas;

     float peso; 

    
        
    for (int i = 1; i <= naranjas; ++i) {
        
         cout << "Ingrese el peso de la naranja " << i << " en gramos: ";
        cin >> peso;

//Al sumar el peso de las naranjas ingresadas, el total del peso deberá de inicializar una de estas condicionales.        if (peso < 75) {
          if (peso < 75) {
            total_venta += 50;
          
        } else if (peso <= 100) {
            total_venta += 70;
          
        } else {
            total_venta += 100;
             
        }
         
    }
cout << "El total de naranjas es :" << naranjas << " y el precio es : $" << total_venta << endl;

  
    
    return 0;
}
