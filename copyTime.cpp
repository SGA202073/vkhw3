#include<algorithm>
long long copyTime(long long n, long long x, long long y)
{
    if(n == 0)
        return 0;
    long long min_time = std::min(x,y);
    long long max_time = std::max(x,y);
    long long l = 0;
    long long r = (n-1)*max_time;
    while(l+1 < r)
    {
        long long mid = (r + l)/2;
        if(mid/x + mid/y < n-1)
            l = mid;
        else
            r = mid;
    }
    return r+min_time;
}
/* за время mid ервый делает mid/x, второй mid/y. их сумма это общее кол-во копий
за время mid.условие mid/x + mid/y означает, что успеваем сделать n-1 копий, первую делаем отдельно за min(x,y)
если условие выполняется, mid достаточно, иначе нет*/