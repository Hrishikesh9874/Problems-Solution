class Solution {
private:
    void markRow(int i, vector<vector<int>>& matrix){
        int n= matrix.size();
        int m=matrix[0].size();
        for(int j=0; j<m; j++){
            if(matrix[i][j] != 0 ){
                matrix[i][j]=-298880;
            }
        }
    }

    void markCol(int j, vector<vector<int>>& matrix){
        int n= matrix.size();
        int m=matrix[0].size();
        for(int i=0; i<n; i++){
            if(matrix[i][j] != 0){
                matrix[i][j]=-298880;
            }
        }
    }
public:
    void setZeroes(vector<vector<int>>& matrix) {

        int n= matrix.size();
        int m=matrix[0].size();
        for(int i=0; i<n; i++){

            for(int j=0; j<m; j++){
                if(matrix[i][j]==0){
                    markRow(i, matrix);
                    markCol(j, matrix);
                }
            }
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j]==-298880){
                    matrix[i][j]=0;
                }
            }
        }
    }
};
Tc-->O(n^3)
Sc-->0(1)


  
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        int n=matrix.size();
        int m=matrix[0].size();

        int col[m];
        for(int i=0; i<m; i++){
            col[i]=0;
        }
        int row[n];
        for(int j=0; j<n; j++){
            row[j]=0;
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){

                if(matrix[i][j]==0){
                    row[i]=1;
                    col[j]=1;
                }

            }
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){

                if(row[i] || col[j]){
                    matrix[i][j]=0;
                }

            }
        }
    }
};
Tc-->O(n^2)
Sc-->O(n)+O(m)



class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        int n=matrix.size();
        int m=matrix[0].size();
        int col0=1;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){

                if(matrix[i][j]==0){
                    matrix[i][0]=0;

                    if(j != 0){
                        matrix[0][j]=0;
                    }
                    else{
                        col0=0;
                    }

                }

            }
        }

        for(int i=1; i<n; i++){
            for(int j=1; j<m; j++){

                if(matrix[i][j] != 0){
                    if(matrix[i][0]==0 || matrix[0][j]==0){
                        matrix[i][j]=0;
                    }
                }

            }
        }

        if(matrix[0][0]==0){
            for(int j=0; j<m; j++){
                matrix[0][j]=0;
            }
        }

        if(col0==0){
            for(int i=0; i<n; i++){
                matrix[i][0]=0;
            }
        }
    }
};
Tc-->O(n^2)
Sc-->O(1)
