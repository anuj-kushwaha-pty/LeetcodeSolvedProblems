class Solution {
public:
    bool judgePoint24(vector<int>& cards) {
       sort(cards.begin(),cards.end());
       if(isvalid(cards)) return true;
       while(next_permutation(cards.begin(),cards.end())){
        if(isvalid(cards)) return true;
       }
       return false;
    }
    bool isvalid(vector<int>& cards){
        double a= cards[0], b= cards[1], c= cards[2], d= cards[3];
        if(isvalid(a+b,c,d) || isvalid(a-b,c,d) || isvalid(a*b,c,d) || isvalid(a/b,c,d)) return true;
        if(isvalid(a,b+c,d) || isvalid(a,b-c,d) || isvalid(a,b*c,d) || isvalid(a,b/c,d)) return true;
        if(isvalid(a,b,c+d) || isvalid(a,b,c-d) || isvalid(a,b,c*d) || isvalid(a,b,c/d)) return true;
        return false;
    }
    bool isvalid(double a,double b, double c){
        if(isvalid(a+b,c) || isvalid(a-b,c) || isvalid(a*b,c) || isvalid(a/b,c)) return true;
        if(isvalid(a,b+c) || isvalid(a,b-c) || isvalid(a,b*c) || isvalid(a,b/c)) return true;
        return false;
    }
    bool isvalid(double a,double b){
        if(abs(a+b-24)<=1e-5 || abs(a-b-24)<=1e-5 || abs(a*b-24)<=1e-5 || abs(a/b-24)<=1e-5) return true;
        return false;
    }
    
};