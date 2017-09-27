/* 
   PROGRAMA QUE COMPARA METODOS PARA ENCONTRAR RAICES:
   
   Utilice el comando: |./a.our 2>erores_comp.dat| en consola para tener archivo con una tabla que compara los errores relativos en cada uno de los metodos utilizados
*/

#include <iostream>
#include <cmath>

//FUNCIONES A UTILIZAR EN BISECCIÓN, SECANTE, PUNTO FALSO, NEWTON.
double f(double x){
  return exp(-x)-x;
}

//FUNCION EN PUNTO FIJO
double f_pf(double x){
  return exp(-x)-x;
}

//FUNCION DERIVADA NEWTON
double df_n(double x){
  return -exp(-x)-1;
}

int main (void){

  //CRITERIOS IMPRESION
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);
  
  //DECLARACION DE VARIABLES
  const int MAX=30;
  int i=1;
  double tol=1e-10;
  
  //SEMILLAS SECANTE
  double xi_s=1, xf_s=2, xr_s=0, x_prev_s=0;
  
  //SEMILLAS PUNTO FALSO
  double xi_r=1, xf_r=2, xr_r=0, x_prev_r=0;
  
  //SEMILLAS BISECCION
  double xi_b=1, xf_b=2, xr_b=0, x_prev_b=0;
  
  //SEMILLAS NEWTON
  double xi_n=2, xr_n=0, x_prev_n=0;
  
  //SEMILLAS PUNTO FIJO
  double xi_pf=-0.5, xr_pf=0, x_prev_pf=0;
  
  //EJECUTA LOS CINCO METODOS EN EL MISMO CICLO
  
  for (i=1; i<=MAX; i++){
    
    //IMPRESION #ITERACION
    std::cerr<<i<<"\t";
    
    //ALGORITMO SECANTE
    x_prev_s=xr_s;
    xr_s=xi_s-(f(xi_s)*(xf_s-xi_s))/(f(xf_s)-f(xi_s));   //BUSCA RAIZ
    std::cerr<<std::fabs((x_prev_s-xr_s)/xr_s)<<"\t";
    if (std::fabs(f(xr_s))<tol){
      break;
      }
    else{
      xi_s=xf_s;                                        //ACTUALIZA PARA ITERAR
      xf_s=xr_s;
    }
    
    //ALGORITMO PUNTO FALSO
    x_prev_r=xr_r;
    xr_r=xf_r-(f(xf_r)*(xi_r-xf_r))/(f(xi_r)-f(xf_r));
      std::cerr<<std::fabs((x_prev_r-xr_r)/xr_r)<<"\t";
    if(std::fabs(f(xr_r))<tol){
      break;                                           //ENCUENTRA LA RAIZ
    }
    else{
      if((f(xi_r)*f(xr_r))>0){
	xi_r=xr_r;
      }
      else{                                           //REASIGNA COTA INTERVALO
	xf_r=xr_r;
      }
    }
    
  
    //ALGORITMO BISECCION
    x_prev_b=xr_b;
    xr_b=(xi_b+xf_b)*0.5;
    std::cerr<<std::fabs((x_prev_b-xr_b)/xr_b)<<"\t";
    if(std::fabs(f(xr_b))<tol){
      break;                                            //ENCUENTRA LA RAIZ
    }
    else{                                              //REASIGNA COTA INTERVALO
      if((f(xi_b)*f(xr_b))>0){
	xi_b=xr_b;
      }
      else{
	xf_b=xr_b;
      }
    }
    
    //ALGORITMO NEWTON
    x_prev_n=xr_n;
    xr_n=xi_n-f(xi_n)/df_n(xi_n);
    std::cerr<<std::fabs((x_prev_n-xr_n)/xr_n)<< "\t";
    if(std::fabs(f(xr_n))<tol){
      break;
    }
    else{
      xi_n=xr_n;                                        //ACTUALIZA PARA ITERAR
    }
    
    //ALGORITMO PUNTO FIJO
    x_prev_pf=xr_pf;
    xr_pf=f_pf(xi_pf);
    std::cerr<<std::fabs((x_prev_pf-xr_pf)/xr_pf)<<"\n";
    if(std::fabs(f(xr_pf))<tol){
      break;
    }
    else{
    xi_pf=xr_pf;
    }
  }
  std::cout<<"\n"<<"Raiz secante: "<<xr_s<<"\n";
  std::cout<<"Raiz punto falso: "<<xr_r<<"\n";
  std::cout<<"Raiz biseccion: "<<xr_b<<"\n";
  std::cout<<"Raiz newton: "<<xr_n<<"\n";
  std::cout<<"Raiz punto fijo: "<<xr_pf<<"\n";

  return 0;
}
