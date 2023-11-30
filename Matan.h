#include <cmath>
//Сделать Матрицу из double значений 
class Matrix
{
public:
	Matrix(): symbol(nullptr), next(nullptr), prev(nullptr){};
	~Matrix();
	
	void Fill(double x) {

	}
private:
	double *symbol;
	double *next;
	double *prev;
};

Matrix::Matrix()
{
}

Matrix::~Matrix()
{
}