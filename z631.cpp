#include <iostream>
using namespace std;

const int def_iarray_size = 5;

class iarray
{
public:
    // predodre�eni konstruktor
    iarray(int def_size = def_iarray_size)
    {
        init(nullptr, def_size);
    }
    // kopirni konstruktor
    iarray(const iarray &rhs)
    {
        init(rhs.m_arr, rhs.m_size);
    }
    // konstruktor pomo�u postoje�eg int * niza
    iarray(const int *array, int size)
    {
        init(array, size);
    }
    // destruktor
    ~iarray(void)
    {
        delete[] m_arr;
    }
    // pridjela vrijednosti
    iarray &operator=(const iarray &);
    // daje broj elemenata niza
    int size() const { return m_size; }
    // indeksni operator
    int &operator[](int index);

private:
    // pomo�na funkcija
    void init(const int *array, int size);
    // pokaziva� na memoriju koja sadr�i niz
    int *m_arr;
    // broj elemenata niza
    int m_size;
};

void iarray::init(const int *array, int size)
{
    // alociraj memoriju veli�ine m_size cijelih brojeva
    m_size = size;
    m_arr = new int[size];
    // inicijaliziraj niz
    if (array != 0)
    {
        for (int index = 0; index < size; index++)
        {
            m_arr[index] = array[index];
        }
    }
}

iarray &iarray::operator=(const iarray &niz)
{
    if (m_size != niz.m_size)
    {
        cout << "ERROR!" << endl;
        exit(0);
    }

    m_arr = niz.m_arr;

    return *this;
}

int &iarray::operator[](int index)
{
    if (index > m_size)
    {
        cout << "ERROR!" << endl;
        exit(0);
    }

    return m_arr[index];
}

int main()
{
    iarray a;
    cout << "Niz a:" << endl;
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << endl;
    }

    cout << "Unesite dimenziju:" << endl;
    int m_velicina;
    cin >> m_velicina;

    cout << "Unesite elemente:" << endl;
    int *m_niz = new int[m_velicina];
    for (int i = 0; i < m_velicina; i++)
    {
        cin >> m_niz[i];
    }

    iarray b(m_niz, m_velicina);
    cout << "Niz b:" << endl;
    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i] << endl;
    }

    cout << "Izjednacavanje!" << endl;
    a = b;
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << endl;
    }
}