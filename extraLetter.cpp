#include<string>
#include<unordered_map>
char extraLetter(const std::string& a, const std::string& b)
{
    std::unordered_map<char, int> hashMapA;
    for(int i =0;i < a.length(); i++)
        hashMapA[a[i]]++;
    for(int i = 0;i < b.length(); i++)
    {
        if(hashMapA.find(b[i]) != hashMapA.end())
        {
            hashMapA[b[i]]--;
            if(hashMapA[b[i]] == 0)
            {
                hashMapA.erase(b[i]);
                continue;
            }
            continue;
        }
        return b[i];
    }
    return '\0';
}
/* после заполнения таблицы мы проходим по строке b и для кадого символа выполняем проверку, если есть - понижаем счетчик,
иначе его не было, это нам и нужнно*/