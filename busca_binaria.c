BUSCA BINARIO _ FUNCAO
int searchVector(int *p, int x, int y) {

  int i,
      pos = 0,
      ini = 0,
      fim = y - 1;

  while ( ini <= fim && pos == 0){
    i = (ini + fim) / 2;
    if(x == p[i]){
      pos = i + 1;
    }
    else {
      if(x > p[i]){
        ini = i + 1;
      }
      else{
        fim = i - 1;
      }
    }

  }
  return pos;
}
