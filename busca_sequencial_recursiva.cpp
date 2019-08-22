int busca_sequencial_R(int n, float x, float *v){
	
	if (n == 0){
			
			return -1;
	}
		
	if (x == v[n-1]){
		
			return n-1;  
	}
		
	return busca_sequencial_R(n-1, x, v);
	
}
