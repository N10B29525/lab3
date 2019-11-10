#include <iostream> 
#include <time.h> 
#include <windows.h> 

using namespace std; 

int liczba, j, *tablica; 
float suma; 


int main() { 

cout<< "Tablica z dwudziestoma liczbami calkowitymi" <<endl <<endl; 

suma = 0; 
liczba = 20; 

tablica =new int [liczba]; 

srand(time(NULL)); 

for(int i=0; i<liczba; i++) 

{ 
    tablica[i] = rand()%100; 

    cout<< tablica[i]<<" "; 
} 


cout<<endl<<endl<< "Tablica z dwudziestoma liczbami calkowitymi po sortowaniu rosnaco: "<<endl<<endl; 


  for (int i=0; i<20; i++) 

        for (j=0; j<19; j++) 

            if (tablica[j]>tablica[j+1]) 

                swap(tablica[j], tablica[j+1]); 


    for (int i = 0; i<20; i++) 

        cout << tablica[i] << " "; 

        cout<<endl; 


  //Wartosc MIN 

    for (int i=0; i<20; i++) 

        for (int j=0; j<1; j++) 

            if (tablica[j]>tablica[j+1]) 

                swap(tablica[j], tablica[j+1]); 

  

    for (int i = 0; i<1; i++) 

        cout <<endl<<"Wartosc Min: "<< tablica[i] << endl; 


    //Wartosc MAX 

      for (int i=0; i<20; i++) 

        for (int j=0; j<1; j++) 

            if (tablica[j]>tablica[j-1]) 

                swap(tablica[j], tablica[j-1]); 

  

    for (int i = 0; i<1; i++) 

        cout <<endl<<"Wartosc Max: "<< tablica[j] << endl; 

        cout<<endl; 


//Suma elementow tablicy 

    for(int i=0; i<20; i++){ 

        suma += tablica[i];} 

cout<< "Suma tablicy: " << suma<<endl<<endl; 


//Srednia 


cout<< "Srednia arytmetyczna tablicy: " << suma / liczba <<endl; 

  
    return 0; 
} 
