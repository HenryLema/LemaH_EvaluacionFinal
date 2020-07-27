
#include "datos.h"

float test[4]={7972,14792,2376,2};// dato test excel
int x; // para vector ordenado
int y;//Para el vecino mas cercano
int z=0;
float dato;
float etiqueta;
int knn=10;
float vector2[52];
float distancia;
float vcercano[8];
float distancia_menor=20000;
int fil=0;
int col=0;
void setup() {
 Serial.begin(9600);
 Serial.println("Distancia entre 3 puntos (x2-x1)+(y2-y1)+(z2-z1)");
 Serial.println(' ');
  for(;fil<52;fil++){
  for(col=0;col<3;col++){
    distancia=distancia +pow(vector[fil][col]-test[col],2);
    }
  distancia=sqrt(distancia);
  vector2[fil]=distancia;
  Serial.println(vector2[fil]);
  Serial.println(' ');
  delay(100);
  }
   
  Serial.println("Ordenamiento Datos Burbuja");
  Serial.println(' ');
  for(int i=0;i<52;i++){
    for(int j=0;j<52;j++){
      if(vector2[j]>vector2[j+1]){
        dato=vector2[j];
        vector2[j]=vector2[j+1];
       vector2[j+1]=dato;
      }
    }
  }
  // imprime el vector ordenado 
  for(int x=0;x<52;x++){
    Serial.println(vector2[x]);
    Serial.println(' ');
    delay(100);
  }
  if(etiqueta==test[4]){
    Serial.println("Indice Acierto");
    Serial.println(' ');
    Serial.println(etiqueta);
    Serial.println(' ');
  }
  else{
    Serial.println("Indice de Error");
    Serial.println(' ');
    Serial.println(etiqueta);
    Serial.println(' ');
  } 
   // Mas cercano
  for(int y=0;y<knn;y++){
  vcercano[y]=vector2[y];
  Serial.print(" Mas Cercano:  ");
  Serial.println(vcercano[y]);
  Serial.println(' ');
  }
  
}

void loop() {
  // put your main code here, to run repeatedly:

}
