template <typename T>
void autoSwap(T &a, T &b)
{
    T t = a;
    a = b;
    b = t;
}