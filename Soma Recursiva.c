float soma ( float *v, int n){
	if (n == 0){
		return 0;
	}
	return (v[n-1] + soma(v, n-1));
}
