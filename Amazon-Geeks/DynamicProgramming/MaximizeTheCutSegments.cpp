// Problem Link: https://practice.geeksforgeeks.org/problems/cutted-segments1642/1/?track=amazon-dynamic-programming&batchId=192#
// Unlike the Rod cutting problem, here we need to amaximize the number of cuts and not the values.

int maximizeTheCuts(int n, int x, int y, int z)
{

   int mat[n+1];

   memset(mat,-1,sizeof(mat));
   mat[0] = 0;

   for(int i=1;i<n+1;i++){

       // Compares the maximum choice values between x, y and z through mat[i];

       if(i-x >= 0){
           mat[i] = max(mat[i],mat[i-x]);
       }
       if(i-y >= 0){
           mat[i] = max(mat[i],mat[i-y]);
       }
       if(i-z >= 0){
           mat[i] = max(mat[i],mat[i-z]);
       }

       if(mat[i] != -1) mat[i]++;

   }

   if(mat[n] == -1) return 0;

   return mat[n];
}
