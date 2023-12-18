#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <map>

template <typename T>
std::vector<std::pair<T,size_t>> CP::queue<T>::count_multi(std::vector<T> &k) const {
    //write your code here
    std::vector<std::pair<T,size_t>> output;
    CP::queue<T> copyQueue(*this);
    std::map<T,size_t> mp;
    // for (size_t i = 0; i < copyQueue.size(); i++) {
    //     T key = copyQueue.front();
    //     copyQueue.pop();
    //     mp[key]++;
    //     // if (mp.find(k) != mp.end()) { //find
    //     //     mp[k]++;
    //     // } else mp[k] = 1;
    // }
    while (!copyQueue.empty())
    {
        T key = copyQueue.front();
        copyQueue.pop();
        mp[key]++;
    }
    
    for (size_t i = 0; i < k.size(); i++) {
        T key = k[i];
        output.push_back({key, mp[key]});
        // if (mp.find(key) != mp.end()) { //find
        //     output.push_back({key, mp[key]});
        // } else output.push_back({key, 0});
    }
    return output;
}

#endif