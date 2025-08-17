class Solution {
public:
    double new21Game(int n, int k, int maxPts) {
        vector <double> P(n+1, 0.0);
        P[0] = 1;

        double currprobsum = k > 0 ? 1 : 0;
        for(int i = 1; i<=n; i++){
            P[i] = currprobsum/maxPts;

            if(i<k) currprobsum += P[i];
            if(i-maxPts>=0 && i-maxPts<k) currprobsum -= P[i-maxPts];
        }
        return accumulate(P.begin()+k, P.end(), 0.0);

    /*  return accumulate(P.begin()+k, P.end(), 0.0); means-- 
    (double sum = 0.0;
        for (int i = k; i < P.size(); i++) {
        sum += P[i];
        }
        return sum;)
        */
    }
};