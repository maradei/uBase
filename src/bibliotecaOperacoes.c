int casasDecimais(int num)
{
	int aux, casas = 1;
	aux=num/10;
	while(aux!=0)
	{
		casas++;
		aux=aux/10;
	}
	return casas;
}
