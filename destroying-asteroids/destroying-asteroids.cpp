class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        long long size=asteroids.size();
        long long Maa = mass;
       // long long maxi = asteroids[size-1];
       // if(mass<asteroids[0]) return false;
        for(long long i=0;i<size;i++)
        {
             if(Maa<asteroids[i])
                return false;
                Maa+=asteroids[i];
           
           
        }
        return true;
    }
};