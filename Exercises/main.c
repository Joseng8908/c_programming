
double inner_product(const double *a, const double *b, int n)
{
	double sum = 0;
	double *a_p = a, *b_p = b;
	for (int i = 0; i < n; i++) {
		sum += (*a_p++) * (*b_p++); 
	}
	return sum;
}
