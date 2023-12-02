#include <cmath>
#include <iostream>
using namespace std;
//Сделать Матрицу из double значений 



class Matrix
{
private:
    int row;
    int column;
    int** cell;
public:
    void Del()
    {
        for (int i = 0; i < row; i++)
            delete[] cell[i];

        delete[] cell;
    }

    void Create()
    {
        cell = new int* [row];

        for (int i = 0; i < row; i++)
            cell[i] = new int[column];
    }

    void Set_Elems()
    {
        for (int i = 0; i < row; i++)
            for (int j = 0; j < column; j++){
                cout << "Enter [" << i << "]" << " " << j << "] element: ";
                cin >> cell[i][j];
                }
    }

    void Display()
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                cout << cell[i][j] << " ";
            }

            cout << endl;
        }
    }
    int Get_row() {
        return row;
    }
    int Get_column() {
        return column;
    }

    Matrix()
    {
        int m = 0;
        int n = 0;
        int arr = 0;
    }

    Matrix(int row, int column)
    {
        this->row = row;
        this->column = column;
        Create();
    }

    //Копирование матриц;
    void matrix_copy(const Matrix& b)
    {
        Del();
        Create();

        for (int i = 0; i < row; i++)
            for (int j = 0; j < column; j++)
                cell[i][j] = b.cell[i][j];
    }

    friend Matrix operator + (Matrix& a, Matrix& b)
    {
        int m1 = a.Get_row();
        int n1 = b.Get_column();
        Matrix temp(m1, n1);

        for (int i = 0; i < m1; i++)
        {
            for (int j = 0; j < n1; j++)
            {
                temp.cell[i][j] = a.cell[i][j] + b.cell[i][j];
            }
        }

        return temp;
    }

    friend Matrix operator - (Matrix& a, Matrix& b)
    {
        int m1 = a.Get_row();
        int n1 = b.Get_column();
        Matrix temp(m1, n1);
            
        for (int i = 0; i < m1; i++)
        {
            for (int j = 0; j < n1; j++)
            {
                temp.cell[i][j] = a.cell[i][j] - b.cell[i][j];
            }
        }

        return temp;
    }

    Matrix operator = (const Matrix& b)
    {
        matrix_copy(b);
        return *this;
    }

    ~Matrix()
    {
        for (int z = 0; z < row; z++)
            delete[] cell[z];

        delete[] cell;
    }

};
