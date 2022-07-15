#include"function.h"

//1
void rain(void)
{
    const float rain[YEARS][MONTHS] =
    {
        { 4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5,  6.6 },
        { 8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4,  7.3 },
        { 9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1,  8.4 },
        { 7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3,  6.2 },
        { 7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6,  5.2 }
    };
    const float(*arr)[MONTHS];
    float subtot = 0.0f, total = 0.0f;
    for (size_t i = 0; i < YEARS; ++i)
    {
        arr = (rain + i);
        for (size_t j = 0; j < MONTHS; ++j)
        {
            subtot += *(*arr + j);
        }
        total += subtot;
        printf("%5d %15.1f\n",2010 + i, subtot);

        subtot = 0.0f;
    }
    printf("\nThe yearly average is %.1f inches.\n", total / YEARS);
    puts("Jan   Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec");

    for (size_t i = 0; i < MONTHS; ++i)
    {

        for (size_t j = 0; j < YEARS; ++j)
        {
            subtot += *(*(rain + j) + i);
        }
        printf("%4.1f ", subtot / YEARS);
        subtot = 0.0f;
    }
}

//2
void copy_arr(const double arr[], double desc[], unsigned int n)
{
    //假定目标数组与原数组至少拥有相同多的元素
    for (unsigned int i = 0; i < n; ++i)
    {
        desc[i] = arr[i];
    }
}
void copy_ptr(const double*arr, double*desc, unsigned int n)
{
    for (unsigned int i = 0; i < n; ++i)
    {
        *(desc + i) = *(arr + i);
   }
}

void copy_ptrs(const double* s_arr, double* begin, double* end)
{
    for (; begin != end; ++begin)
    {
        *begin = *s_arr++;
    }
}
void print_arr(const double* begin,const double* end)
{
    for (;begin != end;++begin)
    {
        printf("%0.2f ", *begin);
    }
}

//3
int find_max(const int* beg, const int* end)
{
    const int* max = beg;
    for (; beg != end; ++beg)
    {
        if (*max < *beg)
        {
            
            max = beg;
        }
    }
    return *max;
}

//4
unsigned int find_max_index(const double*begin, const double*end)
{
    const double* max = begin;
    const double* temp = begin;
    for (; begin != end; ++begin)
    {

        if (*max < *begin)
        {

            max = begin;
        }
    }
    return max - temp;
}

//5
double difference(const double*b, const double*e)
{
    double* max = b;
    double* min = b;
    for (; b != e; ++b)
    {
        if (*max < *b)
        {
            max = b;
        }
        if (*min > *b)
        {
            min = b;
        }
    }
    return *max - *min;
}