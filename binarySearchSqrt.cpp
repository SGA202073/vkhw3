long long binarySearchSqrt(long long target)
{
    long long l = 0;
    long long r = target;
    long long middle;
    while(l <= r)
    {
        middle = (l+r)/2;
        if(middle*middle > target)
        {
            r = middle - 1;
            continue;
        }
        if(middle*middle < target)
        {
            l = middle + 1;
            continue;
        }
        return middle;
    }
    return r;
}
/*на каждой итерации while мы вычисляем середину и сравниваем ее квадоат с target. затем отьрасываем
половину диапазона. поэтому максимальное кол-во шагов - log2(target), т е O(log(n)). нижняя граница, очевидно, 0,
верхняя - target тк для любого чила >= 1 корень не больше самого числа, а мы работает с натуральными числами */