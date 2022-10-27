/**
  ******************************************************************************
  * @file    main.c
  * @author  Mouadh Dahech
  * @brief   How to develop structured code 
  * @version V1.0.0
  * @date    16-10-2022
  *****************************************************************************/
/* Includes ------------------------------------------------------------------*/

/* Private function prototypes -----------------------------------------------*/

/* Macros --------------------------------------------------------------------*/
#define INTEL 1

#define A 1
#define B 3

#define __EQUATION(X,Y) (INTEL)?(X+Y):(X*Y)
#define __COMPARE(X,Y) (INTEL)?((X<Y)? X: Y):((X>Y)? X: Y)
/* Private functions ---------------------------------------------------------*/

int Func_Som(int a,int b){
  return(a+b);
}

int Func_Som2(void){
  return(A+B);
}

/**
  * @brief  Main program
  * @param  None
  * @retval None
  */
int main(void)
{
  int som_macro = __EQUATION(A,B);
  int calmax_min = __COMPARE(A,B);
  //int som_fun1 = Func_Som(A,B);
  //int som_fun2 = Func_Som2(); 
  while (1)
  {}
}




/**************************************END OF FILE**************************************/
