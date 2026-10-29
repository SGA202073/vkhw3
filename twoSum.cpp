#include<vector>
#include<unordered_map>
std::vector<int>twoSum(const std::vector<int>& data, int target)
{
    std::unordered_map<int, int> cache;
    for(int i = 0; i < data.size(); i++)
        cache[data[i]] = i;
    for(int i = 0; i< data.size(); i++)
    {
        int diff = target - data[i];
        if(cache.find(diff) != cache.end() && cache[diff] != i)
            return {i, cache[diff]};
    }
    return {};
}
/* сначала мы проходим по массиву и сохраняем все элементы в таблицу.0 затем мы делаем второй проход по массиву.для каждого числа x вычисляем diff = target - x. если diff уже есть в таблице (и это не тот же самый индекс i), значит мы нашли пару.
 поиск и вставка в таблицу занимают O(1), поэтому общая сложность O(n)*/