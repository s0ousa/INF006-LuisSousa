#include <stdio.h>

typedef struct {
  int dia;
  int mes;
  int ano;
} Data;

int validaData (Data data) {
  int mesesTrinta [] = {4,6,9,11};
  int mesesTrintaUm [] = {1,3,5,7,8,10,12};
  int ehTrinta = 0;
  int ehTrintaUm = 0;
  int ehBissexto = 0;


  
  if(data.ano<=0 || data.ano>2022 || data.mes<=0 || data.mes>12 || data.dia<=0 || data.dia >31) {
    return 0;
  }

  if (data.ano%4 == 0 && data.ano%100 !=0) {
    ehBissexto = 1;  
  } else if (data.ano%4 ==0 && data.ano%100 ==0 && data.ano%400==0) {
    ehBissexto = 1;
  }
  
  if (data.mes !=2) {
    for(int i = 0; i<4;i++) {
        if(mesesTrinta[i] == data.mes) {
          ehTrinta = 1;
        }
      }
    
      for(int i = 0; i<7;i++) {
        if(mesesTrintaUm[i] == data.mes) {
          ehTrintaUm = 1;
        }
    }

} else { // mes ==2 
    if( ehBissexto==1) {
      if(data.dia>29) {
        return 0;
      } else return 1;
    } else {
      if(data.dia >28) {
        return 0;
      } else return 1;
    }
  }

  if(ehTrinta ==1) {
    if(data.dia>30) {
      return 0;
    } else return 1;
  } else {
    if(data.dia>31) {
      return 0;
    } else {
      return 1;
    }
  }
  
}

void main () {

  Data minhaData;
  
  puts("Digite o dia");
  scanf("%i",&minhaData.dia);

  puts("Digite o mes");
  scanf("%i",&minhaData.mes);

  puts("Digite o ano");
  scanf("%i", &minhaData.ano);

  printf("%i", validaData(minhaData));
}