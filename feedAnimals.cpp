#include<vector>
#include<algorithm>
int feedAnimals(std::vector<int>& animals, std::vector<int>& food)
{
    if(animals.size() == 0 || food.size() == 0)
        return 0;
    std::sort(animals.begin(), animals.end());
    std::sort(food.begin(), food.end());
    int count = 0;
    for(int f : food)
    {
        if(f >= animals[count])
            count += 1;
        if(count == animals.size())
            break;
    }
    return count;
}
/* мы сортируем животных по возрастанию аппетита, а еду по размеру. беря самую маленькую
еду и отдавая ее самому не прихотливому животному, мы сохраняем более крупные порции для 
более крупных животных, иначе бы мы не смогли накормить большое, что уменьшило бы кол-во накормленных*/