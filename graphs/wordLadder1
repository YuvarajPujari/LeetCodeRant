class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        queue<pair<string,int>>q;
        q.push({beginWord,1});
        unordered_set<string>st(wordList.begin(),wordList.end());
        cout<<st.size()<<endl;

        while(!q.empty()){
            string word=q.front().first;
            int level=q.front().second;
            q.pop();
            if(word==endWord){
                cout<<word<<endl;
                return level;
            }
            for(int i=0;i<word.size();i++){
              string originalWord=word;
              for(char c='a';c<='z';c++){
                originalWord[i]=c;
                if(st.count(originalWord)){
                    q.push({originalWord,level+1});
                    st.erase(originalWord);
                }
              }

            }
           
        }

        return 0;

    }
};
