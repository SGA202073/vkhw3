#include<vector>
#include<string>
#include<unordered_map>
#include<algorithm>
std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs)
{
    std::unordered_map<std::string, std::vector<std::string>> cache;
    for(const std::string& s : strs)
    {
        std::string key = s;
        std::sort(key.begin(), key.end());
        cache[key].push_back(s);
    }
    std::vector<std::vector<std::string>> result;
    for(auto& pair : cache)
        result.push_back(pair.second);
    return result;
}