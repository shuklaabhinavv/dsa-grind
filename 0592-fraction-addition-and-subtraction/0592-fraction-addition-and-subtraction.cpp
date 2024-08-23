class Solution {
public:
    string fractionAddition(string expression) {
        int nom = 0, denom = 1, size = expression.size();
        for (int i = 0, j = 0; i < size;)
        {
            while (j < size && expression[j] != '/')
            {
                ++j; 
            }
            
            int slashInd = j;
            while (j < size && expression[j] != '+' && expression[j] != '-')
            {
                ++j; 
            }
            
            int end = j, curNom = stoi(expression.substr(i, slashInd - i));
            int curDenom = stoi(expression.substr(slashInd + 1, end - slashInd - 1));
            auto sum = addAndNorm(nom, denom, curNom, curDenom);  
            
            nom = sum.first;
            denom = sum.second; 
            i = j;
        }
        
        return to_string(nom) + "/" + to_string(denom); 
    }

private:
    pair<int, int> addAndNorm(int nom, int denom, int curNom, int curDenom)
    {
        int sumNom = nom * curDenom + curNom * denom;
        int sumDenom = denom * curDenom; 
        for (int n = min(abs(sumNom), abs(sumDenom)); n > 1; --n)
        {
            if (sumNom % n == 0 && sumDenom % n == 0)
            {   
                sumNom /= n;
                sumDenom /= n;
                break;
            }
        }
        
        return {sumNom, sumNom == 0 ? 1 : sumDenom}; 
    }
};