#ifndef ACCUM_H
#define ACCUM_H

template <typename T>
T accum(std::vector<T> v)
{
    T sum = 0;
    for (T i : v)
        { sum += i; }
    return sum;
}

std::string accum(std::vector<std::string> v)
{
    std::string sum;
    int count = 0;
    for (std::string i : v)
    {
        sum += i;
        count++;
        if (count != 4)
            { sum += ", "; }
    }
    return sum;
}

#endif
