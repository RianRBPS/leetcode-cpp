class Solution {
    public:
        string reverseWords(string s) {
            vector<string> words;
            stringstream ss(s);
            string word;
    
            // separar as palavras
            while (ss >> word) {
                words.push_back(word);
            }
    
            // reverter a ordem das palavras
            reverse(words.begin(), words.end());
    
            // juntar as palavras em uma unica string
            string result;
            for(int i = 0; i < words.size(); i++){
                result += words[i];
                if(i < words.size() - 1) {
                    result += " ";
                }
            }
            return result;
        }
    };