#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    // 해시 맵 선언 (Key: 이름, Value: 인원수)
    unordered_map<string, int> map;
    
    // 참가자 명단을 해시 맵에 추가 (동명이인이 있을 수 있으므로 ++ 처리)
    for (const string& p : participant) {
        map[p]++;
    }
    
    // 완주자 명단을 해시 맵에서 차감
    for (const string& c : completion) {
        map[c]--;
    }
    
    // Value가 0이 아닌(완주하지 못한) 단 한 명을 찾아 반환
    for (const auto& pair : map) {
        if (pair.second > 0) {
            return pair.first;
        }
    }
    
    return "";
}